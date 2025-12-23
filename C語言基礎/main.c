#include <stdio.h> // 引入標準輸入輸出函式庫

int main(void) { // 主函式
  printf("Hello World\n"); // \n 表示換行
  printf("這是一個數值:%d\n",450); // %d 表示整數
  printf("這是一個雙精準福點數:%.2lf\n",3.1415926); // %.2lf 表示只顯示小數點後兩位
  printf("8 * 8 = %d\n",8*8); // int * int = int (運算元,整數型別int 8)(運算子 *)(運算元,整數型別int 8)
  printf("5.5 * 3.3 = %lf\n",5.5*3.3); // double * double = double
  printf("5 / 3 = %lf\n", 5/3); // int / int = int
  printf("5.0 / 3.0 = %.2lf\n", 5.0/3.0); // double / double = double
  return 0; // 回傳 0 表示程式正常結束
}  
