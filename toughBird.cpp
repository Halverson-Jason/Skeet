 /*File: toughBird.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "toughBird.h" 
#include "uiDraw.h"

/***********************************************************************
 * 
***********************************************************************/
ToughBird  :: ToughBird()
{
   hits = 3;
   startingDx = random(2,4);
}

/***********************************************************************
 * 
***********************************************************************/
void ToughBird :: draw()
{
   drawToughBird(currentPoint, (int)radius, hits);
}
