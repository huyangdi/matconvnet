// @file nnfullyconnected.hpp
// @brief Fully-connected block
// @author Andrea Vedaldi

/*
Copyright (C) 2014-17 Andrea Vedaldi.
All rights reserved.

This file is part of the VLFeat library and is made available under
the terms of the BSD license (see the COPYING file).
*/


#ifndef __vl__nnfullyconnected__
#define __vl__nnfullyconnected__

#include "data.hpp"

namespace vl { namespace nn {

  class FullyConnected {
  public:
    FullyConnected(vl::Context &context) ;

    vl::ErrorCode forward(vl::Tensor &output,
                          vl::Tensor const& input,
                          vl::Tensor const& filter,
                          vl::Tensor const& bias) ;

    vl::ErrorCode backward(vl::Tensor &derInput,
                           vl::Tensor &derFilter,
                           vl::Tensor &derBias,
                           vl::Tensor const &input,
                           vl::Tensor const &filter,
                           vl::Tensor const &derOutput) ;

    vl::Context& context ;
  } ;

} }

#endif /* defined(__vl__nnfullyconnected__) */
