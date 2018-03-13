 /*File: standardBird.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "standardBird.h" 
#include "uiDraw.h"
#define STANDARDBIRD_HITS 1

/***********************************************************************
 * 
***********************************************************************/
StandardBird :: StandardBird()
{

}

/***********************************************************************
 * calls the drawCircle function from uiDraw.cpp
***********************************************************************/
void StandardBird :: draw()
{
   drawCircle(currentPoint, (int)radius);
}

/***********************************************************************
 * determines how many points to add / subtract
 * returns int of points
***********************************************************************/
int StandardBird :: hit()
{
   hits += STANDARDBIRD_HITS;
   kill();
   return hits;
}