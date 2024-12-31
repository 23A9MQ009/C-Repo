#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    double value=sqrt((x*x)+(y*y));
    printf("%.2lf",value);
}