/*=============================================================================
  Copyright (c) 2010-2016 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprig

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPRIG_CONFIG_LIB_OPENAL_HPP
#define SPRIG_CONFIG_LIB_OPENAL_HPP

#ifdef SPRIG_CONFIG_LIB_USERCONFIG
#	include "../../../config/libconfig/openal.hpp"
#endif	// #ifdef SPRIG_CONFIG_LIB_USERCONFIG

#include <sprig/config/pragma_once.hpp>

#ifdef SPRIG_USING_PRAGMA_ONCE
#	pragma once
#endif	// #ifdef SPRIG_USING_PRAGMA_ONCE

#ifdef SPRIG_CONFIG_LIB_AUTO_LINK

#ifndef SPRIG_LIBCONFIG_OPENAL_BINARY
#	define SPRIG_LIBCONFIG_OPENAL_BINARY SPRIG_LIBCONFIG_OPENAL_LIB
#endif	// #ifndef SPRIG_LIBCONFIG_OPENAL_BINARY

#include <boost/preprocessor/stringize.hpp>
#include <sprig/config/pragma_comment.hpp>

#ifdef SPRIG_HAS_PRAGMA_COMMENT
#	ifdef SPRIG_LIBCONFIG_OPENAL_BINARY
#		pragma comment(lib, BOOST_PP_STRINGIZE(SPRIG_LIBCONFIG_OPENAL_BINARY))
#	endif	// #ifdef SPRIG_LIBCONFIG_OPENAL_BINARY
#endif	// #ifdef SPRIG_HAS_PRAGMA_COMMENT

#include <sprig/config/pragma_message.hpp>

#ifdef SPRIG_HAS_PRAGMA_MESSAGE
#	pragma message("sprig/config/lib/openal.hpp")
#	ifdef SPRIG_LIBCONFIG_OPENAL_BINARY
#		pragma message("    lib=" BOOST_PP_STRINGIZE(SPRIG_LIBCONFIG_OPENAL_BINARY))
#	endif	// #ifdef SPRIG_LIBCONFIG_OPENAL_BINARY
#endif	// #ifdef SPRIG_HAS_PRAGMA_MESSAGE

#endif	// #ifdef SPRIG_CONFIG_LIB_AUTO_LINK

#include <sprig/config/libinfo/openal.hpp>

#endif	// #ifndef SPRIG_CONFIG_LIB_OPENAL_HPP
