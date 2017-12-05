#include <iostream>
#include <string>
using namespace std;

int main(void)
{

  string hello = "hello";
  char *s = hello.c_str();
  int i;
  for(i=0; i<hello.length(); i++)
    printf("%c\n", s[i]);
}
