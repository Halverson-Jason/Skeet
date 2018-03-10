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
#include "UFO.h"

class Bullet: public UFO 
{
   public:

   // constructors
   Bullet();

   void kill();

   void draw();
   void fire(Point point, float angle);
   void setStartingDx();
   
   protected:

   private:

};

#endif