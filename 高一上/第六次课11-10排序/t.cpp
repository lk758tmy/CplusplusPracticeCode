#include <iostream>
using namespace std;
int main()
{
    int i,j,x[5000],t,n[5000],m,l;
    cin>>t>>m;
    l=int(m*1.5);
    for(i=0;i<t;i++){
        cin>>x[i]>>n[i];                
    }
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
            if(n[i]<n[j]){
                swap(n[i],n[j]);
                swap(x[i],x[j]);
            }
            if(n[i]==n[j] && x[i]>x[j]){
                swap(x[i],x[j]);           
            }
        }    
    }
    int count;
    for(i=0;i<t;i++){
        if(n[i]>=n[l-1])
            count++;
        else
            break;                 
    }
    cout<<n[l-1]<<" "<<count<<endl;
    for(i=0;i<count;i++){
        cout<<x[i]<<" "<<n[i]<<endl;                 
    }
    system("pause");
    return 0;
}/*
输入格式

第一行，两个整数n，m（5 ≤ n ≤ 5000，3 ≤ m ≤ n），
中间用一个空格隔开，其中n 表示报名参加笔试的选手总数，
m 表示计划录取的志愿者人数。输入数据保证m*150%向下取整后小于等于n。
第二行到第n+1 行，每行包括两个整数，中间用一个空格隔开，
分别是选手的报名号k（1000 ≤ k ≤ 9999）和
该选手的笔试成绩s（1 ≤ s ≤ 100）。数据保证选手的报名号各不相同。

输出格式

第一行，有两个整数，用一个空格隔开，第一个整数表示面试分数线；
第二个整数为进入面试的选手的实际人数。
从第二行开始，每行包含两个整数，中间用一个空格隔开，
分别表示进入面试的选手的报名号和笔试成绩，按照笔试成绩从高到低输出，
如果成绩相同，则按报名号由小到大的顺序输出。*/ 
