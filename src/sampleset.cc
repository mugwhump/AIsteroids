// libgp - Gaussian process library for Machine Learning
// Copyright (c) 2011, Manuel Blum <mblum@informatik.uni-freiburg.de>
// All rights reserved.

#include "sampleset.h"

namespace libgp {
  
  SampleSet::SampleSet (int input_dim)
  {
    this->input_dim = input_dim;
    n = 0;
  }
  
  SampleSet::~SampleSet() 
  {
    clear();
  }
  
  void SampleSet::add(const double x[], double y)
  {
    Eigen::VectorXd * v = new Eigen::VectorXd(input_dim);
    for (size_t i=0; i<input_dim; ++i) {
		(*v)(i) = x[i];
	}
    inputs.push_back(v);
    targets.push_back(y);
    assert(inputs.size()==targets.size());
    n = inputs.size();
  }
  
  const Eigen::VectorXd & SampleSet::x(size_t k)
  {
    return *inputs.at(k);
  }
  
  double SampleSet::y(size_t k)
  {
    return targets.at(k);
  }
  
  size_t SampleSet::size()
  {
    return n;
  }
  
  void SampleSet::clear()
  {
    while (!inputs.empty()) {
      delete inputs.back();
      inputs.pop_back();
    }    
    n = 0;
    targets.clear();
  }
  
  bool SampleSet::empty ()
  {
    return n==0;
  }
}
