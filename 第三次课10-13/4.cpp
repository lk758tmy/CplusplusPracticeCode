//������������ÿ�˳ɼ�������ƽ���� 
#include <iostream>
using namespace std;
int main()
{
    int i,n;
    double x,s,avg;
    s=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        //��ʱ���Խ���������Կո���� һ������ 
        s=s+x;
    } 
    avg=s/n;
    cout<<avg<<endl;
    system("pause");
    return 0;
}
