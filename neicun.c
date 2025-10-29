#include <stdio.h>
//#include<stdbool.h>

int main(){
    printf("int is %zd.\n",sizeof(int));
    printf("float %zd\n",sizeof(float));
    printf("char %zd\n",sizeof(char));
    printf("long %zd\n",sizeof(long));
    printf("long long %zd\n",sizeof(long long));
    printf("double %zd\n",sizeof(double));
    printf("long double %zd\n",sizeof(long double));
    //printf("bool %zd\n",sizeof(_Bool));
    printf("short %zd\n",sizeof(short));
    return 0;
}