//
#include<stdio.h>
int main(){
    int sub1,sub2,sub3,totmarks,avg;
    printf("Enter marks of 3 subjects:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    const char*res=(sub1>=35&&sub2>=35&&sub3>=35)? "Pass":"Fail";
    
    avg=((sub1+sub2+sub3)/3);
    if(avg<=100)
    {
    if(avg>=90&&avg<=100)
    printf(" Result= %s ;Grade=A+",res);
    else if(avg>=80&&avg<90)
    printf("Result= %s;Grade=A",res);
    else if(avg>=75&&avg<80)
    printf("Result= %s;Grade=B+",res);
    else if(avg>=65&&avg<75)
    printf("Result= %s;Grade=B",res);
    else if(avg>=45&&avg<65)
    printf("Result= %s;Grade=C+",res);
    else if(avg>=35&&avg<45)
    printf("Result= %s;;Grade=C",res);
    else if(avg<=35)
    printf("Result=%s;Grade=D",res);
    }
    return 0;
    
}