#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

  //                      A   B  C   D   E   F   G   H    I   J   K   L   M   N   O   P  Q   R   S    T   U   V   W   X  Y  Z
  const int alpha[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19 ,20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 32};

  char a[10];

  int b, c[2], d, e[9];

  cin >> a;

  b = alpha[(unsigned)a[0]-65];

  c[0] = b%10;
  c[1] = (int) b/10;

  for(int i=0;i<9;i++){
    e[i] = (unsigned)a[i+1]-48;
  }

  d = 0;

  d = c[1]+(9*c[0])+(8*e[0])+(7*e[1])+(6*e[2])+(5*e[3])+(4*e[4])+(3*e[5])+(2*e[6])+e[7]+e[8];



  if(d%10==0)
    cout << "CORRECT!!!" << endl;
  else
    cout << "WRONG!!!" << endl;

  return 0;
}
