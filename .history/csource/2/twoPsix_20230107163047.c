# include <stdio.h>



int getTrueNum(int input)
{
    int result = 0;
    int times = sizeof(input)*8;
    for(int i = 0; i< times;i++)
    {
        int sum = input & 1;
        result +=sum;
        input=input>>1;
    }
    return result;
}

// void main(){
//     int c = 0x8880;
//     int d = 0x0001;
//     printf("%d \n",getTrueNum(c));
//     // printf("%d",getTrueNum(d));
// }

void main()
{
    int c = 0x00354321;
    int d = 0x4A550C84;
    int tmp = getTrueNum(c&d);
    int times = sizeof(c)*8;
    int tmpc = c;
    int tmpTimes = 0;
    for(int i = 0;i < times; i++ )
    {
        c = c<<1;
        int tmp2 = getTrueNum(c&d);
        if(tmp<tmp2)
        {
            tmp = tmp2;
            tmpc = c;
            tmpTimes = i;
        }
    }
    printf("%d \n",tmp);
    printf("%d \n",tmpTimes);
    printf("c: 0x%x",tmpc);
}

