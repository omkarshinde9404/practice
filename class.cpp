#include<iostream>
using namespace std;

int main()
{
    int arr[7]={3,4,6,7,8,9,2};
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum+=arr[i];
    }
    cout<<"the array sum is :"<<sum<<endl;
    return 0;
}