/* SEM 2019
 * by Ludvik Rønning & Jørgen Wisløff
 * Library with code for the two SharpMem screens
 */

#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include "helpers.h"

#include <Adafruit_SharpMem_edited.h>
#include <Adafruit_GFX.h>
#include <gfxfont.h>

/* SCREEN INCLUDES */
//Bitmaps for backgrounds:
#include "left.h"
#include "right.h"

//Fonts:
#include "fonts/FreeMono9pt7b.h"
#include "fonts/FreeMono12pt7b.h"
#include "fonts/FreeMono18pt7b.h"
#include "fonts/FreeMono24pt7b.h"

#include "fonts/FreeMonoBold9pt7b.h"
#include "fonts/FreeMonoBold12pt7b.h"
#include "fonts/FreeMonoBold18pt7b.h"
#include "fonts/FreeMonoBold24pt7b.h"

enum ORIENTATION { UP = 0, LEFT = 1, DOWN = 2, RIGHT = 3 };

/* SCREEN PARAMETERS */
#define WIDTH  320
#define HEIGHT 240
#define BLACK 0
#define WHITE 1

#define LEFTSCREEN false
#define RIGHTSCREEN true

/*----------- SCREEN VARIABLES ----------- */

//FONT HEIGHTS
const uint8_t M24 = 40;
const uint8_t M18 = 28;
const uint8_t M12 = 12;
const uint8_t M9 = 9;

//Lap Count
const uint8_t lapCountVerticalMargin = 65; //to bottom left?
const uint8_t lapCountHorizontalMargin = 30;
const uint8_t lapCountVertical = 60;
const uint8_t lapCountHorizontal = 140;

//Lap Time
const uint8_t lapTimeVerticalMargin = 170; //to bottom left?
const uint8_t lapTimeHorizontalMargin = 90;
const uint8_t lapTimeVertical = 200;
const uint8_t lapTimeHorizontal = 140;

//Tme 
const uint8_t timeHorizontalMargin = 125;
const uint8_t timeVerticalMargin = 250;
const uint8_t timeHorizontal = 105;

/*-------------------------- FUNCTIONS --------------------------*/

/*class screens : public Adafruit_sharpMem {
  
}*/


void drawBackground(Adafruit_SharpMem& screen, bool right=true); // Draws the background bitmap defined in a .h file.
void drawString(Adafruit_SharpMem& screen, const char * str, int x, int y, int size=1);
void drawStringLong(Adafruit_SharpMem& screen, const char * str, int x, int y, int size=1); //denne trengs!!

//INIT FUNCTIONS

void initScreen(Adafruit_SharpMem& screen, bool right);
void initText(Adafruit_SharpMem& screen, bool right);

//DRAW FUNCTIONS FOR LEFT SCREEN
void drawLapCount(Adafruit_SharpMem& screen, volatile const uint8_t& lapCount, const uint8_t& maxLaps);
void drawLapTime(Adafruit_SharpMem& screen, const int& lapTimeSeconds);
void drawTime(Adafruit_SharpMem& screen, const int& timeSeconds);
void drawRectangle(Adafruit_SharpMem& screen);
void drawSector(Adafruit_SharpMem& screen, int sector);


//DRAW FUNCTIONS FOR RIGHT SCREEN
void drawSpeed(Adafruit_SharpMem& screen, const float& motor1speed, const float& motor2speed);
void drawGear(Adafruit_SharpMem& screen, const char gear);

void drawCirkle(Adafruit_SharpMem& screen, const uint8_t x, const uint8_t y, const uint8_t r);


#endif
