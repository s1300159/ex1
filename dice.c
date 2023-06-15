#include  <stdio.h>
#include  <stdio.h>
#include  <stdio.h>

int main(){
    char name[100];
    printf("あなたの名前は何ですか?\n");
    scanf("%s",name);
    printf("こんにちは,%s!\n",name);
    
    srand(time(0));
    printf("サイコロを振る...\n");
    int dice1=(rand()%6)+1;
    int dice2=(rand()%6)+1;
    printf("サイコロ1:%d\n",dice1);
    printf("サイコロ2:%d\n",dice2);
    printf("合計値:%d\n",dice1+dice2);
    return 0;
}