#include <stdio.h>

int main() {
    char name[30]; // เก็บชื่อ
    int age; // เก็บอายุ
    float height; // เก็บส่วนสูง

    char subject; // ชื่อวิชา
    float grade; // เกรดที่ได้
    char symbol; // ตัวอักษรแทนเกรด

    // รับข้อมูลจากผู้ใช้
    scanf("%s %d %f", name, &age, &height);
    scanf(" %c %f %c", &subject, &grade, &symbol);

    // แสดงผลลัพธ์
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}
