#include <iostream>

using namespace std;

int main()
{
    int total=0;
    int island[10][10];
    int l;
    cin>>l;
    for(int x=0;x<l;x++)
    {
        for(int y=0;y<l;y++)
        {
            cin>>island[x][y];
        }
    }
    int num=0;
    for (int m=0;m<l;m++)
    {
        for(int n=0;n<l;n++)
        {
            if(island[m][n]==0)
            {
                for(int a=m;a>=0;a--)
                {
                    if(island[a][n]==1)
                       {
                        num++;
                        break;
                       }
                }
                for(int a=m;a<l;a++)
                {
                    if(island[a][n]==1)
                        {
                        num++;
                        break;
                       }
                }
                for(int a=n;a>=0;a--)
                {
                    if(island[m][a])
                        {
                        num++;
                        break;
                       }
                }
                for(int a=n;a<l;a++)
                {
                    if(island[m][a])
                        {
                        num++;
                        break;
                       }
                }
                if(num==4)
                    total++;
                num=0;
            }
        }
    }
    cout << total<<endl;
    return 0;
}
