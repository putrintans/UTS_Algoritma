# UTS_Algoritma


**Soal 1**

**Alur Program**

1. Deklarasikan variabel `A, B, X, Y` sebagai variabel input.
2. Membaca input keyboard `cin >> A >> B >> X >> Y`
3. Membandingkan Variabel **X** dengan **Y** jika sama
4. Karena statement **FALSE** tidak akan terjadi karena `{X != Y}`
5. Dan jika statement **TRUE** maka **X < Y** berlaku rumus statement **TRUE** dengan Syntax `X = X + A`
6. Dan jika statement **False** `Y = Y + B`
7. Maka akan muncul `X = X + A = (hasilnya)`

**Code Program**

```c++

#include<iostream>

using namespace std;

int main ()
{

    int A,B,X,Y;

    cout << "Masukkan bilangan 1: ";
    cin >> A;
    cout << "Masukkan bilangan 2: ";
    cin >> B;

    X = A;
    Y = B;
    if(X != Y  )
        {if ( X < Y )
            { X = X + A;}
        else
                    { Y = Y + B;}
            }

    cout << X;



    }

```

hasil (a) :
![ing](https://raw.githubusercontent.com/putrintans/UTS_Algoritma/master/Soal1/Hasil1.1.png)

hasil (b) :
![ing](https://raw.githubusercontent.com/putrintans/UTS_Algoritma/master/Soal1/Hasil1.2.png)


**Soal 2**

**Alur Program**

1. Deklarasikan variabel input `N, X, T, Batas;` sebagai inputnya
2. Memasukkan nilai **N** yaitu 2 angka terakhir NIM saya,  maka N adalah 68 
   dan batasnya adalah 208 dari hasil jumlahan N + 100.
3. Masukkan variabel **X** , dan **T** , **X** nya adalah 20 dan kemudian T adalah 68 (dari N).
4. Dimana T kurang dari sama dengan batas, berarti tidak boleh melebihi batas
5. Kemudian menghitung `X = X + 10;` , dan hasilnya 30 kemudian menghitung `T = T + X;` , 
   hasilnya adalah 98.
6. Kemudian cetak variabel T

**Code Program**

```c++

#include<iostream>

using namespace std;

int main ()
{
    int N,X,T,Batas;

    cout << "Masukkan nilai N: ";
    cin >> N;


    Batas = N + 100;
    X = 20;
    T = N;

    while( T <= Batas)
        { T = T + X;
          X = X + 10;
        }


    cout << T;



    }

```

hasilnya :
![ing](https://raw.githubusercontent.com/putrintans/UTS_Algoritma/master/Soal2/Hasil%202.png)
