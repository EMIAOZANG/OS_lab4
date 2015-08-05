#include "comparator.h"

bool TimeCompare::operator() (const Event& e1, const Event& e2){
   return e1.timestamp > e2.timestamp;
}
