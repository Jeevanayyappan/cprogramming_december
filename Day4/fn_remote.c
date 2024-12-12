#include<stdio.h>
int remote(char a)
{
    char volup,voldown,chup,chdown,on,off;
    {
        if(a=volup)
    {
        int vol;
        printf("Enter the volume:");
        scanf("%d",&vol);
        vol=vol+10;
        printf("The volume=%d",vol);
    }
    else if(a=voldown)
    {
        int vol;
        printf("Enter current the volume:");
        scanf("%d",&vol);
        vol=vol-10;
        printf("The volume=%d",vol);

    }
    else if(a=chup)
    {
        int chan_no;
        printf("Enter the chanel number:");
        scanf("%d",&chan_no);
        chan_no=chan_no+1;
        printf("The current channel no=%d",chan_no);

    }
    
    
    else if(a=chdown)
    {
        int chan_no;
        printf("Enter the  channel number:");
        scanf("%d",&chan_no);
        chan_no=chan_no-1;
        printf("The current channel no=%d",chan_no);

    }
    else if(a=on)
    {
       
        
        printf("Power On");

    }
    else if(a=off)
    {
       
        
        printf("Power Off");

    }
    else printf("Invalid Operator!");
    
}
}
int main()
{
    char a;
    printf("Enter the operator:");
    scanf("%s",&a);
    remote(a);
    return 0;
    
    
}