#ifndef IO_TASK_H
#define IO_TASK_H

#include <iostream>
#include <string>

using namespace std;

class IOTask{
 public:
   //Variables
   int task_id;
   int track;
   int track_distance;

   IOTask(int _task_id, int _track, int _track_distance);
};

#endif
