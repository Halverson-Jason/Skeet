 /*File: toughBird.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "toughBird.h" 
#include "uiDraw.h"

#define STARTING_DX_MIN 2
#define STARTING_DX_MAX 4
#define STARTING_DY_MIN -3
#define STARTING_DY_MAX 3
#define TOUGHBIRD_HITS 1
#define BONUS 2

/***********************************************************************
 * 
***********************************************************************/
ToughBird  :: ToughBird()
{
   health = 3;
   setStartingDy(STARTING_DY_MIN , STARTING_DY_MAX);
   startingDx = random(STARTING_DX_MIN, STARTING_DX_MAX);
   velocity.setDx(startingDx);
   velocity.setDy(startingDy);
}

/***********************************************************************
 * 
***********************************************************************/
void ToughBird :: draw()
{
   drawToughBird(currentPoint, (int)radius, health);
}

/***********************************************************************
 * determines how many points to add / subtract
 * returns int of points
***********************************************************************/
int ToughBird :: hit()
{
   
   
   if(health > 1)
   {
      health -= TOUGHBIRD_HITS;
      hits = TOUGHBIRD_HITS;
   }
   else
   {
      
      kill();
      hits = BONUS + TOUGHBIRD_HITS;
   }
   return hits;
}