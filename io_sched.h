#ifndef IO_SCHED_H
#define IO_SCHED_H

#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include "event.h"
#include "io_task.h"
#include "comparator.h"

using namespace std;

class IOScheduler{
 public:
   //Variables
   string curr_state;
   int curr_position;
   bool direction;
   priority_queue<Event, vector<Event>, TimeCompare> event_queue;

   //Methods
   IOScheduler(string init_state, int init_pos, bool init_direction);


   void print_event_queue();
};

class FIFO_IOScheduler : public IOScheduler{
 public:
  
};
#endif
