#include <stdio.h>

extern int count; // referenced external to this file
//extern int count_v2;

void demo(void) {
  printf("in demo: count: %d\n", count);
  // printf("count_v2: %d\n", count_v2);
}