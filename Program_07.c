// WAP to input your 6 subjects marks and calculate percentage.
#include<stdio.h>
void main()
{
    int m1, m2, m3, m4, m5, m6;
    printf("Enter marks of Hindi, English, Maths, Science, Arts and Social Science : ");
    scanf("%d%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5, &m6);
    int total_marks = (m1 + m2 + m3 + m4 + m5 + m6);
    float percentage_marks = ((total_marks*100)/(600.0));
    printf("Total Marks obtained = %d ", total_marks);
    printf("Percentage obtained = %f ", percentage_marks); // format specifier for float is %f
}
