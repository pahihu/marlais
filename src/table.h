/*

   table.h

   This software is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This software is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this software; if not, write to the Free
   Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   Original copyright notice follows:

   Copyright, 1993, Brent Benson.  All Rights Reserved.
   0.4 & 0.5 Revisions Copyright 1994, Joseph N. Wilson.  All Rights Reserved.

   Permission to use, copy, and modify this software and its
   documentation is hereby granted only under the following terms and
   conditions.  Both the above copyright notice and this permission
   notice must appear in all copies of the software, derivative works
   or modified version, and both notices must appear in supporting
   documentation.  Users of this software agree to the terms and
   conditions set forth in this notice.

 */

#ifndef TABLE_H
#define TABLE_H

#include "common.h"

#define DEFAULT_TABLE_SIZE 101

extern Object equal_symbol;

void init_table_prims (void);
Object make_table (int size);
Object make_table_entry (int row, Object key, Object value, Object next);
Object make_table_driver (Object rest);
Object table_element_setter (Object table, Object key, Object val);
Object table_element (Object table, Object key, Object default_val);
Object *table_element_by_vector (Object table, Object key);
Object table_element_setter_by_vector (Object table, Object key, Object val);

#endif
