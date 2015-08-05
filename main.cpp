//Main entrance to the mini IO scheduler

# include <iostream>
# include <queue>
# include <vector>
# include <unistd.h>
# include "event.h"
# include "io_sched.h"
# include "comparator.h"
# include "simulator.h"
using namespace std;



int main()
{
//  IOScheduler sched("IDLE",0,false);
//  cout << sched.curr_state << endl;
//
//  priority_queue<Event, vector<Event>, TimeCompare> q;
//  q.push(Event(0,0,"add"));
//  q.push(Event(1,10,"del"));
//
//  cout << q.top().timestamp << 

  Simulator iosched_sim;
  iosched_sim.init("./input0");

  

  return 0;
}
