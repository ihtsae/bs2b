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

#include "bs2bclass.h"

bs2b_base::bs2b_base()
{
	bs2bdp = bs2b_open();
}

bs2b_base::~bs2b_base()
{
	bs2b_close( bs2bdp );
}

void bs2b_base::set_level( int level )
{
	bs2b_set_level( bs2bdp, level );
}

int bs2b_base::get_level()
{
	return bs2b_get_level( bs2bdp );
}

void bs2b_base::set_srate( long srate )
{
	bs2b_set_srate( bs2bdp, srate );
}

long bs2b_base::get_srate()
{
	return bs2b_get_srate( bs2bdp );
}

void bs2b_base::clear()
{
	bs2b_clear( bs2bdp );
}

bool bs2b_base::is_clear()
{
	return( bs2b_is_clear( bs2bdp ) ? true : false );
}

void bs2b_base::cross_feed( double *sample )
{
	bs2b_cross_feed( bs2bdp, sample );
}

void bs2b_base::cross_feed( float *sample )
{
	bs2b_cross_feed_f32( bs2bdp, sample );
}

void bs2b_base::cross_feed( long *sample )
{
	bs2b_cross_feed_32( bs2bdp, sample );
}

void bs2b_base::cross_feed( short *sample )
{
	bs2b_cross_feed_16( bs2bdp, sample );
}

void bs2b_base::cross_feed( char *sample )
{
	bs2b_cross_feed_s8( bs2bdp, sample );
}

void bs2b_base::cross_feed( unsigned char *sample )
{
	bs2b_cross_feed_u8( bs2bdp, sample );
}

void bs2b_base::cross_feed( void *sample )
{
	bs2b_cross_feed_24( bs2bdp, sample );
}