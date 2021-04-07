#include <Windows.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int userInt;
    printf("For infinite loop type 1:\n");
    scanf("%d", &userInt);
    if (userInt == 1)
    {
        printf("Infinite loop selected. To stop script press CTRL+C");
        while (TRUE)
        {
            SetCursorPos(x, y);
            printf("Mouse in Location X=%d, Location Y=%d \n", x, y);
            x++;
            y++;
            if(x==1293&y==1293){
                x=0;
                y=0;
                x++;
                y++;
            }
        }
    }
    else
    {
        printf("Wrong selection");
    }

    return 0;
}
