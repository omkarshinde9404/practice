#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter a number";
cin>>number;
if(number>0)
{
    cout<<"the number is positive";
}
else if (number<0)
{
    cout<<"the number is negtive";
}
else
{
    cout<<"the number is zero";
}
return 0;
}