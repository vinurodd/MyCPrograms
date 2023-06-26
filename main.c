#include <stdio.h>
#include <stdlib.h>
void display(int [], int);
void display1(int *,int);
int main()
{
    int a[]={2,3,4,5,1,11,8,9,11};
    int n=9;
    int *q=a;
    printf("Arrays and My Functions\n");
    display(q,n);
    display(a,n);
    display1(&a[0],n);
    return 0;
}


void display(int a[], int n){
int i;
for(i=0;i<n;i++)
    printf("%d %d\t",a[i],i);
printf("\n");
}

void display1(int *p,int n){
int i;
for(i=0;i<n;i++)
    printf("%d\t",i[p]);  //==> *(p+i) or *(i+p) i[p]
printf("\n");

}
