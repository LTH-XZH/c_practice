#include <stdio.h>
#include <math.h>
int n,R;
void solve(int);
int main()
{
    scanf("%d %d",&n,&R);
    solve(n);
    printf("(base%d)",R);
}
void solve(int n)
{
    if (!n) return;
    int i = n%R;
    int t = n/R;
    if (n%R<0)
    {
        i-=R;
        t++;
    }
    solve(t);
    if (R>=10)
    {
        i = (char)(i+55);
        printf("%c",i);
    
    }
    else
    {
        printf("%d",i);
    }
    }
/*#include <stdio.h>

int n, m;

void solve(int n) {
    if (!n) return;
    int t = n / m;
    int l = n % m;
    
    if (l < 0) {
        t++;
        l -= m;
    }
    
    solve(t);
    
    if (l < 10)
        printf("%d", l);
    else
        printf("%c", l + 55);
}

int main() {
    scanf("%d%d", &n, &m);
    printf("%d=", n);
    solve(n);
    printf("(base%d)", m);
    return 0;
}*/
