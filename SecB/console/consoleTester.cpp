#include "console.h"

using namespace cio;

void box(){
  console.setPos(10, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
  console.setPos(11, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
  console.setPos(12, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
}

int main(){
  char str[81] = "Hello how are you this morning!";
  bool insert = false;
  int stroffset = 10;
  int curpos = 8;
  box();
  console.edit(str, 11, 21, 15, 80, &insert, &stroffset, &curpos);
  console.setPos(15, 0);
  console << str;
  console.pause();
  return 0;
}