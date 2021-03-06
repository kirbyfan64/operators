// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_DECREMENTABLE_HPP
#define DF_INCLUDE_DECREMENTABLE_HPP

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T >
    class decrementable
    {
      friend T operator--( T& arg, int )
        noexcept( noexcept( T( arg ), --arg, T( std::declval< T >() ) ) )
      {
        const T nrv( arg );
        --arg;
        return nrv;
      }
    };
  }

  using namespace operators_impl;
}

#endif
