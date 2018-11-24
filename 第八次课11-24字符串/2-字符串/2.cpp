#include <iostream>
using namespace std;
char a[1001];
int main(){
    cin.getline(a,1001);//缺省'\n'
    int i,big=0,small=0,num=0,other=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90)big++;
        else if(a[i]>=97 && a[i]<=122)small++;
        else if(a[i]>=48 && a[i]<=57)num++;
        else other++;
    }
    cout<<big<<' '<<small<<' '<<num<<' '<<other<<endl;
    system("pause");
    return 0;
}//统计字符串中大写，小写，数字，其它字符数 
