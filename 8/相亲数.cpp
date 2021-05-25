#include <iostream>

using namespace std;

int main()  //ÏàÇ×Êý
{
    int a,b;
    cin>>a>>b;
    cout << a << ",";
    int total1=0,total2=0;
    for(int n=a-1;n>1;n--)
    {
        if(a%n==0)
        {
            cout <<n<< "+";
            total1+=n;
        }
    }
    total1++;
    cout <<"1="<<total1<<endl;
    cout <<b << ",";
    for(int n=b-1;n>1;n--)
    {
        if(b%n==0)
        {
            cout << n<< "+";
            total2+=n;
        }
    }
    total2++;
    cout << "1="<<total2<<endl;
    if(total2==a && total1==b)
    {
        cout << "1"<<endl;
    }
    else
        cout << "0"<<endl;
    return 0;
}
