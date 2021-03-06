// -*- mode: c++; indent-tabs-mode: t; tab-width: 4; c-basic-offset: 4; -*-
/*
 * Copyright (c) 2008, AIST, the University of Tokyo and General Robotix Inc.
 * All rights reserved. This program is made available under the terms of the
 * Eclipse Public License v1.0 which accompanies this distribution, and is
 * available at http://www.eclipse.org/legal/epl-v10.html
 * Contributors:
 * National Institute of Advanced Industrial Science and Technology (AIST)
 * General Robotix Inc. 
 */
#ifndef OPENHRP_CONFIG_H_INCLUDED
#define OPENHRP_CONFIG_H_INCLUDED

// for Windows DLL export 
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
# ifdef HRPBASE_MAKE_DLL
#   define HRPBASE_EXPORT __declspec(dllexport)
# else 
#   define HRPBASE_EXPORT __declspec(dllimport)
# endif
#else 
# define HRPBASE_EXPORT 
#endif /* Windows */


#endif
