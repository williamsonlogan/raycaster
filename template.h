#ifndef _H_AGK_TEMPLATE_
#define _H_AGK_TEMPLATE_

// Link to GDK libraries
#include "AGK.h"

#include <cstdint>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>

#define DEVICE_WIDTH 1280
#define DEVICE_HEIGHT 720
//#define DEVICE_POS_X 32
//#define DEVICE_POS_Y 32
#define FULLSCREEN false

// used to make a more unique folder for the write path
#define COMPANY_NAME "Feesh Games"

#define screenWidth 512
#define screenHeight 288
#define texWidth 64
#define texHeight 64
#define mapWidth 24
#define mapHeight 24

// Global values for the app
class app
{
public:

	// constructor
	app() { memset(this, 0, sizeof(app)); }

	// main app functions - mike to experiment with a derived class for this..
	void Begin(void);
	int Loop(void);
	void End(void);

	double posX;
	double posY;
	double dirX;
	double dirY;
	double planeX;
	double planeY;

	double time;
	double oldTime;

	int buffer[screenHeight][screenWidth]; // y-coordinate first because it works per scanline
	int lastBuffer[screenHeight][screenWidth]; // for comparing changed pixels
	std::vector<int> texture[8];
	std::vector<int> loadedTextures;
};

extern app App;

#endif

// Allow us to use the LoadImage function name
#ifdef LoadImage
#undef LoadImage
#endif