#include<iostream>
using namespace std;
int main(){
    int N;
    int M[101];
    cin>>N;
    long num =1;
    for (int i = 0; i < N; ++i) cin >> M[i];
    long seat[101][10][10];//seat[N][i][s] 第一维为学校，第二维为队伍，第三维为座位
    int g = 0,t = 0;//g为最后剩余的高校，t为退出循环时正要分配的队伍
    int maxnum =M[0];
    int duo = 0;
    for(int m =0;m<N;m++){
        if(M[m]>=maxnum) {
            maxnum = M[m];
            duo = m;
        }
    }
    if(N==1){
        for(int e = 0;e<10;e++){
            for(int f = 0;f<10;f++){
                seat[0][e][f] = num;
                num+=2;
            }
        }
    }
    else{
    for(int u = 0;u<10;++u){
        for(int j = 0;j<10;++j){
            for(int k = 0;k<N;++k){
                if(u>=M[k]) continue;//已分配完，略过，分配其他队伍
                    seat[k][u][j] = num;
                    if(seat[k][u][1]-seat[k][u][0]==1){
                        g =k;
                        t =u;
                        break;
                    }
                    num++;
                }
            if(seat[g][t][1]-seat[g][t][0]==1) break;    
        }
            if(seat[g][t][1]-seat[g][t][0]==1||seat[duo-1][M[duo]-1][9]!=0) break;
    }
    cout<<num<<endl;
    if(seat[g][t][1]-seat[g][t][0]==1){
        if(seat[g][t][0]-seat[g][t-1][9]!=1)
            num--;
        for(;t<M[g];t++){
            for(int s=0;s<10;s++){
                seat[g][t][s] = num;
                num+=2;
            }
        }
    }
}
    for(int n=0;n<N;n++){
        cout<<"#"<<n+1<<endl;
        for(int d=0;d<M[n];d++){
            for(int z=0;z<10;z++){
                if(z!=9) cout<<seat[n][d][z]<<" ";
                else cout<<seat[n][d][z]<<endl;
            }
        }
    }
    return 0;
}
