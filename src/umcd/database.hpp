/*
	Copyright (C) 2013 by Pierre Talbot <ptalbot@mopong.net>
	Part of the Battle for Wesnoth Project http://www.wesnoth.org/

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY.

	See the COPYING file for more details.
*/

#ifndef UMCD_DATABASE_HPP
#define UMCD_DATABASE_HPP

#include "umcd/otl/otl.hpp"

namespace umcd{

class database
{
public:
	database();
	otl_connect& db();

private:
	struct otl_initializer
	{
		otl_initializer();
	};
	static otl_initializer otl_initializer_;
	static otl_connect db_;
};

} // namespace umcd

#endif // UMCD_DATABASE_HPP
