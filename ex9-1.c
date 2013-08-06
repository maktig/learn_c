#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {12};
    char *name = "Zed";
    int rgbColor = 0xFFEF0D;

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    char *another = "Zed";
    printf("another: %s\n", another);
    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    printf("Color is %d\n", rgbColor);
    printf("Color is %#x\n", rgbColor);
    return 0;
}
