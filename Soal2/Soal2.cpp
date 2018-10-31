#include<iostream>

using namespace std;

int main ()
{
    int N,X,T,Batas;

    cout << "Masukkan nilai N: ";
    cin >> N;


    Batas = N + 140;
    X = 20;
    T = N;

    while( T <= Batas)
        { T = T + X;
          X = X + 10;
        }


    cout << T;



    }
