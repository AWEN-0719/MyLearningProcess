#include <stdio.h> // 引入標準輸入輸出函式庫

int main(void) { // 主函式
  printf("Hello World\n"); // \n 表示換行
  printf("這是一個數值:%d\n",450); // %d 表示整數
  printf("這是一個雙精準福點數:%.2lf\n",3.1415926); // %.2lf 表示只顯示小數點後兩位
  printf("8 * 8 = %d",8*8); // int * int = int
  printf("5.5 * 3.3 = %lf",5.5*3.3); // double * double = double
  return 0; // 回傳 0 表示程式正常結束
} 
