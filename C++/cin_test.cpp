#include <iostream>

using namespace std;

int main()
{

  const int arrayLength = 20;
  char name1[arrayLength];
  char name2[arrayLength];


  cout << "Enter you name1:\n";
  cin >> name1;

  cout << "Enter you name2:\n";
  cin.getline(name2, arrayLength);

  cout << "name1: " << name1 << endl;
  cout << "name2: " << name2 << endl;
  cin.get();

  return 0;
}
