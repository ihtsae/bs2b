/*-
 * Copyright (c) 2005 Boris Mikhaylov
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef BS2BCLASS_H
#define BS2BCLASS_H

#include "bs2b.h"

class bs2b_base
{
private:
	t_bs2bdp bs2bdp;

public:
	bs2b_base();
	~bs2b_base();

	void set_level( int level );
	int  get_level();
	void set_srate( long srate );
	long get_srate();
	void clear();
	bool is_clear();

	void cross_feed( double *sample );
	void cross_feed( float *sample );
	void cross_feed( long *sample );
	void cross_feed( short *sample );
	void cross_feed( char *sample );
	void cross_feed( unsigned char *sample );
	void cross_feed( void *sample );
}; // class bs2b_base

#endif // BS2BCLASS_H