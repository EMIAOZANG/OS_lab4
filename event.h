#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <cstdio>

using namespace std;

class Event{
 public:
   //Variables
   int timestamp;
   int position;
   int from_position;
   int task_id;
   string event_type;

   Event(int _timestamp, int _position, int task_id, string _event_type, int _from_position = 0);
   friend ostream& operator<< (ostream& ost, const Event& e);

};


#endif
