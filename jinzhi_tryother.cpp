#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(int n){
	if(!n)return;
	int t=n/m,l=n%m;//t为n,m的商，l为n,m,的除数
	if(l<0){//若余数为负
		t++;//商+1
		l-=m;//余数-除数
	}solve(t);
	if(l<10)cout<<l;
	else cout<<(char)(l+55);
}int main(){
	cin>>n>>m;
	cout<<n<<'=';
	solve(n);
	cout<<"(base"<<m<<')';
}