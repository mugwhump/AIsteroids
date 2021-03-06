// libgp - Gaussian process library for Machine Learning
// Copyright (c) 2011, Manuel Blum <mblum@informatik.uni-freiburg.de>
// All rights reserved.

#ifndef __COV_LINEAR_ARD_H__
#define __COV_LINEAR_ARD_H__

#include "cov.h"

namespace libgp
{
  
  /** Linear covariance function with automatic relevance detection.
   *  @ingroup cov_group
   *  @author Manuel Blum
   */
  class CovLinearard : public CovarianceFunction
  {
  public:
    CovLinearard ();
    virtual ~CovLinearard ();
    bool init(int n);
    double get(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2);
    void grad(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2, Eigen::VectorXd &grad);
    void set_loghyper(const Eigen::VectorXd &p);
    virtual std::string to_string();
  private:
    Eigen::VectorXd ell;
    double sf2;
  };
  
}

#endif /* __COV_LINEAR_ARD_H__ */
