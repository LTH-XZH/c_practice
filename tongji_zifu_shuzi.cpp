#include<iostream>
using namespace std;
int main(){
    char input[90];
    int num = 0,alphabet = 0,space = 0,others = 0;
    cin.getline(input,90);
    for(char c : input){
        if(c!='\0'){
            if (c>='0'&&c<='9') num++;
            else if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) alphabet++;
            else if(c == ' ') space++;
            else others++;
        }
        else break;
    }
    cout<<"数字:"<<num<<endl;
    cout<<"空格:"<<space<<endl;
    cout<<"字母:"<<alphabet<<endl;
    cout<<"其他字符:"<<others<<endl;
    return 0;
}