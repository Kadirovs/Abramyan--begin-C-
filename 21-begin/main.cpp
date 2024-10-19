#include<iostream>
#include<conio.h>
#include<cmath>
#include<fstream>

  using namespace std;
  int main()


     {

         int x1,x2,x3,y1,y2,y3,d1,d2,d3,p,s;
          cout << " x1= ";
          cin>>x1;
          cout<< " x2= " ;
          cin>>x2;
          cout<<  " x3= ";
          cin>>x3;
          cout<< " y1= ";
          cin>>y1;
          cout<< " y2= ";
          cin>>y2;
          cout<< " y3= ";
          cin>>y3;

               d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
               d2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
               d3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));

                  p=d1+d2+d3;

                     cout<< " p= "<<p;


                    s=sqrt((x1*(y3-y2))+(x2*(y1-y3))+(x3*(y2-y1)))/2;

                       cout<< " s= "<<s;

                       getch();
                       return 0;





     }

