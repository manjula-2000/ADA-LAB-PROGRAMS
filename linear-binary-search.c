#include<stdio.h>
#include<conio.h>

int binary_search(int,int[],int,int);
int linear_search(int,int[],int);
void main()
{
    int n,a[10],s,pos,i,ch, begin,end;
    double t;
    do
    {

        printf("1) BINARY SEARCH.\n2) LINEAR SEARCH.\n3) EXIT.\n ENTER THE CHOICE : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n ENTER THE NUMBER OF ELEMENTS : ");
            scanf("%d",&n);
            printf("\n ENTER %d ELEMENTS IN ASCENDING ORDER : ",n);
            for(i=0; i<n; i++)
                scanf("%d",&a[i]);
            printf("\n ENTER THE ELEMENT TO SEARCH : ");
            scanf("%d",&s);

            pos=binary_search(s,a,0,n-1);

            break;
        case 2:
            printf("\n ENTER THE NUMBER OF ELEMENTS : ");
            scanf("%d",&n);
            printf("\n ENTER %d ELEMENTS : ",n);
            for(i=0; i<n; i++)
                scanf("%d",&a[i]);
            printf("\n ENTER THE ELEMENT TO SEARCH : ");
            scanf("%d",&s);

            pos=linear_search(n-1,a,s);

            break;
        case 3:
            exit(1);
        }
        if(pos==-1)
            printf("\n ELEMENT NOT FOUND! \n");

        else
            printf("\n ELEMENT FOUND AT = %d POSITION \n",pos);



        getch();
        printf("\n WANT TO CONTINUE 1 FOR YES 0 FOR NO! (1/0) ? \n ");
        scanf("%d",&ch);
    }
    while(ch);
}
int binary_search(int s,int a[],int low,int high)
{
    int mid;

    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(a[mid]==s)
        return mid+1;
    else if(a[mid]>s)
        return binary_search(s,a,low,mid-1);
    else
        return binary_search(s,a,mid+1,high);
}
int linear_search(int n,int a[],int s)
{

    if(n<0)
        return -1;
    if(s==a[n])
        return n+1;
    else
        return linear_search(n-1,a,s);
}
