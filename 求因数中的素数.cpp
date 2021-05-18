#include <iostream>

using namespace std;

int main()  //求因数中的素数
{
    int num,a;
    cin>>num;
    for(int n=1;n<=num;n++)
    {
        if(0==num%n)
        {
            if(n>1)
            {
                int x=0;
                for(int i=2;i<n;i++)
                {
                    if(0==n%i)
                        x++;

                }
                if(x==0)
                {
                    cout<<n<<endl;
                    a++;
                }
            }
        }
    }
    if(a==0)
    {
        cout << "no answer"<<endl;
    }
    return 0;
}
