#include <iostream>
#include <cstring>//不写可能有问题 
using namespace std;
char a[101];//全局默认为'\0' 
int main(){
    cin.getline(a,101,'\n');
    //cin.getline(数组，最大接受字符数，遇到某字符就停止接受[缺省为'\n') 
    //cin输入默认以' '或'\n'结束，如果输入有' '格，可用此法 
    //字符数组直接cin，会当做字符串 
    //字符串"tianmingyang"占13个位置，最后一个为'\0'
    //    system("chcp 437>nul."); 
    cout<<a<<endl; 
    system("pause");
    return 0;
}
