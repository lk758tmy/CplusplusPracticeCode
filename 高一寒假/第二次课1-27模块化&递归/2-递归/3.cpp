#include <iostream>
//��ŵ�� 
using namespace std;
int lf[101],md[101],rt[101];
void move(char a,char b,char c,int n){
//��nƬ��a����b�ƶ���c
    if(n==0) return ;//void���ؿ�
    else{
        move(a,c,b,n-1);
        cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
        move(b,a,c,n-1);
    }
//����д�����n=1ʱ�����ݹ飬����� 
}
int main(){
    int n;
    cin>>n;
    move('A','B','C',n);
    system("pause");
    return 0;
}
