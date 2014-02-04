/*=============================================================================
  Copyright (c) 2010-2014 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprig

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPRIG_POLICY_ASSERT_POLICY_UNIQUE_ASSERT_HPP
#define SPRIG_POLICY_ASSERT_POLICY_UNIQUE_ASSERT_HPP

#include <sprig/config/config.hpp>

#ifdef SPRIG_USING_PRAGMA_ONCE
#	pragma once
#endif	// #ifdef SPRIG_USING_PRAGMA_ONCE

#include <sprig/policy/assert/assert.hpp>
#include <sprig/policy/detail/policy_unique_check_impl.hpp>

//
// SPRIG_POLICY_UNIQUE_ASSERT
//
#define SPRIG_POLICY_UNIQUE_ASSERT(TAG, TYPES) \
	SPRIG_POLICY_UNIQUE_CHECK_IMPL(TAG, TYPES, SPRIG_POLICY_ASSERT)

#endif	// #ifndef SPRIG_POLICY_ASSERT_POLICY_UNIQUE_ASSERT_HPP
