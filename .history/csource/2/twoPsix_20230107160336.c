# include <stdio.h>



int getTrueNum(int input){
    int result = 0;
    int times = sizeof(input);
    for(int i = 0; i< times;i++)
    {
        result +=input & 1;
        input=input>1;
    }
    return result;
}

void main(){
    int a = 0x00354321;
    int b = 0x4A550C84;
    int result = a &b;

    int c = 0x8000;
    int d = 0x0001;
    printf("%d \n",getTrueNum(c));
    printf("%d",getTrueNum(d));
    

}

