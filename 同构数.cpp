#include <iostream>

using namespace std;

int main()  //ͬ����
{
    int a,b;
    cin>>a>>b;
    if(a==0)
      {
         cout<<a<<endl;
         cout<<a+1<<endl;
      }
    if(a==1)
        cout <<a<<endl;
    for(int n=a;n<=b;n++)
    {
        int num=n*n;
        for (int x=1;(num/x)>0;x=x*10)
        {
            if(num%x==n)
            {
                cout <<n<<endl;
                x=num+1;  //���������forѭ��
            }
        }
    }
    return 0;
}
