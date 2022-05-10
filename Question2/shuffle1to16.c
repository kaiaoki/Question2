#include<stdio.h>
#include<time.h>    //rime関数のためにインクルード
#include<stdlib.h> //rand関数のためにインクルード

void main(void)
{
    
    int num[16];
    int i,j;
      
    srand((unsigned int)time(NULL)); //現在時刻の情報で初期化、毎回違う乱数を生成 
    
    //ランダムな１−１６の数を重複なく生成
    for(i=0;i<=15;i++)
    {
        do
        {
            num[i]=rand()%16+1;
            for(j=0;j<i;j++)
            {
                if(num[i]==num[j])break;
            }

        }while(i!=j); //i=jという条件を満たすまで出られず、doからwhileを繰り返す、i=jは、numi=numjの条件が一度も満たされなかったら成り立つ。


    }

    //出力
    for(int k=0;k<=15;k++)
    {
        printf("%d\n",num[k]);
    }
}    




