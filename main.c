#include <stdio.h>

typedef struct Ryan {
    char gender[50];
} Ryan;


int main() {
    Ryan ryan;

    strcpy(ryan.gender, "female");

    printf("%s\n", ryan.gender);
    return 0;
}