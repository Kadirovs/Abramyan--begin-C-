#include<iostream>
#include<cmath>
#define Pi 3.14
#include<conio.h>

    using namespace std;
    int main()


       {

           int a,b,c,V,S;
           cout <<  " Enter a= " << endl;
           cin>>a;
           cout << " Enter b= " <<endl;
           cin>>b;
           cout<< " Enter c=  " <<endl;
           cin>>c;
           V=a*b*c;
           S=2*(a*b+b*c+a*c);
           cout<< " Result of V=  " << V <<endl;
           cout << " Result of S=  " <<S <<endl;


             getch();
             return 0;

       }

