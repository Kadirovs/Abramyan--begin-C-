#include<iostream>
#include<conio.h>
#include<cmath>
#include<fstream>

  using namespace std;
  int main()



      {

         int  x1,y1,x2,y2,k;
           cout<< " x1=  ";
           cin>>x1;
           cout << " y1= ";
           cin>>y1;
           cout<< " x2=  ";
           cin>>x2;
           cout<< " y2 ";
           cin>>y2;

                k=sqrt(pow(x1-y1,2)+pow(x2-y2,2));


                  cout << " k= "<< k;
                    getch();
                    return 0;


      }
