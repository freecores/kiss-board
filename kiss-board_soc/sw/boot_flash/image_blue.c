
#include "image.h"


#define IMAGE_BLUE_SRC_SIZE 256

const unsigned short int image_blue_src[16][16] = {
	{ // line:0
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:1
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:2
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:3
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:4
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:5
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:6
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:7
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:8
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:9
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:10
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:11
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:12
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:13
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:14
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	},
	{ // line:15
		0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f,0x001f
	}
};

const IMAGE image_blue = { 16 , 16 , (void *)image_blue_src };

