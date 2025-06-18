#include<stdio.h>
int main()
{
    int a[100], n, i;

    printf("Enter the number of elements= ");
    scanf("%d",&n);

    //input
    for(i=1; i<=n; i++)
    {
        printf("Enter the element %d ",i);
        scanf("%d",&a[i]);
    }

    //print original

    printf("Entered Array = ");
    for(i=1; i<=n; i++)
    {

        printf("%d\t",a[i]);

    }

    printf("\n");
    //reversed array

    printf("Reversed Array= ");
    for(i=n; i>0; i--)
    {

        printf("%d\t",a[i]);

    }
}
