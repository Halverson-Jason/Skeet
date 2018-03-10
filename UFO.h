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

   protected:

   private:


};

#endif