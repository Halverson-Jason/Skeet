 /*File: birds.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "sacredBird.h" 
#include "uiDraw.h"
#define SACREDBIRD_HITS -10

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

/***********************************************************************
 * determines how many points to add / subtract
 * returns int of points
***********************************************************************/
int SacredBird :: hit()
{
   hits += SACREDBIRD_HITS;
   kill();
   return hits;
}