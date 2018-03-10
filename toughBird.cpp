 /*File: toughBird.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "toughBird.h" 
#include "uiDraw.h"

#define STARTING_DX_MIN 2.0
#define STARTING_DX_MAX 3.0

/***********************************************************************
 * 
***********************************************************************/
ToughBird  :: ToughBird()
{
   hits = 3;
   startingDx = random(STARTING_DX_MIN, STARTING_DX_MAX);
}

/***********************************************************************
 * 
***********************************************************************/
void ToughBird :: draw()
{
   drawToughBird(currentPoint, (int)radius, hits);
}
