/*

   globaldefs.h

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

/* This file should only be included once in main.c.
 */

/* globals */
extern jmp_buf error_return;
extern int definition_level;
extern int classic_syntax;



extern int load_file_context;

/* important objects */
extern Object apply_symbol;
extern Object size_keyword;
extern Object fill_keyword;
extern Object default_object;
extern Object true_object;
extern Object false_object;
extern Object eof_object;
extern Object unspecified_object;
extern Object uninit_slot_object;
extern Object key_symbol;
extern Object keyword_symbol;
extern Object required_symbol;
extern Object allkeys_symbol;
extern Object hash_rest_symbol;
extern Object next_symbol;
extern Object all_symbol;
extern Object values_symbol;
extern Object hash_values_symbol;
extern Object quote_symbol;
extern Object getter_keyword;
extern Object setter_keyword;
extern Object else_keyword;
extern Object type_keyword;
extern Object init_value_keyword;
extern Object init_function_keyword;
extern Object deferred_type_keyword;
extern Object init_keyword_keyword;
extern Object required_init_keyword_keyword;
extern Object allocation_keyword;
extern Object unwind_symbol;
extern Object next_method_symbol;
extern Object initialize_symbol;
extern Object equal_hash_symbol;
extern Object object_class_symbol;
extern Object quasiquote_symbol;
extern Object unquote_symbol;
extern Object unquote_splicing_symbol;
extern Object super_classes_keyword;
extern Object slots_keyword;
extern Object debug_name_keyword;
extern Object min_keyword;
extern Object max_keyword;
extern Object dim_keyword;

extern Object instance_symbol;
extern Object class_symbol;
extern Object each_subclass_symbol;
extern Object inherited_symbol;
extern Object constant_symbol;
extern Object virtual_symbol;
extern Object obj_sym;
extern Object slot_val_sym;
extern Object set_slot_value_sym;
extern Object val_sym;
extern Object initial_state_sym;
extern Object next_state_sym;
extern Object current_element_sym;
extern Object element_symbol;
extern Object element_setter_symbol;
extern Object signal_symbol;
extern Object concatenate_symbol;

extern Object not_symbol;
extern Object colon_equal_symbol;
extern Object not_equal_symbol;
extern Object equal_equal_symbol;
extern Object greater_equal_symbol;
extern Object lesser_equal_symbol;
extern Object or_symbol;
extern Object and_symbol;
extern Object equal_symbol;
extern Object greater_symbol;
extern Object lesser_symbol;
extern Object exponent_symbol;
extern Object divides_symbol;
extern Object times_symbol;
extern Object minus_symbol;
extern Object plus_symbol;

/* builtin classes */
extern Object object_class;
extern Object boolean_class;
extern Object number_class;
extern Object complex_class;
extern Object real_class;
extern Object rational_class;
extern Object integer_class;
extern Object small_integer_class;
extern Object big_integer_class;
extern Object ratio_class;
extern Object float_class;
extern Object single_float_class;
extern Object double_float_class;
extern Object collection_class;
extern Object mutable_sequence_class;
extern Object list_class;
extern Object empty_list_class;
extern Object pair_class;
extern Object string_class;
extern Object byte_string_class;
extern Object unicode_string_class;
extern Object vector_class;
extern Object simple_object_vector_class;
extern Object explicit_key_collection_class;
extern Object mutable_explicit_key_collection_class;
extern Object stretchy_collection_class;
extern Object mutable_collection_class;
extern Object sequence_class;
extern Object table_class;
extern Object object_table_class;
extern Object deque_class;
extern Object array_class;
extern Object condition_class;
extern Object serious_condition_class;
extern Object error_class;
extern Object simple_error_class;
extern Object type_error_class;
extern Object sealed_object_error_class;
extern Object warning_class;
extern Object simple_warning_class;
extern Object restart_class;
extern Object simple_restart_class;
extern Object abort_class;
extern Object symbol_class;
extern Object keyword_class;
extern Object character_class;
extern Object function_class;
extern Object primitive_class;
extern Object generic_function_class;
extern Object method_class;
extern Object exit_function_class;
extern Object unwind_protect_function_class;
extern Object class_class;
extern Object stream_class;
extern Object table_entry_class;
extern Object deque_entry_class;
extern Object limited_int_class;
extern Object singleton_class;
extern Object type_class;
extern Object instance_slots_symbol;
extern Object class_slots_symbol;
extern Object each_subclass_slots_symbol;
extern Object statement_symbol;
extern Object cond_symbol;
extern Object equal_arrow_symbol;
extern Object colon_colon_symbol;
extern Object object_handle_class;
extern Object foreign_pointer_class;	/* <pcb> */

/* reserved word symbols */
extern Object above_symbol;
extern Object afterwards_symbol;
extern Object begin_symbol;
extern Object below_symbol;
extern Object block_symbol;
extern Object by_symbol;
extern Object case_symbol;
extern Object class_symbol;
extern Object cleanup_symbol;
extern Object constant_symbol;
extern Object define_symbol;
extern Object else_symbol;
extern Object elseif_symbol;
extern Object end_symbol;
extern Object exception_symbol;
extern Object finally_symbol;
extern Object for_symbol;
extern Object from_symbol;
extern Object generic_symbol;
extern Object handler_symbol;
extern Object if_symbol;
extern Object in_symbol;
extern Object let_symbol;
extern Object library_symbol;
extern Object local_symbol;
extern Object method_symbol;
extern Object function_symbol;
extern Object module_symbol;
extern Object otherwise_symbol;
extern Object select_symbol;
extern Object slot_symbol;
extern Object then_symbol;
extern Object to_symbol;
extern Object unless_symbol;
extern Object until_symbol;
extern Object until_keyword;
extern Object variable_symbol;
extern Object while_symbol;
extern Object while_keyword;
extern Object local_bind_symbol;
extern Object local_bind_rec_symbol;
extern Object unbinding_begin_symbol;
extern Object define_variable_symbol;
extern Object define_constant_symbol;
extern Object define_class_symbol;
extern Object define_generic_function_symbol;
extern Object define_method_symbol;
extern Object define_function_symbol;
extern Object seal_symbol;
extern Object set_bang_symbol;
extern Object singleton_symbol;
extern Object open_symbol;
extern Object sealed_symbol;
extern Object dynamism_keyword;
extern Object negative_symbol;
extern Object list_symbol;
extern Object pair_symbol;
extern Object variable_keyword;
extern Object to_symbol;
extern Object above_symbol;
extern Object below_symbol;
extern Object by_symbol;
extern Object range_keyword;
extern Object collection_keyword;
extern Object forward_iteration_protocol_symbol;
extern Object plus_symbol;
extern Object bind_symbol;
extern Object bind_exit_symbol;
extern Object exit_symbol;
extern Object unwind_protect_symbol;
extern Object vals_symbol;
extern Object modifiers_keyword;
extern Object abstract_symbol;
extern Object concrete_symbol;
extern Object primary_symbol;
extern Object free_symbol;
extern Object use_symbol;
extern Object export_symbol;
extern Object create_symbol;
extern Object define_module_symbol;
extern Object module_keyword;
extern Object empty_string_symbol;
extern Object import_keyword;
extern Object exclude_keyword;
extern Object prefix_keyword;
extern Object rename_keyword;
extern Object export_keyword;
extern Object dylan_symbol;
extern Object dylan_user_symbol;
extern Object empty_string;
extern Object define_test_symbol;
extern Object test_symbol;
extern Object x_symbol;

extern Object open_file_list;
extern Object description_symbol;
extern Object aref_symbol;
extern Object print_symbol;
extern Object princ_symbol;
