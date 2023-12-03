#include "defs.h"
int main(int argc, char* argv[]) {
  if (argc == 1) { begin() } else if (argc == 2) {
  
  }
return 0; }


void begin() {
  char* cwdbuf[1024];
  if (getcwd(cwdbuf ,cwdbuf[1024]-1) == *cwdbuf) {// successfully accessed workin dir
    // do nothing, this is uh
  } else { perror("Fuck, getcwd failed"); }
  }

