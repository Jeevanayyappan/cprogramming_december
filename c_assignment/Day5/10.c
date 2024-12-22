//WAP to create a function to find the maximum length among a list of strings, and use a loop to call the function for a series of strings entered by the user.
#include<stdio.h>
#include<string.h>
int findMaxlength(char String[][100],int n)
{
    int maxlength=0;
    for(int i=0;i<n;i++)
    {
      int length=strlen(String[i]);
      if(length>maxlength)
      {
        maxlength=length;

      }
    }
    return maxlength;
}
int main()
{
    int numSets;
    printf("Enter the number of Sets of Strings: ");
    scanf("%d",&numSets);
    for(int set=0;set<numSets;set++)
    {
       int numString;
       printf("Enter the number of Strings in Set %d: ",set+1);
       scanf("%d",&numString);
       char String[numString][100];
      for(int i=0;i<numString;i++)
      {
       printf("Enter the %d String: ",i+1);
       scanf("%s",String[i]);
      }
      int maxlength=findMaxlength(String,numString);
      printf("The Maximum Length of the Strings in Set %d is : %d.\n",set+1,maxlength);
    }
    return 0;   
}