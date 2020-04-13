#include <stdio.h>

int main () {
char ch='w';
char *n;
   char s1[16] = {"kunalwasnik"};
    n=strchr(s1, ch);
   printf("Greeting message: %s \n", n );
   return 0;
}
