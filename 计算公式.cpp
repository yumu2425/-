#include <iostream>
#include <iomanip>

using namespace std;

int main()  //计算公式
{
    int n,total=0;
    cin>>n;
    double x=0;
    for(int a=1;a<=n;a++)
    {
        total=total+a;
        x=1.0/(total)+x;//   要使 / 不取整计算的数需要有浮点数！
    }
    cout << setiosflags(ios::fixed)<<setprecision(4)<<x<<endl;
    return 0;
}
