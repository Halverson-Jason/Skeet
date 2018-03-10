/***********************************************************************
 * Header File:
 *    Point : The representation of a bullet on the screen
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about a bullet on the screen
 ************************************************************************/
#ifndef BIRDS_H
#define BIRDS_H

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
      void setRandomX();
      void setStartingDx();
      

   protected:
      float radius;
      int hits;
   private:
   
};


/***********************************************************************
 * 
***********************************************************************/
class StandardBird: public Bird 
{
   public:

   // constructors
   StandardBird();
   void draw();

   protected:

   private:
   
   float radius;
};


/***********************************************************************
 * 
***********************************************************************/
class ToughBird: public Bird
{
   public:

   // constructors
   ToughBird ();

   void draw();

   protected:

   private:
   
};


/***********************************************************************
 * 
***********************************************************************/
class SacredBird: public Bird
{  
   public:

   // constructors
   SacredBird ();

   void draw();

   protected:

   private:
   
};

#endif