
#include<stdio.h>
void decimaltobinary(int n)
{
    if(n==0)
        return;
    decimaltobinary(n/2);
    printf("%d",n%2);
}
 int main(){
    decimaltobinary(10);
    return 0;
}
