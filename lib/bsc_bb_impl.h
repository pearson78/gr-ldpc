/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_LDPC_BSC_BB_IMPL_H
#define INCLUDED_LDPC_BSC_BB_IMPL_H

#include <ldpc/bsc_bb.h>

namespace gr {
  namespace ldpc {

    class bsc_bb_impl : public bsc_bb
    {
     private:
      float d_epsilon;
      int nerr;
      int d_vlen;
      float limit;
      int X;
      char * err_vec;

     public:
      bsc_bb_impl(int vlen, float epsilon);
      ~bsc_bb_impl();
      int get_nerr();
      char * get_err_vec();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace ldpc
} // namespace gr

#endif /* INCLUDED_LDPC_BSC_BB_IMPL_H */

