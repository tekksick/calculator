#include<iostream>
using namespace std;
int fact(int a)
{
  int b=1,c=1;
    while(b<=a)
    {
        c=c*b;
        b++;
    }
   return c;
}
int sign(int a)
{
    int c;
    if(a%4==0 || a%4==1) c=1;
    else c=-1;
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
   if(num==1 || num==2 ||num==3||num==4||num==9)
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
    else if(num==6)
   {
    int i,x;
    c=0;
    cout<<"For sin press 1"<<endl<<"For cos press 2"<<endl<<"For tan press 3"<<endl<<"For sec press 4"<<endl<<"For cosec press 5"<<endl<<"For cot press 6"<<endl;
    cin>>i;
    cout<<"For DEG press 1"<<endl<<"For RAD press 2"<<endl;
    //ask if user wants to give input as a multiple of pi
    cin>>b;
    cout<<"Enter the value"<<endl;
    cin>>a;
    if(b==1) a=(a*pi)/180;
    if(i==1) {x=1; while(x<14) {c+=sign(x)*exp(a,x)/fact(x);      x+=2;} }
    if(i==2) {x=0; while(x<14) {c+=sign(x)*exp(a,x)/fact(x);      x+=2;} }
    if(i==3) c=a+exp(a,3)/3+exp(a,5)*2/15+exp(a,7)*17/315;
    if(i==4) c=1+exp(a,2)/2+exp(a,4)*5/24+exp(a,6)*61/720;
    if(i==5) c=1/a+a/6+7*exp(a,3)/360+exp(a,5)*31/15120;
    if(i==6) c=1/a-a/3+exp(a,3)/45-exp(a,5)*2/945;
     cout<<"The value is "<<c<<endl;
   }
   else if(num==7)
   {
    int i,k;
    c=0;
    cout<<"For inv of sin press 1"<<endl<<"For inv of cos press 2"<<endl<<"For inv of tan press 3"<<endl<<"For inv of sec press 4"<<endl<<"For inv of cosec press 5"<<endl<<"For inv of cot press 6"<<endl;
    cin>>i;
    cout<<"Enter the value"<<endl;
    cin>>a;
    if(i==1) {b=1; while(b<60000) {c+=exp(a,b)*fun(b);  b+=2;}};
    if(i==2) {b=1; while(b<60000) {c+=exp(a,b)*fun(b);  b+=2;} c=pi/2-c;};
    if(i==3) {b=1; while(b<60000) {c+=exp(a,b)*sign(b)/b;  b+=2;}};
    if(i==4) {b=1; while(b<60000) {c+=fun(b)/exp(a,b);  b+=2;} c=pi/2-c;};
    if(i==5) {b=1; while(b<60000) {c+=fun(b)/exp(a,b);  b+=2;}};
    if(i==6) {b=1; while(b<60000) {c+=exp(a,b)*sign(b)/b;  b+=2;} c=pi/2-c;};
    cout<<"For result in DEG press 1 and for RAD press 2"<<endl;
    cin>>k;
    if(k==1) c=c*180/pi;
    cout<<"The result is "<<c<<endl;
   }
   else if(num==8)
   {
    cout<<"Enter the value "<<endl;
    cin>>a;
     cout<<"The result is "<<fact(a)<<endl;
   }
   else if(num==9)
   {
    int x,y;
    cout<<"Enter a value ";
    cin>>x;
    cout<<"Enter another value ";
    cin>>y;
    c=x%y;
    cout<<"The result is "<<c<<endl;
   }
   else
    cout<<"invalid number"<<endl;
   cout<<"Do you want to continue?....(y/n)"<<endl;
   cin>>choice;
    }
    return 0;
}