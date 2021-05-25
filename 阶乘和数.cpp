#include <iostream>

using namespace std;

int main() //½×³ËºÍÊı
{
    int num;
    cin>>num;
    int n=num;
    cout <<num << ",";
    int total=0;
    for(int i=10;n>10;)
    {
        int x,y=1;
        x=n%i;
        n=n/10;
        if(x==0)
        {
            x=1;
        }
        for(int j=1;j<=x;j++)
        {
            y=y*j;
        }
        cout << y << "+";
        total=total+y;
    }
    int b=1;
    for(int a=1;a<=n;a++)
    {
        b=b*a;
    }
    total+=b;
    cout << b<< "="<<total<<endl;
    if(total==num)
        cout<< "Yes"<<endl;
    else
        cout<< "No"<<endl;
    return 0;
}
