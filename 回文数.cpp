#include <iostream>

using namespace std;

int main()  //»ØÎÄÊý
{
    int low,high;
    cin>>low>>high;
    for(int n=low;n<=high;n++)
    {
        int m=0;
        for(int i=n;i>0;i=i/10)
        {
            m=i%10+m*10;
        }
        if(m==n)
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
