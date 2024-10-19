#include<iostream>
#include<cmath>
#include<conio.h>
#include<fstream>
#define Pi 3.14



     using namespace std;
     int main()



         {
             float S1,S2,S3,r1,r2;

                cout << " Enter r1= " ;
                cin>>r1;
                cout <<"  Enter r2= " ;
                cin>>r2;

                  S1=Pi*pow(r1,2);
                  S2=Pi*pow(r2,2);
                  S3=S1-S2;

                   cout <<" Result S1= " << S1;
                   cout <<" Result S2= " << S2;
                   cout <<" Result S3= " << S3;


                          if (r1>r2)


                        {
                             cout <<   " r1 greater than r2   " ;



                          }

                          else
                            if (r1<r2)
                          {

                             cout << " r1 less than r2  ";


                          }
                                 else
                                    if  ( r1=r2)
                                 {
                                     cout << "  r1 and r2 is equal  " ;
                                 }

                   getch();



            return 0;


         }
