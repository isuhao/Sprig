/*=============================================================================
  Copyright (c) 2010-2014 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprig

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPRIG_VERSION_STRINGIZE_HPP
#define SPRIG_VERSION_STRINGIZE_HPP

#include <sprig/config/config.hpp>

#ifdef SPRIG_USING_PRAGMA_ONCE
#	pragma once
#endif	// #ifdef SPRIG_USING_PRAGMA_ONCE

#include <boost/preprocessor/stringize.hpp>
#include <boost/preprocessor/wstringize.hpp>

//
// SPRIG_VERSION_STRINGIZE_QUAD
// SPRIG_VERSION_WSTRINGIZE_QUAD
//
#define SPRIG_VERSION_STRINGIZE_QUAD(QUAD, DELIM) \
	SPRIG_VERSION_STRINGIZE_QUAD_I((QUAD, DELIM))
#define SPRIG_VERSION_WSTRINGIZE_QUAD(QUAD, DELIM) \
	SPRIG_VERSION_WSTRINGIZE_QUAD_I((QUAD, DELIM))

#define SPRIG_VERSION_STRINGIZE_QUAD_I(QUAD_DELIM) \
	SPRIG_VERSION_STRINGIZE_QUAD_II QUAD_DELIM
#define SPRIG_VERSION_STRINGIZE_QUAD_II(V0, V1, V2, V3, DELIM) \
	BOOST_PP_STRINGIZE(V0) BOOST_PP_STRINGIZE(DELIM) \
	BOOST_PP_STRINGIZE(V1) BOOST_PP_STRINGIZE(DELIM) \
	BOOST_PP_STRINGIZE(V2) BOOST_PP_STRINGIZE(DELIM) \
	BOOST_PP_STRINGIZE(V3)

#define SPRIG_VERSION_WSTRINGIZE_QUAD_I(QUAD_DELIM) \
	SPRIG_VERSION_WSTRINGIZE_QUAD_II QUAD_DELIM
#define SPRIG_VERSION_WSTRINGIZE_QUAD_II(V0, V1, V2, V3, DELIM) \
	BOOST_PP_WSTRINGIZE(V0) BOOST_PP_WSTRINGIZE(DELIM) \
	BOOST_PP_WSTRINGIZE(V1) BOOST_PP_WSTRINGIZE(DELIM) \
	BOOST_PP_WSTRINGIZE(V2) BOOST_PP_WSTRINGIZE(DELIM) \
	BOOST_PP_WSTRINGIZE(V3)

#endif	// #ifndef SPRIG_VERSION_STRINGIZE_HPP
