#include "subject.h"

using namespace std;


void Subject::attach(Observer & obs){
  //observers.add(obs);
  //std::set<int>::iterator it;
  observers.insert(&obs);
  notify();
  cout << "\nAttach: " << " observers size: " << observers.size() << "\n";

}

void Subject::dettach(Observer & obs){
  observers.erase(&obs);
  notify();
  cout << "\nDettach: " << " observers size: " << observers.size() << "\n";

}

void Subject::notify() {

   //notify all observers that something about the subject they
   //are watching has changed. concrete subclasses should call
   //this method whenever a state change has ocurred that
   //observers might be interested in

   //Note: observer collection is copied and the copy
   //iterated over so that observers can dettach
   //when they are being notified (i.e. double buffering)

   //In the Gamma pattern this is not done and that code will
   //blow up in a situtation where observers choose to detach as
   //a result of being notified

    set<Observer*> observers_copy = observers; //make copy to iterate over
   for(set<Observer*>::iterator itr = observers_copy.begin(); itr != observers_copy.end(); itr++) {
      (*itr)->update((Subject*) this);
   }
  }
