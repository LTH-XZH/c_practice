#include<iostream>
using namespace std;
int main()
{
    int n;//矩阵的阶数
    cin>>n;
    int juzhen[n][n];
    int i = 0,j = 0;//i为行标，j为列标
    int s = 1;//填充的数
    int p = 0;//填充的对角线序号，奇数向上填，偶数向下填

        //内部循环体1：左上角部分
        while(p<n){
        if(p%2==1){
            for(i = p,j = 0;i>=0;i--,j++,s++)
                juzhen[i][j] = s;
            p++;
        }
        else if(p%2==0){
            for(j = p,i = 0;j>=0;i++,j--,s++)
                juzhen[i][j] = s;
            p++;
        }

            //内部循环体2：右下角部分
        }
        while(p>=n && p<2*n){
             if(p%2==1){
            for(i = n-1,j = p-n+1;j<=n-1;i--,j++,s++)
                juzhen[i][j] = s;
            p++;
        }
        else if(p%2==0){
            for(j = n-1,i = p-n+1;i<=n-1;i++,j--,s++)
                juzhen[i][j] = s;
            p++;
        }
        }
    int a,b;//输出时的行数和列数
    for(a = 0;a<n;a++){
        for(b = 0;b<n;b++)
            if(b!=n-1) cout<<juzhen[a][b]<<" ";
            else cout<<juzhen[a][b]<<endl;
    }
    return 0;
}