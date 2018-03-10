/***********************************************************************
 * Header File:
 *    Point : The representation of a bullet on the screen
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about a bullet on the screen
 ************************************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "velocity.h"
#include "point.h"

class Bullet 
{
   public:

   // constructors
   Bullet();

   bool isAlive();
   Velocity getVelocity();
   Point getPoint();
   void setPoint(Point point);
   void setVelocity(Velocity velocity);
   void kill();
   void advance();
   void draw();
   void fire(Point point, float angle);
   
   protected:

   private:

};

#endif