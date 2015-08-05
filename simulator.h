#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#include <cstdlib>
#include "io_task.h"
#include "event.h"
#include "io_sched.h"
#include "comparator.h"

using namespace std;


class Simulator{
 public:
   //Variables
   vector<IOTask> task_list; //list of all io tasks got from input file
   priority_queue<Event, vector<Event>, TimeCompare> event_queue; //The event queue sorted by timestamp 
   deque<IOTask> pending_queue;//Container of all pending io tasks

   //Methods
   void init(string _input_filename);
   void run(char _sched_type);

   //Internal Methods
   void parse_event(Event& e);
};

#endif

