#ifndef COMPARATOR_H
#define COMPARATOR_H

#include <iostream>
#include <cstdio>
#include "event.h"

class Compare{
 public:
   virtual bool operator() (const Event& e1, const Event& e2) = 0;
};

class TimeCompare : public Compare{
  //should provide similar function to greater class
 public:
   virtual bool operator() (const Event& e1, const Event& e2);
};


#endif
