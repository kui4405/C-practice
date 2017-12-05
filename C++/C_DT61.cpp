#include <iostream>
#include <string>
#define P1 'O'
#define P2 'X'
using namespace std;

int main(void){
	char fHand, winner;
	string sol[3];
	int win[8]={}, lines=0;

	cin >> fHand;
	for(int i=0; i<3; i++)
		cin >> sol[i];

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			win[i] += (int)sol[i][j];
			win[i+3] += (int)sol[j][i];
		}
		win[6] += (int)sol[i][i];
		win[7] += (int)sol[i][3-1-i];
	}
	for(int i=0; i<8; i++)
		if(win[i]==P1*3 | win[i]==P2*3){
			winner = sol[i%3][i%3];
			lines++;
	}

	if(lines==2)
		cout <<  fHand <<endl;
	else if(lines==1)
		cout <<  winner << endl;
	else
		cout << "TIE" << endl;
	return 0;
}
