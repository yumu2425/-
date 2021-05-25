#include <iostream>

using namespace std;

int main()  //合数分解
{
    int num;
    cout << "输入一个质数：";
    cin>>num;
    int n=num;
    for(int i=2;i<=n;i++)
    {
        int total=0;
        if(0==n%i)
        {
          while(0==n%i)
          {
              n=n/i;
              total++;
          }
          if(total>1)
          {
              cout << i<< " ";
          }
        }
    }
    return 0;
}
