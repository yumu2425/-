#include <iostream>
#include <iomanip>

using namespace std; //�۵�����

int main()
 {
	int number,weight,i,j;
	cin>>number>>weight;
	int graph[weight][weight];
	for(int w=0; w<weight; w++)
        {
		for(i=0; i<=w; i++)
			graph[i][w]=number++;
		if (w>0)
			for(j=w-1; j>=0; j--)
				graph[w][j]=number++;
        }
	for(i=0; i<weight; i++)
	 {
		for(j=0; j<weight; j++)
        cout<<setw(4)<<right<<graph[i][j];//��������������֮ǰ

         // right left �������Կ�����������ұ߻������

		cout<<endl;
	 }
	return 0;
}
