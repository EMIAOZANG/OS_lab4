#include "simulator.h"

void Simulator::init(string _input_filename){
  ifstream fin;
  fin.open(_input_filename);
  string item;
  
  int item_timestamp = 0;
  int item_track = 0;
  int item_count = 0;

  if (fin.is_open()){
    while (!fin.eof()){
      getline(fin, item);
      if ( item[0] == '#' || item == ""){
        continue; //if the line starts with a '#', ignore it
      }
      
      stringstream ss(item);
      
      ss >> item_timestamp;
      ss >> item_track;

      IOTask new_task(item_count, item_track, item_track);//initialize task queue with id, track, and current track as the initial distance
      task_list.push_back(new_task);      
      
      //initializing event_queue
      Event new_event(item_timestamp, item_track, item_count, "add" );
      event_queue.push(new_event);

      item_count++;
    }
  }

  for (int i = 0; i < task_list.size(); i++) {
    cout << "IO Task " << i << ": " << task_list[i].task_id << " " <<  task_list[i].track << endl;
  }


  while (!event_queue.empty()){
    cout << event_queue.top() << endl;
    event_queue.pop();
  }

}

void Simulator::run(char _sched_type){

}

void Simulator::parse_event(Event& e){
  if (e.event_type == "add"){
    pending_queue.push_back(task_list.at(e.task_id));
    //KEEP EDITING HERE!
    
  }
  else if (e.event_type == "issue"){
  }
  else if (e.event_type == "finish"){
  }
  else{
    cerr << "Invalid Event Type Encountered" << endl;
    exit(1); 
  }
}
