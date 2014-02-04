/*=============================================================================
  Copyright (c) 2010-2014 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprig

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPRIG_CONFIG_LIBINFO_HAMIGAKI_HPP
#define SPRIG_CONFIG_LIBINFO_HAMIGAKI_HPP

#include <sprig/config/pragma_once.hpp>

#ifdef SPRIG_USING_PRAGMA_ONCE
#	pragma once
#endif	// #ifdef SPRIG_USING_PRAGMA_ONCE

#if defined(SPRIG_CONFIG_LIBINFO_MESSAGE) || defined(SPRIG_CONFIG_LIBINFO_MESSAGE_HAMIGAKI)

#	include <sprig/config/pragma_message.hpp>
#	ifdef SPRIG_HAS_PRAGMA_MESSAGE

#		include <hamigaki/version.hpp>
#		include <boost/preprocessor/stringize.hpp>

#		pragma message("sprig/config/libinfo/hamigaki.hpp")
#		pragma message("    HAMIGAKI_VERSION       = " BOOST_PP_STRINGIZE(HAMIGAKI_VERSION))
#		pragma message("    HAMIGAKI_LIB_VERSION   = " BOOST_PP_STRINGIZE(HAMIGAKI_LIB_VERSION))

#	endif	// #ifdef SPRIG_HAS_PRAGMA_MESSAGE

#endif	// #if defined(SPRIG_CONFIG_LIBINFO_MESSAGE) || defined(SPRIG_CONFIG_LIBINFO_MESSAGE_HAMIGAKI)

#endif	// #ifndef SPRIG_CONFIG_LIBINFO_HAMIGAKI_HPP
