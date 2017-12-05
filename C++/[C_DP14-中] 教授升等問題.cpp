#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int W, P;
    float w1, w2, w3, p1, p2, p3;
    cin >> W >> P >> w1 >> w2 >> w3 >> p1 >> p2 >> p3;

    float Wloss = 0;
    float Pmax = 0;
    int Amax=0, Bmax=0, Cmax=0;
    for(float A=0; A<=100; A++)
    {
      for(float B=0; B<=100; B++)
      {
        for(float C=0; C<=100; C++)
        {
          if( ( ( A*p1 + B*p2 + C*p3 ) > Pmax ) && (((A*p1 + B*p2 + C*p3)-P)>=0) && (( A*w1 + B*w2 + C*w3 ) <= W))
          {
            Pmax = A*p1 + B*p2 + C*p3;
            Amax=A;
            Bmax=B;
            Cmax=C;
          }
        }
      }
    }
    Wloss = W - ( Amax*w1 + Bmax*w2 + Cmax*w3 );
    if(Amax==0 && Bmax==0 && Cmax==0)
    {
      cout << "0" << endl;
    }
    else
      cout << Amax << " " << Bmax << " " << Cmax << " " << fixed << setprecision(3) << Pmax << " " << Wloss << endl;
}
