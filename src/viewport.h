/*****************************************************************************
 * Copyright (c) 2014 Ted John
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 * 
 * This file is part of OpenRCT2.
 * 
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _VIEWPORT_H_
#define _VIEWPORT_H_

#include "window.h"

enum {
	VIEWPORT_FLAG_UNDERGROUND_INSIDE = (1 << 0),
	VIEWPORT_FLAG_SEETHROUGH_RIDES = (1 << 1),
	VIEWPORT_FLAG_SEETHROUGH_SCENERY = (1 << 2),
	VIEWPORT_FLAG_INVISIBLE_SUPPORTS = (1 << 3),
	VIEWPORT_FLAG_LAND_HEIGHTS = (1 << 4),
	VIEWPORT_FLAG_TRACK_HEIGHTS = (1 << 5),
	VIEWPORT_FLAG_PATH_HEIGHTS = (1 << 6),
	VIEWPORT_FLAG_GRIDLINES = (1 << 7),
	VIEWPORT_FLAG_LAND_OWNERSHIP = (1 << 8),
	VIEWPORT_FLAG_9 = (1 << 9),
	VIEWPORT_FLAG_10 = (1 << 10),
	VIEWPORT_FLAG_INVISIBLE_PEEPS = (1 << 11),
	VIEWPORT_FLAG_HIDE_BASE = (1 << 12),
	VIEWPORT_FLAG_HIDE_VERTICAL = (1 << 13),
	VIEWPORT_FLAG_INVISIBLE_SPRITES = (1 << 14),
	VIEWPORT_FLAG_15 = (1 << 15)
};

void viewport_init_all();
void viewport_update_pointers();
void viewport_update_position(rct_window *window);

#endif