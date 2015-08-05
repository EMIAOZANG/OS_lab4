# include "io_sched.h"

IOScheduler::IOScheduler(string init_state, int init_pos, bool init_direction)
  :curr_state(init_state),curr_position(init_pos),direction(init_direction){}


void IOScheduler::print_event_queue(){
  /*
  while (!event_queue.empty()){
    Event curr_event = event_queue.top();
    cout << curr_event.timestamp << ":\t" << curr_event.task_id << " " << curr_event.event_type << " ";
    if (curr_event.event_type == "issue"){
      cout << curr_event.from_position << " ";
    }
    cout << curr_event.position << endl;
  }
  */
}

