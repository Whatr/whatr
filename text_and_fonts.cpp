#include "text_and_fonts.h"

void calculateTextSize(ConstStr text, int availableWidth, int* charWidths, int* charHeights, int& widthOut, int& heightOut)
{
	if (text.length==0)
	{
		widthOut = 0;
		heightOut = 0;
		return;
	}
	ConstStrIterator i = text.iterate();
	int width = 0;
	const int height = charHeights['|'];
	int lines = 0;
	int* lineBreaks = new int[256];
	int lastWhiteSpace = -1;
	for (; i.pos<text.length; i++)
	{
		char c = *i;
		if (c==' ' || c=='\n' || c=='\r' || c=='\t')
		{
			lastWhiteSpace = i.pos;
		}
		width += charWidths[c];
		if (width>availableWidth)
		{
			if (lastWhiteSpace==-1) // cut the word
			{
				lineBreaks[lines] = i.pos-1;
				lines++;
				i--;
				width = 0;
			}
			else // cut the sentence
			{
				i.jump(lastWhiteSpace);
				lineBreaks[lines] = lastWhiteSpace;
				lines++;
				lastWhiteSpace = -1;
				width = 0;
			}
		}
	}
	lineBreaks[lines] = i.pos;
	lines++;
	for (int j=0;j<lines;j++)
	{
		int start = (j==0) ? 0 : lineBreaks[j-1]+1;
		text.subString(start, lineBreaks[j]-start).printLine();
	}
	widthOut = width;
	heightOut = height*lines;
}

int loadFont(ConstStr name)
{
	return 7;
}

