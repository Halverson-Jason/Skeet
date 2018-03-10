 /*File: birds.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "sacredBird.h" 
#include "uiDraw.h"

/***********************************************************************
 * 
***********************************************************************/
SacredBird :: SacredBird()
{
   startingDx = random(3,6);
}

/***********************************************************************
 * 
***********************************************************************/
void SacredBird :: draw()
{
   drawSacredBird(currentPoint, radius);
}