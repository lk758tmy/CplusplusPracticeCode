#include <iostream>//�ַ������� 
using namespace std;
char a[1001],b[1001];
int main(){
    cin.getline(a,1001);
    int i;
    for(i=0;a[i]!='\0';i++){//a[i]!='\0'�����ַ���δ����
        b[i]=a[i];        
    }
    b[i]='\0';//ʮ����Ҫ���������������룡
    cout<<b<<endl;
    system("pause");
    return 0;
}
