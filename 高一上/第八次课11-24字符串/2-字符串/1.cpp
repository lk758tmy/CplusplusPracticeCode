#include <iostream>
#include <cstring>//��д���������� 
using namespace std;
char a[101];//ȫ��Ĭ��Ϊ'\0' 
int main(){
    cin.getline(a,101,'\n');
    //cin.getline(���飬�������ַ���������ĳ�ַ���ֹͣ����[ȱʡΪ'\n') 
    //cin����Ĭ����' '��'\n'���������������' '�񣬿��ô˷� 
    //�ַ�����ֱ��cin���ᵱ���ַ��� 
    //�ַ���"tianmingyang"ռ13��λ�ã����һ��Ϊ'\0'
    //    system("chcp 437>nul."); 
    cout<<a<<endl; 
    system("pause");
    return 0;
}
