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

}

/***********************************************************************
 * 
***********************************************************************/
void SacredBird :: draw()
{
   drawSacredBird(currentPoint, radius);
}