#include <iostream>
using namespace std;
int main()
{
    double a,b,r;
    char x;//charΪ�ַ��� ��ֵ:x='a'
    cin>>a>>x>>b;//����Ϊ��ͬ���ͣ�inʱ�м䲻�ÿո�
    switch(x){//xӦ����ö��
       case '+':
       //����Ҫ{}��ע��case����Ҫ ��
       //����x='+'ʱ��������ִ�е���һ��break,Ȼ���ƶ���switch�� }
       //'+'�������ǳ���
            r=a+b;
            cout<<r<<endl;
            break;
       case '-':
            r=a-b;
            cout<<r<<endl;
            break;
       case '*':
            r=a*b;
            cout<<r<<endl;
            break;
       case '/':
            r=a/b;
            cout<<r<<endl;
            break;
       default://�������������ִ������
            cout<<"Input Wrong"<<endl;
    }
    system("pause");
    return 0;
}
