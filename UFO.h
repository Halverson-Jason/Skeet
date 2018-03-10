/***********************************************************************
 * Header File:
 *    Point : Base clase for all flying objects
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about flying objects on the screen
 ************************************************************************/

#ifndef UFO_H
#define UFO_H

#include "point.h"
#include "velocity.h"

/***********************************************************************
 * 
***********************************************************************/

class UFO
{
   public:

   // Constructor
   UFO();

   Point getPoint();
   Velocity getVelocity();
   bool isAlive();
   void setPoint(Point point);
   void setVelocity(Velocity velocity);
   void setVelocity(float dx, float dy);
   void advance();
   virtual void draw();
   virtual void setStartingDx();
   virtual void setStartingDy();

   protected:
      bool alive;
      Point currentPoint;
      Velocity velocity;
      Point startingPoint;
      // gets random number for starting point
      float startingX;
      float startingDx;
      float startingDy;

   private:


};

#endif