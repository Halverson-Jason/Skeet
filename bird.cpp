 /*File: bird.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the bird class.
 *
 *************************************************************/

#include "bird.h"
#include "uiDraw.h"

#define STARTING_X -200
#define RANDOM_Y_MIN -180
#define RANDOM_Y_MAX 180
#define RANDOM_DX_MIN 3.0
#define RANDOM_DX_MAX 6.0
#define RANDOM_DY_MIN -3.0
#define RANDOM_DY_MAX 3.0

/***********************************************************************
 * Default constructor for Bird()
***********************************************************************/

Bird :: Bird()
{
      //TODO make bird random location
   radius = 15.0;
   setRandomY();
   startingPoint.setX(STARTING_X);
   startingPoint.setY(startingY);
   currentPoint = startingPoint;
   setStartingDx();
   setStartingDy();
   velocity.setDx(startingDx);
   velocity.setDy(startingDy);
   setPoint(startingPoint);
}

/***********************************************************************
 * 
***********************************************************************/
Bird :: Bird(Point point)
{

}

/***********************************************************************
 * 
***********************************************************************/
void Bird :: kill()
{
   alive = false;
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
void Bird :: setRandomY()
{

   startingY = random(RANDOM_Y_MIN, RANDOM_Y_MAX);
}

/***********************************************************************
 * sets starting Dx
***********************************************************************/
void Bird :: setStartingDx()
{
   startingDx = random(RANDOM_DX_MIN, RANDOM_DX_MAX);
}

/***********************************************************************
 * sets starting Dy
***********************************************************************/
void Bird :: setStartingDy()
{
      if(startingY <= 0)
      {
         startingDy = random(0.0,RANDOM_DY_MAX);
      }
      else if(startingY > 0)
      {
         startingDy = random(RANDOM_DY_MIN, 0.0);
      }

}

