#include "stage2/main/hello-greet.h"
#include "private.h"

string concate_str(const string& thing) {
  return get_greet(thing) + add_suffix();
}
