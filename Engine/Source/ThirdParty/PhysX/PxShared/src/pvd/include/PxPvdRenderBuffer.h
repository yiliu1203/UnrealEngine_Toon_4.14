// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2016 NVIDIA Corporation. All rights reserved.
// Copyright (c) 2004-2008 AGEIA Technologies, Inc. All rights reserved.
// Copyright (c) 2001-2004 NovodeX AG. All rights reserved.

#ifndef PXPVDSDK_PXPVDRENDERBUFFER_H
#define PXPVDSDK_PXPVDRENDERBUFFER_H

/** \addtogroup pvd
@{
*/

#include "foundation/PxVec3.h"

#if !PX_DOXYGEN
namespace physx
{
namespace pvdsdk
{
#endif

/**
\brief Default color values used for debug rendering.
*/
struct PvdDebugColor
{
	enum Enum
	{
		eARGB_BLACK     = 0xff000000,
		eARGB_RED       = 0xffff0000,
		eARGB_GREEN     = 0xff00ff00,
		eARGB_BLUE      = 0xff0000ff,
		eARGB_YELLOW    = 0xffffff00,
		eARGB_MAGENTA   = 0xffff00ff,
		eARGB_CYAN      = 0xff00ffff,
		eARGB_WHITE     = 0xffffffff,
		eARGB_GREY      = 0xff808080,
		eARGB_DARKRED   = 0x88880000,
		eARGB_DARKGREEN = 0x88008800,
		eARGB_DARKBLUE  = 0x88000088
	};
};

/**
\brief Used to store a single point and colour for debug rendering.
*/
struct PvdDebugPoint
{
	PvdDebugPoint(const PxVec3& p, const uint32_t& c) : pos(p), color(c)
	{
	}

	PxVec3 pos;
	uint32_t color;
};

/**
\brief Used to store a single line and colour for debug rendering.
*/
struct PvdDebugLine
{
	PvdDebugLine(const PxVec3& p0, const PxVec3& p1, const uint32_t& c) : pos0(p0), color0(c), pos1(p1), color1(c)
	{
	}

	PxVec3 pos0;
	uint32_t color0;
	PxVec3 pos1;
	uint32_t color1;
};

/**
\brief Used to store a single triangle and colour for debug rendering.
*/
struct PvdDebugTriangle
{
	PvdDebugTriangle(const PxVec3& p0, const PxVec3& p1, const PxVec3& p2, const uint32_t& c)
	: pos0(p0), color0(c), pos1(p1), color1(c), pos2(p2), color2(c)
	{
	}

	PxVec3 pos0;
	uint32_t color0;
	PxVec3 pos1;
	uint32_t color1;
	PxVec3 pos2;
	uint32_t color2;
};

/**
\brief Used to store a text for debug rendering. Doesn't own 'string' array.
*/
struct PvdDebugText
{
	PvdDebugText() : string(0)
	{
	}

	PvdDebugText(const PxVec3& p, const float& s, const uint32_t& c, const char* str)
	: position(p), size(s), color(c), string(str)
	{
	}

	PxVec3 position;
	float size;
	uint32_t color;
	const char* string;
};

#if !PX_DOXYGEN
}
} // namespace physx
#endif

/** @} */
#endif // PXPVDSDK_PXPVDRENDERBUFFER_H
