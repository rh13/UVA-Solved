#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len;
    while(gets(str))
        {
            i=0;
            int k=0;
    len=strlen(str);
   while(i<len)
    {
        while(!isalpha(str[i]))
        i++;
        if(i<len)
        k++;
        while(isalpha(str[i]))
            i++;
    }
    printf("%d\n",k);
}

}
