// libgp - Gaussian process library for Machine Learning
// Copyright (c) 2011, Manuel Blum <mblum@informatik.uni-freiburg.de>
// All rights reserved.

#include "gp_sparse.h"

#include "MyError.h"

namespace libgp {
  
  SparseGaussianProcess::SparseGaussianProcess (size_t input_dim, std::string covf_def) : GaussianProcess(input_dim, covf_def) {}
  
  SparseGaussianProcess::SparseGaussianProcess (const char * filename) : GaussianProcess(filename) {}
  
  SparseGaussianProcess::~SparseGaussianProcess () {}  
  
  
  void SparseGaussianProcess::compute()
  {    
  
    if (sampleset->empty()) throw NumericalError("Error computing GP, sampeset is empty!", __LINE__); 
	
    if (cf->get_threshold() == 0x7ff0000000000000) { //INFINITY, default val.
      throw NumericalError("warning: no threshold defined, computation will be slow. Use full GP or define distance threshold!", __LINE__);
    }
	
    Eigen::SparseMatrix<double> K(sampleset->size(), sampleset->size());
    alpha.resize(sampleset->size());
	
    // compute kernel matrix (lower triangle)
    for(size_t i = 0; i < sampleset->size(); ++i) {
      K.startVec(i);
      for(size_t j = i; j < sampleset->size(); ++j) {
        double cov = cf->get(sampleset->x(i), sampleset->x(j));
        if (cov != 0) K.insertBack(j,i) = cov;
      }
      alpha(i) = sampleset->y(i);
    }
    K.finalize();
	
    // perform cholesky factorization
    solver.compute(K);
    alpha = solver.solve(alpha);
	
	if( solver.info() != Eigen::ComputationInfo::Success ){
		throw NumericalError("Error computing sparse GP, computation not successful!", __LINE__);
	}
  }
  
}