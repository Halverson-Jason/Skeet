/***********************************************************************
 * Header File:
 *    Point : The representation of a bullet on the screen
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about a bullet on the screen
 ************************************************************************/
#ifndef STANDARDBIRD_H
#define STANDARDBIRD_H

#include "bird.h"

class StandardBird: public Bird 
{
   public:

   // constructors
   StandardBird();
   void draw();

   protected:

   private:
   
};

#endif