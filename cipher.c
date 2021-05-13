#include <stdio.h>

int main()
{
    char st[]="dixoae{oczz_ocz_hvnozm_ja_xvznzm_xdkczm}";
    char ch1[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int key=5,n;
    int len=40;
    char res[len];

    for(int i=0;i<len;i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            for(int j=0;j<26;j++)
            {
                if(st[i]==ch1[j])
                {
                    /*printf("%c\n",ch1[j+5]);
                    printf("%c\n",st[i]);*/
                      if(j>=21)
                      {
                          if(j==21)
                          {
                              j=0;
                          }
                          if(j==22)
                          {
                              j=1;
                          }
                          if(j==23)
                          {
                              j=2;
                          }
                          if(j==24)
                          {
                              j=3;
                          }
                          if(j==25)
                          {
                              j=4;
                          }
                          if(j==26)
                          {
                              j=5;
                          }
                          res[i]=res[i]+ch1[j];
                          //printf("here %c",ch1[i]);
                          break;
                      }
                      else
                      {
                          res[i]=res[i]+ch1[j+5];
                          //printf("%c%d\t",ch1[j+5],i);
                          break;
                      }
                }
            }
        }
        else
        {
            res[i]=res[i]+st[i];
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",res[i]);
    }
    return 0;
}
