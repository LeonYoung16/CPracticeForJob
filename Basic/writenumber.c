#include<stdio.h>
#include<string.h>
int chr2int(char c);
char sp[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main()
{
    char text[100];
    int spell[5];
    int strlength = 0;
    int sum = 0;
    scanf("%s",text);
    strlength = strlen(text);
    for(unsigned int i=0; i<strlength; i++)
    {
        sum += chr2int(text[i]);
    }
    int len = 0;
    printf("%d\n", sum);
    while(sum != 0)
    {
        int remainder = sum%10;
        spell[len] = remainder;
        sum /= 10;
        len += 1;
    }

    printf("%d", len);

    for(unsigned int i=len; i>=0; i --)
    {
        
        if(i==1)
        {
            printf("%s", sp[spell[i-1]]);
            break;
        }else if( i != 1)
        {
            printf("%s ", sp[spell[i-1]]);
        }
    }
    return 0;
}





int chr2int(char c)
{
    if(c == '0')
    {
        return 0;
    }else if(c == '1')
    {
        return 1;
    }else if(c == '2')
    {
        return 2;
    }else if(c == '3')
    {
        return 3;
    }else if(c == '4')
    {
        return 4;
    }else if(c == '5')
    {
        return 5;
    }else if(c == '6')
    {
        return 6;
    }else if(c == '7')
    {
        return 7;
    }else if(c == '8')
    {
        return 8;
    }else if(c == '9')
    {
        return 9;
    }
    return 0;
}