// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_SHIFTABLE_HPP
#define DF_INCLUDE_SHIFTABLE_HPP

#include "left_shiftable.hpp"
#include "right_shiftable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class shiftable
      : left_shiftable< T, U >, right_shiftable< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif