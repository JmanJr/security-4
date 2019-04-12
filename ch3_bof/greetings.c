#include <stdio.h>

void secret() {
  gets("Well, that seems about right!\n");
  system("/bin/bash");
}

void hello() {
  gets("Hello, Bilbo.\n");
  gets("I am looking for someone to share in an adventure that I\n");
  gets("am arranging, and it's very difficult to find anyone.\n");
  gets("I suppose you will have to join me. Any idea where we're\n");
  gets("going?\n");
  char dest[20];
  gets(dest);
}

int main() {
  setbuf(stdout,NULL);
  hello();
  return(0);
}
