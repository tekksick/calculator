#include<iostream>
using namespace std;


long long fact(long long a)
{
  long long b=1;
  long long c=1;
    while(b<=a)
    {
        c=c*b;
        b++;
    }
   return c;
}



double exp(double a,int b)
{
    double c=1;
    int i=1;
    while(i<=b)
    {
        c=c*a;
        i++;
    }
    return c;
}



double fun(int b)
{
    int a=1;
    double c=1;
    while(a<b)
    {
       if(a%2==1) c*=a;
       if(a%2==0) c/=a;
       a++;
    }
    c=c/b;
    return c;
}



int main()


{
    char choice='y';
    int num;
    double a,b,c,pi=3.14159265358979323846;
    while(choice=='y' || choice=='Y')
    {
    cout<<"For + press 1"<<endl<<"For - press 2"<<endl<<"For x press 3"<<endl<<"For / press 4"<<endl<<"For exponentiation          (^) press 5"<<endl<<"For trigonometric functions     press 6"<<endl<<"For inv trigonometric functions press 7"<<endl<<"For factorial               (!) press 8"<<endl<<"For remainder                   press 9"<<endl;
    cin>>num;
   if(num==1 || num==2 ||num==3||num==4)
   {
    cout<<"Enter a value ";
    cin>>a;
    cout<<"Enter another value ";
    cin>>b;
   if(num==1) c=a+b;
   if(num==2) c=a-b;
   if(num==3) c=a*b;
   if(num==4) c=a/b;
    cout<<"The result is "<<c<<endl;
   }


   //exp


   else if(num==5)
   {
    int i,k=1;
    double e=2.718281828459045;
    cout<<"If your base is e press 1, otherwise press 2"<<endl;
    cin>>i;
    if(i==1)
    {cout<<"Enter the power"<<endl;
    cin>>b;
    c=exp(e,b);
    // c=1;
   // while(k<10 ){ c+=exp(b,k)/fact(k); k++;}
    cout<<"The result is "<<c<<endl;
    }
    else{
    cout<<"Enter the base ";
    cin>>a;
    cout<<"Enter the power ";
    cin>>b;
    cout<<"The result is "<<exp(a,b)<<endl;
    }
   }


   //trigo


    else if(num==6)
   {
    int i,x,sign;
    c=0;
    cout<<"For sin press 1"<<endl<<"For cos press 2"<<endl<<"For tan press 3"<<endl<<"For sec press 4"<<endl<<"For cosec press 5"<<endl<<"For cot press 6"<<endl;
    cin>>i;
    cout<<"To input in DEG press 1 and in RAD press 2"<<endl;
    cin>>b;
    cout<<"Enter the value"<<endl;
    cin>>a;
    if(b==1) a=(a*pi)/180;
     x=1,sign=1;
  double sin=0;
  //p=a%(pi/2);
  while(x<14) {sin+=sign*exp(a,x)/fact(x);      x+=2;  sign*=-1;}
  x=2,sign=-1;
  double cos=1;
  while(x<15) {cos+=sign*exp(a,x)/fact(x);      x+=2;  sign*=-1;}
  if(cos<0.05 && cos>-0.005) cos=0;
  if(sin<0.005 && sin>-0.005) sin=0;
 // if(cos<-1) cos=-1;
  //if(cos>1 ||)
  //cout<<"sin " << sin<<"cos "<< cos;
   if(i==1){ c=sin;  cout<<"The value is "<<c<<endl;}
   else if(i==2) {c=cos;  cout<<"The value is "<<c<<endl;}
   else if(i==3 && cos!=0) {c=sin/cos; if(c=-0) c=0; cout<<"The value is "<<c<<endl;}
   else if(i==4 && cos!=0) {c=1/cos;   cout<<"The value is "<<c<<endl;}
   else if(i==5 && sin!=0) {c=1/sin;  cout<<"The value is "<<c<<endl;}
   else if(i==6 && sin!=0) {c=cos/sin;  cout<<"The value is "<<c<<endl;}
   else cout<<"Invalid input"<<endl;
   }


   //inv trigo


   else if(num==7)
   {
    int i,k,sign=1;
    b=1;
    cout<<"For inv of sin press 1"<<endl<<"For inv of cos press 2"<<endl<<"For inv of tan press 3"<<endl<<"For inv of sec press 4"<<endl<<"For inv of cosec press 5"<<endl<<"For inv of cot press 6"<<endl;
    cin>>i;
    cout<<"Enter the value"<<endl;
    cin>>a;
    if(i==1) {while(b<60000) {c+=exp(a,b)*fun(b);  b+=2;}}
    if(i==2) {while(b<60000) {c+=exp(a,b)*fun(b);  b+=2;} c=pi/2-c;}

//tan

    if(i==3) 
    {
      if(a<1 && a>-1) {while(b<60000) {c+=exp(a,b)*sign/b;  b+=2;   sign*=-1;}}
     else if(a>=1) {c=pi/2; sign=-1; while(b<60000) {c+=exp(a,-1*b)*sign/b;  b+=2;  sign*=-1;}}
     else{c=-1*pi/2; sign=-1; while(b<60000) {c+=exp(a,-1*b)*sign/b;  b+=2;  sign*=-1;}}
    }

     if(i==4) {while(b<60000) {c+=fun(b)/exp(a,b);  b+=2;} c=pi/2-c;}
     if(i==5) {while(b<60000) {c+=fun(b)/exp(a,b);  b+=2;}}
     if(i==6) 
    {
    {
     if(a<1 && a>-1) {while(b<60000) {c+=exp(a,b)*sign/b;  b+=2;   sign*=-1;}}
     else if(a>=1) {c=pi/2; sign=-1; while(b<60000) {c+=exp(a,-1*b)*sign/b;  b+=2;  sign*=-1;}}
     else{c=-1*pi/2; sign=-1; while(b<60000) {c+=exp(a,-1*b)*sign/b;  b+=2;  sign*=-1;}}
     c=pi/2-c;
    }
    }
    cout<<"For result in DEG press 1 and for RAD press 2"<<endl;
    cin>>k;
    if(k==1) c=c*180/pi;
    cout<<"The result is "<<c<<endl;
   }
  

  //factorial


   else if(num==8)
   {
    cout<<"Enter the value "<<endl;
    cin>>a;
     cout<<"The result is "<<fact(a)<<endl;
   }


   //remainder


  else if(num==9)
  {
    int x,y;
    double c;
    cout<<"Enter a value"<<endl;
    cin>>x;
    cout<<"Enter another value"<<endl;    
    cin>>y;
    c=x%y;
    cout<<"The result is "<<c<<endl;
  }


   else
    cout<<"domain error"<<endl;
   cout<<"Do you want to continue?....(y/n)"<<endl;
   cin>>choice;
    }
    return 0;
}