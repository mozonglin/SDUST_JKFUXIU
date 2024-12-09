#include <stdio.h>
int main(){
     struct student
         {
             int serial;
             double score;
             char level;
             char name[14];
         };
    printf("%d",sizeof(struct student));
}