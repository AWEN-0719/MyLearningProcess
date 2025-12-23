#include <stdio.h>

int main(voide){
    printf("%d - %d = %d\n", 5, 3, 5-3); // 5 - 3 = 2
    printf("%d + %d = %d\n", 5, 3, 5+3); // 5 + 3 = 8
    printf("%d * %d = %d\n", 5, 3, 5*3); // 5 * 3 = 15
    printf("%d / %d = %.2fl\n", 5, 3, 5/3.0); // 5 / 3 = 1.67
    printf("%d / %d = %.2fl\n", 5, 3, (double)5/3); // 5 / 3 = 1.67 
    printf("%d %% %d = %d\n", 5, 3, 5%3); // 5 % 3 = 2
}
