#include <cstdio>
#include <cstring>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
  char line[1024];
  bool open = true;

  while (fgets(line,100000,stdin)) {
    int len = strlen(line);

    for (int i = 0; i < len; i++) {
      if (line[i] == '"') {
        if (open)
          printf("``");
        else
          printf("''");

        open = !open;
      } else
        printf("%c", line[i]);
    }
    printf("\n");
  }

  return 0;
}