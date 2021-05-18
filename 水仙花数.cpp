#include <iostream>

using namespace std;

int main() //Ë®ÏÉ»¨Êý
{
    int low,high;
    cin>>low>>high;
    if(low<100)
    {
        low=100;
    }
    if(high>999)
    {
        high=999;
    }
    int n=0;
    for(int num=low;num<=high;num++)
    {
        int a,b,c;
        a=num/100;
        b=(num-a*100)/10;
        c=num%10;
        int total=a*a*a+b*b*b+c*c*c;
        if(num==total)
        {
            cout <<num<<endl;
            n++;
        }
    }
    if(n==0)
    {
        cout << "No Answer"<<endl;
    }

    return 0;
}
