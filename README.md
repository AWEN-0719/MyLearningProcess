# C 語言複習歷程！

## 輸入輸出
- 基本語法
```c
printf("字串\n");
```
```c
// 輸出範例
#include <stdio.h>
int main(void) {
    printf("Hello World!\n");  // \n 表示換行
    return 0;
}
```
```c
scanf("格式字串", &變數);
```
```c
// 輸入範例
#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0, d = 0;
    
    scanf("%d", &a);  // 輸入整數並將值給變數 a
    scanf("%d", &b);  // 輸入整數並將值給變數 b
    printf("a + b = %d\n", a + b);  // 計算 a + b 並將值輸出
    
    scanf("%d %d", &c, &d);  // 輸入 2 個整數值中間用空格，並將值依序給變數 c 和 d
    printf("c * d = %d\n", c * d);  // 計算 c 和 d 相乘並輸出
    
    return 0;
}
```

### C 語言輸出控制符號

| 字串格式化 | 說明 | 範例 |
|:---------|:----|:----|
| %d | 按十進制整數實際長度輸出 | `printf("%d", 42);` |
| %ld | 輸出長整數 | `printf("%ld", 123456789L);` |
| %u | 輸出無符號整數 | `printf("%u", 42);` |
| %hhu | unsigned char | `printf("%hhu", 255);` |
| %c | 輸出字元 | `printf("%c", 'A');` |
| %f | 輸出實數(浮點數) | `printf("%f", 3.14);` |
| %lf | 有小數點自動double | `printf("%lf", 3.14159);` |
| %lf | 手動double | `printf("%lf", (double)3);` |
| %o | 輸出八進位 | `printf("%o", 42);` |
| %s | 輸出字串 | `printf("%s", "Hello");` |
| %x | 輸出十六進位 | `printf("%x", 42);` |

### printf() 輸出函數
```c
// 格式化輸出範例
#include <stdio.h>

int main(void) {
  int i = 10;
  printf("%d\n", i);  // %d 是字串格式符號，d 表示十進位，後面的 i 是輸出參數

  return 0;
}
```
```c
// 進階格式化範例
#include <stdio.h>

int main(void) {
    char myChar = 100;
    printf("myChar: %d\n", myChar); 
    
    unsigned short myShort = 60000;
    printf("myShort: %d\n", myShort);
    
    int myInt = 210000000;
    printf("myInt: %d\n", myInt);
    
    long long myLong = 2100000000000000000LL;
    printf("myLong: %lld\n", myLong);
    
    float myFloat = 3.145;
    printf("myFloat: %.2f\n", myFloat);
    
    double myDouble = 35689.34567;
    printf("myDouble: %.4f\n", myDouble);
    
    return 0;
}
```
```c
// 多變數輸出
#include <stdio.h>

int main(void) {
    int i = 10;
    int j = 3;
    printf("%d %d\n", i, j);

    return 0;
}
```
```c
// 格式化字串輸出
#include <stdio.h>

int main(void) {
    int i = 10;
    int j = 3;
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
```
```c
// 進位制輸出
#include <stdio.h>

int main(void) {
    int i = 47;
    printf("十進位: %d\n", i);   
    printf("十六進位 (小寫): %x\n", i);   
    printf("十六進位 (大寫): %X\n", i);   
    printf("十六進位 (帶前綴): %#x\n", i);   
    printf("八進位: %o\n", i);   
    return 0;
}
```
```c
// 特殊字元輸出
#include <stdio.h>

int main(void) {
    printf("%%d\n");    // 輸出 %d
    printf("\\\n");     // 輸出反斜線
    printf("\"\"\n");   // 輸出雙引號
    return 0;
}
```

### scanf() 輸入函數
```c
// 多種資料型別輸入
#include <stdio.h>

int main(void) {
    char letter;
    int age;
    char url[30];
    float price;
    
    printf("請輸入字元: ");
    scanf("%c", &letter);
    
    printf("請輸入年齡: ");
    scanf("%d", &age);
    
    printf("請輸入字串: ");
    scanf("%s", url);
    
    printf("請輸入價格: ");
    scanf("%f", &price);
    
    printf("這是字元: %c\n", letter);
    printf("這是整數: %d\n", age);
    printf("這是字串: %s\n", url);
    printf("這是浮點數: %.2f\n", price);
    
    return 0;
}
```

## 範例練習
 - 範例 1: 輸入出生「民國年份」後，求取對應「西元年份」及「現在年齡」。

- 公式
  - 西元年份 = 民國年份 + 1911
  - 年齡 = 現在年份 - 西元年份
  - 顯示範例
```
出生民國年份: 60
對應西元年份: 1971，今年 54 歲
```
- 練習 1:
```c
// 輸入民國，輸出西元與年齡
#include <stdio.h>

int main(void) {
    int year = 0;
    int currentYear = 2025;  // 更新為當前年份
    
    printf("出生民國年份: ");
    scanf("%d", &year);
    
    int westernYear = 1911 + year;
    int age = currentYear - westernYear;
    
    printf("對應西元年份: %d，今年 %d 歲\n", westernYear, age);
    
    return 0;
}
```
- 範例 2: 同步登錄「國文、英文、數學」學測成績，進行三科「總分、平均」計算報告。
  - 顯示範例:
```
科目: 國文, 英文, 數學
請輸入: 92 85 73

--- 計算學測分數 ----
三科總分: 250
三科平均: 83.3
```
- 練習 2:
```c
// 學測成績計算
#include <stdio.h>

int main(void) {
    int chinese, english, math;
    int sum = 0;
    float average = 0;
    
    printf("科目: 國文, 英文, 數學\n");
    printf("請輸入: ");
    scanf("%d %d %d", &chinese, &english, &math);
    
    sum = chinese + english + math;
    average = sum / 3.0;
    
    printf("\n--- 計算學測分數 ----\n");
    printf("三科總分: %d\n", sum);
    printf("三科平均: %.1f\n", average);
    
    return 0;
}
```


