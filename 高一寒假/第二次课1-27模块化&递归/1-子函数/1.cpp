#include <iostream>
using namespace std;
void increase(int &x,int &y,int &z){
//int &x��ʾ���ݵĲ���һ�� ֵ������һ�� ��ַ
//�ӳ���ֱ�ӶԴ��������ڴ��ַ������
//�ʲ�ͬ���أ�ԭ���ı��� a b c�Ѿ����ı�
//��������returnֻ�ܷ���һ����������ܷ����ɷ��ض���� 
     x++;
     y++;
     z++;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    increase(a,b,c);
    cout<<a<<' '<<b<<' '<<c; 
    system("pause");
    return 0;
}
