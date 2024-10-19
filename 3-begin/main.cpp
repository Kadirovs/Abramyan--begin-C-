#include<iostream>
#include <conio.h>
#include<cmath>


  using namespace std;
  int main()


          {
              int a,b,S,P;
              cout <<  " Enter a=" <<endl;
              cin>>a;
              cout <<  " Enter  b="<<endl;
              cin>>b;
              S=a*b;
              P=2*(a+b);
              cout << " Area S= " << S <<endl;
              cout << " Perimeter P= " << P <<endl;
                  if  ( a==b )
{
  
   cout << "  Equal  " <<endl;
}
  else  
  if  ( a>b )
                {
cout << "  a greater than b  " <<endl;

}
 else 
   if ( a<b )
   {
      cout << " a less than b " << endl;

}
         getch();
               return 0;
          }
