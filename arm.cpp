#include <stdio.h>

int main() {
    int no,sum,temp,rem;
    printf("Enter a number:\n");
    scanf("%d",&no);
    temp=no;
    while(no>0)
    {
        rem=no%10;
        sum=sum+rem*rem*rem;
        no=no/10;
    }
if(temp == sum)
{
    printf("%d is armstrong");
}
else{
        printf("%d is  not armstrong");

}
    return 0;
}