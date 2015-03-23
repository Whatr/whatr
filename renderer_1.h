/* Copyright (C) 2015 Jesse Busman
/* This program is free software: you can redistribute it and/or modify
/* it under the terms of the GNU General Public License as published by
/* the Free Software Foundation, either version 3 of the License, or
/* (at your option) any later version.
/* This program is distributed in the hope that it will be useful,
/* but WITHOUT ANY WARRANTY; without even the implied warranty of
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/* GNU General Public License for more details.
/* You should have received a copy of the GNU General Public License
/* along with this program.  If not, see <http://www.gnu.org/licenses/>  */

#ifndef renderer_1_included
#define renderer_1_included yes

#include "html_yaccer.h"

class renderer1Args
{
public:
	int* rendering1;
	std::vector<HTMLElement*>* HTMLElements;
	renderer1Args(	int* rendering1,
					std::vector<HTMLElement*>* HTMLElements):
		rendering1(rendering1),
		HTMLElements(HTMLElements){};
};
void* renderer1ThreadFunc(void* args);

#endif