#include<iostream>
using namespace std;
int main(){
    long long x;//获取输入的数值
    cin>>x;
    long long j =1,s =0;
    int n =0;//p用于计算n!,n为所求的值,s=1!+2!+…n!
    int ns;
    while(s<=x){
        for(int i = 0,f = n,p = 1;i<n;i++)//在for循环内部f被依次为n,n-1,n-2…
        {   
            p*=f;
            f--;
            j =p;
        }
        s+=j;
        if(s>x) break;
        ns = (n++);
    }
    cout<<ns<<endl;
    return 0;
}