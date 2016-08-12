#include<stdio.h>
#include<conio.h>
int main()
{
    int n[5];
    int i,c,an;
    for(i=0;i<5;i++)
    {
        printf("Enter the value of n[%d]:",i);
        scanf("%d",&n[i]);
    }

   printf("\n\n Original array:");
    for(i=0;i<5;i++)
    {
        printf("\nn[%d]:%d",i,n[i]);
    }
    printf("\nEnter 1=insertion\n2=Deletion");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter the number and index no.of array at which you want to add this number:");
        scanf("%d %d",&i,&an);
        n[an]=i;
    }
    else if(c==2)
    {
        printf("Enter the index no. of array you want to delete:");
        scanf("%d",&an);
        n[an]='\0';
    }
    else
    {
        printf("Wrong choice!!!");
        exit(1);
    }
    printf("\n\nEdited array:");
    for(i=0;i<5;i++)
    {
        printf("\nn[%d]:%d",i,n[i]);
    }
    return 0;
}
