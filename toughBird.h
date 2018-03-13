/***********************************************************************
 * Header File:
 *    Point : The representation of a bullet on the screen
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about a bullet on the screen
 ************************************************************************/
#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include "bird.h"

class ToughBird: public Bird
{
   public:

   // constructors
   ToughBird ();

   void draw();
   int hit();

   protected:
   private:
      int health;
   
};

#endif