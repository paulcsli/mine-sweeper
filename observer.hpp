#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>
using namespace std;

class Observer
{
public: 
  virtual void Notify() = 0;
};

#endif