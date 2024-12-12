#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the no of rows and columns of Array;");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    printf("Enter %d elements in Array",(m*n));
    {
        for(int i=0;i<m;i++)
        {
           for(int j=0;i<n;i++)
           printf("array[%d][%d]=%d\n",i,j,a[i][j]);
           scanf("%d%d",&a[i],&a[j],&a[i][j]);}
     
        
    }
    for( i=0;i<m;i++)
    {{
        for( j=0;j<n;j++)

    printf("arr[%d][%d]=%d\n",i,j,a[i][j]);
    }
    }
    return 0;

}