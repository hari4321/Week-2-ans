#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int dec(char,char);

int main()
{
    char str[]="1314190e1c1001024a0825194e145d0e251849251f4e091316032518084a11491407";
    char res[60];
    char key='z';
    char m,n,ch;
    int k;
    char te[3];
    for(int i=0;i<strlen(str);i+=2)
    {
        m=str[i];
        n=str[i+1];
        k=dec(m,n);
        ch=k;
        printf("%c\n",ch);
        res[i]=ch^key;
    }
    for(int i=0;i<strlen(str);i+=2)
    {
        printf("%c",res[i]);
    }
    return 0;
}

int dec(char h1,char h2)
{
    char hex[3];
    hex[0]=h1;
    hex[1]=h2;
    int i = 0, val;
    int decimal = 0;
    int place = 1;
    int len = 1;
    for(i=0; hex[i]!='\0'; i++)
    {
        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    return decimal;
}
