/***********************************************************************
 * Header File:
 *    Point : The representation of a bird on the screen
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about a bird on the screen
 ************************************************************************/
#ifndef BIRD_H
#define BIRD_H

#include "point.h"
#include "velocity.h"
#include "UFO.h"

/***********************************************************************
 * 
***********************************************************************/

class Bird: public UFO
{
   public:

      // constructors
      Bird();
      Bird(Point point);
      void kill();
      void draw();
      int hit();
      // gets random number for starting poin
      void setRandomY();
      void setStartingDy();
      void setStartingDx();
      

   protected:
      float radius;
      int hits;
      float startingY;
      
   private:
   
};


#endif