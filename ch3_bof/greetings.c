#include <stdio.h>

void secret() {
  puts("Well, that seems about right!\n");
  system("/bin/bash");
}

void hello() {
  puts("Hello, Bilbo.\n");
  puts("I am looking for someone to share in an adventure that I\n");
  puts("am arranging, and it's very difficult to find anyone.\n");
  puts("I suppose you will have to join me. Any idea where we're\n");
  puts("going?\n");
  char dest[20];
  gets(dest);
}

int main() {
  setbuf(stdout,NULL);
  hello();
  return(0);
}
