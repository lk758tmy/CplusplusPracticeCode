#include <iostream>//字符串复制 
using namespace std;
char a[1001],b[1001];
int main(){
    cin.getline(a,1001);
    int i;
    for(i=0;a[i]!='\0';i++){//a[i]!='\0'代表字符串未结束
        b[i]=a[i];        
    }
    b[i]='\0';//十分重要，否则后面可能乱码！
    cout<<b<<endl;
    system("pause");
    return 0;
}
