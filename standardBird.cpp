 /*File: standardBird.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "standardBird.h" 
#include "uiDraw.h"

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
