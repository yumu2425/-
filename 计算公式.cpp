#include <iostream>
#include <iomanip>

using namespace std;

int main()  //���㹫ʽ
{
    int n,total=0;
    cin>>n;
    double x=0;
    for(int a=1;a<=n;a++)
    {
        total=total+a;
        x=1.0/(total)+x;//   Ҫʹ / ��ȡ�����������Ҫ�и�������
    }
    cout << setiosflags(ios::fixed)<<setprecision(4)<<x<<endl;
    return 0;
}
