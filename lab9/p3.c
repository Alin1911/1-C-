#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
char* timestr(struct tm *t, char* time) {
  char s[10];
  int n;
  time = malloc(20 * sizeof(char));
  sprintf(s,"%02d-", t->tm_mday);
  strcpy(time, s);
  sprintf(s,"%02d-", t->tm_mon);
  strcat(time, s);
  sprintf(s,"%d\n", 1900 + t->tm_year);
  strcat(time, s);
  sprintf(s,"%02d:", t->tm_hour);
  strcat(time, s);
  sprintf(s,"%02d:", t->tm_min);
  strcat(time, s);
  sprintf(s,"%02d", t->tm_sec);
  strcat(time, s);
}

int main() {
  struct tm *timp;
  time_t t;
  char *ctime;
  t = time(NULL);
  timp = localtime(&t);
  ctime = timestr(timp, ctime);
  printf("%s\n", ctime);
  return 0;
}
