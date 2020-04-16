#include <stdio.h>

// Function prototype
void demo(void); // there's a function somewhere in this project called this

int count = 123; // External Storage (Global Storage)

static int count_v2 = 678; //File Scope 
// hidden in this file only


char *s[] = {
  "FFPC", "Ch 14", "Storage Class",
};

char *name[] = {
  "Code", "by", "Joshua", "Nolasco",
};

char *topics[] = {
  "Automatic Storage Class (Stack Storage)",
  "File Storage Class",
  "External Storage Class (Global Storage)", 
  "Register Storage"
};

void demo_automatic(void) {
  register int j; // Hint to the compiler, to put this in a CPU register
  int i;
  i = 100;
  printf("i=%d\n", i);
  printf("count: %d\n", count);
  printf("count_v2: %d\n", count_v2);
}
int main(void) {
  printf("%s = %s-%s\n", s[0], s[1], s[2]);
  printf("%s %s %s %s\n", name[0], name[1], name[2], name[3]);
  // Is there any easier way of simplifying this? 
  // for (int j = 0; j < sizeof(name)/sizeof(name[0]); j++) {
  //  printf("%s\n", name[j]);
  // }
  printf("Topics:\n");
  for (int i = 0; i < sizeof(topics)/sizeof(topics[0]); i++) {
    printf("%s\n", topics[i]);
  }

  // Storage inside a function is Automatic
  // Automatic variables are stored on the stack
  int i;
  i = 10;
  demo_automatic();
  printf("i=%d\n", i);
  count = 456;
  printf("count: %d\n", count);
  demo_automatic();
  demo();

  return 0;
}