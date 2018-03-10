 /*File: birds.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "birds.h" 
#include "uiDraw.h"
#include <stdlib.h>
#include <time.h>

#define STARTING_X 0
#define STARTING_Y 0
#define STARTING_DX 1

/***********************************************************************
 * Default constructor
***********************************************************************/

Bird :: Bird()
{
      //TODO make bird random location
   radius = 15;
   setRandomX();
   startingPoint.setX(STARTING_X);
   startingPoint.setY(STARTING_Y);
   setStartingDx();
   velocity.setDx(startingDx);
   setPoint(startingPoint);
}

/***********************************************************************
 * 
***********************************************************************/
Bird :: Bird(Point point)
{
      //TODO make bird random location
   setRandomX();
   setStartingDx();
   velocity.setDx(startingDx);
   setPoint(point);
}


/***********************************************************************
 * 
***********************************************************************/
void Bird :: kill()
{

}

/***********************************************************************
 * 
***********************************************************************/
void Bird :: draw()
{

}

/***********************************************************************
 * 
***********************************************************************/
int Bird :: hit()
{
   
}

/***********************************************************************
 * gets random number for starting point
***********************************************************************/
void Bird :: setRandomX()
{
   srand(time(NULL));
   startingX = 100;
}

void Bird :: setStartingDx()
{

}

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
   drawCircle(currentPoint, radius);
}

/***********************************************************************
 * 
***********************************************************************/
ToughBird  :: ToughBird()
{
   int hits = 3;
}

/***********************************************************************
 * 
***********************************************************************/
void ToughBird :: draw()
{
   drawToughBird(currentPoint, radius, hits);
}

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