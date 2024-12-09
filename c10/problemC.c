#include <stdio.h>
int main()
{
    struct Student stu;
    scanf("%s %s %d %d %d %d",&stu.id,&stu.name,&stu.age,&stu.date.year,&stu.date.month,&stu.date.day);
    print(stu);
    return 0;
}