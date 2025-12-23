#include <stdio.h>

int main(voide){
  printf("01. 寬=5.8, 高=9.2 , 面積是多少 ? \n "); // 印出字串
  printf("面積是 %.1lf * %.1lf = %.2lf \n\n", 5.8, 9.2, 5.8 * 9.2); // 印出字串與運算結果

  double width = 5.8; // 宣告變數, 提供寬的值 width = 5.8
  double height = 9.2; // 宣告變數, 提供高的值 height = 9.2
  double area = width * height; // 宣告變數, 同時計算面積 area = width * height
  printf("02. 寬=%.1lf, 高=%.1lf , 面積是多少 ?\n ", width, height); // 印出字串與變數
  printf("面積是 %.1lf * %.1lf = %.2lf \n", width, height, width*height); // 印出字串與變數
  printf("面積是 %.1lf * %.1lf = %.2lf \n\n", width, height, area); // 印出字串與變數
    
  double width_1;
  double height_1;
  double area_1;
  printf("03. \n");
  printf("輸入寬 : ");
  scanf("%lf", &width_1); // 讀取輸入的值, 並指定給變數 width_1
  printf("輸入高 : ");
  scanf("%lf", &height_1); // 讀取輸入的值, 並指定給變數 height_1
  area_1 = width_1 * height_1; // 計算面積, 並指定給變數 area_1
  printf("寬=%.1lf, 高=%.1lf , 面積是多少 ?\n ", width_1, height_1); // 印出字串與變數
  printf("面積是 %.1lf * %.1lf = %.2lf \n", width_1, height_1, area_1); //  印出字串與變數
  
  return 0;
  // 回傳 0 給作業系統, 表示程式執行成功
}
