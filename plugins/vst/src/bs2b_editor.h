/*-
 * Copyright (c) 2007 Boris Mikhaylov
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

#ifndef BS2B_EDITOR_H
#define BS2B_EDITOR_H

#include <vstgui.h>

class bs2b_editor : public AEffGUIEditor, public CControlListener
{
public:
	bs2b_editor( AudioEffect *effect );
	virtual ~bs2b_editor();

public:
	virtual bool open( void *ptr );
	virtual void close();

	virtual void setParameter( VstInt32 index, float value );
	virtual void valueChanged( CDrawContext *context, CControl *control );

private:
	CHorizontalSlider *feed_fader;
	CHorizontalSlider *fcut_fader;
	CHorizontalSlider *defs_fader;

	CParamDisplay *feed_display;
	CParamDisplay *fcut_display;
	CParamDisplay *defs_display;

	CBitmap *hBackground;
};

#endif // BS2B_EDITOR_H
