#include "event.h"

Event::Event(int _timestamp, int _position, int _task_id, string _event_type, int _from_position)
  :timestamp(_timestamp), position(_position), task_id(_task_id), event_type(_event_type), from_position(_from_position){}

ostream& operator<< (ostream& ost, const Event& e){
  ost << e.timestamp << ":\t" << e.task_id << " " << e.event_type << " " << e.position;
  if (e.event_type == "issue"){
    cout << " " <<  e.from_position; 
  }
  return ost;
}

