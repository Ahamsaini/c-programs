#include<stdio.h>
void grating(int num){
    if(num==0){
    return;}
    printf("%d",num);
    grating(num-1);
    printf("%d",num);
    return;
    }
int main(){
    int n;
    printf("enter the number n :");
    scanf("%d",&n);
    grating(n);
    return 0;
}