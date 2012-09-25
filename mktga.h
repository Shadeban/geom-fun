#ifndef MKTGA_H
#define MKTGA_H
#include <string>
typedef unsigned char byte;
typedef struct
{
	byte red, green, blue;
} RGB_t;


bool write_truecolor_tga( const std::string& , RGB_t* , unsigned , unsigned );






#endif
