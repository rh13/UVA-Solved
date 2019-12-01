#include<stdio.h>
int main()
{
  char  name[10];
  int i=0;
for(;scanf("%s",name)!=EOF;)
{
    if(name[0]=='*')
        break;
    if(name[0]=='u' || name[0]=='U')
        printf("Case %d: Hajj-e-Asghar\n",++i);
    else if(name[0]=='h' || name[0]=='H')
        printf("Case %d: Hajj-e-Akbar\n",++i);
}
 return 0;
}
