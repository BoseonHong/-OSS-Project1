##include <stdio.h>

int main(){
  int num = 0;
  printf("first oss code\n");
  printf("sceond code\n");

  printf("select number(1~10)\n");
  scanf("%d\n",&num );
  if(num>0&&num<=10){
    printf(" number = %d".num);
  }
  else{
    printf("fail\n");
  }
  return 0;
}
