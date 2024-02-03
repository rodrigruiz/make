#include <iostream>
#include <iomanip>
#include "Jeep/JParser.hh"
#include "Jeep/JMessage.hh"
#include "JLib.hh"

int main(int argc, char **argv){
  using namespace std;
  int debug;
  try {
    JParser<> zap;
    zap['d'] = make_field(debug) = 1;
    if (zap.read(argc, argv) != 0)
      return 1;
  }
  catch(const exception &error) {
    ERROR(error.what() << endl);
    return 2;
  } 
  lib(debug);
}
