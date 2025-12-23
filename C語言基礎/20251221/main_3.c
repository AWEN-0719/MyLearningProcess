#include <stdio.h>

int main(voide){
  printf("寬=5.8, 高=9.2 , 面積是多少 ? \n "); // 印出字串
  printf("面積是 %.1lf * %.1lf = %.2lf \n", 5.8, 9.2, 5.8 * 9.2); // 印出字串與運算結果

  double width = 5.8; // 宣告變數, 寬 width = 5.8
  double height = 9.2; // 宣告變數, 高 height = 9.2
  double area = width * height; // 宣告變數, 面積 area = width * height
  printf("寬=%.1lf, 高=%.1lf , 面積是多少 ?\n ", width, height); // 印出字串與變數
  printf("面積是 %.1lf * %.1lf = %.2lf \n", width, height, width*height); // 印出字串與變數
  printf("面積是 %.1lf * %.1lf = %.2lf \n", width, height, area); // 印出字串與變數
    
  return 0;
  // 回傳 0 給作業系統, 表示程式執行成功
}
