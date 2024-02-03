#ifndef __JLIB__
#define __JLIB__

#include <iostream>

void lib(const int abc);

void lib(const int abc){
  using namespace std;
  cout << abc << endl;
}


#endif
