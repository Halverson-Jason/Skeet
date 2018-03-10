/*************************************************************
 * File: UFO.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the UFO class.
 *
 *************************************************************/

#include "UFO.h" 

/***********************************************************************
 * 
***********************************************************************/
UFO :: UFO()
{
   alive = true;
}

Point UFO :: getPoint()
{
   return currentPoint;
}

Velocity UFO:: getVelocity()
{
   return velocity;
}

bool UFO :: isAlive()
{
   return alive;
}

void UFO :: setPoint(Point point)
{
   this->currentPoint = point;
}

void UFO :: setVelocity(Velocity velocity)
{
   this->velocity = velocity;
}


void UFO :: advance()
{
   currentPoint.addX(velocity.getDx());
   currentPoint.addY(velocity.getDy());
}