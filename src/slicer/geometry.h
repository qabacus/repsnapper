/*
    This file is a part of the RepSnapper project.
    Copyright (C) 2010 Kulitorum

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#pragma once

#include "stdafx.h"


using namespace std;
using namespace vmml;


struct printline;

struct Intersection
{
	Vector2d p;  // The intersection point
	double d;     // Distance from the start point, used for sorting hits
	double t;     // intersection point on first line
  bool operator <(const Intersection &p) const { return (d<p.d); } // for std::sort
};


bool IntersectXY(const Vector2d &p1, const Vector2d &p2,
		 const Vector2d &p3, const Vector2d &p4, 
		 Intersection &hit, double maxoffset=0.0001);



double dist3D_Segment_to_Segment(Vector3d S1P0, Vector3d S1P1, 
				 Vector3d S2P0, Vector3d S2P1, double SMALL_NUM);
