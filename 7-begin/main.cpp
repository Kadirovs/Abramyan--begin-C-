#include<iostream>
#include<cmath>
#define Pi 3.14
#include<conio.h>

    using namespace std;
    int main()



        {

             float r,L,S;
             cout << " Radius r=  " << endl;
             cin>>r;
             L=2*Pi*r;
             S=Pi*pow(r,2);
         cout<< " Result of L=  " << L <<endl;
           cout << " Result of S=  " <<S <<endl;

             getch();
             return 0;
        }
