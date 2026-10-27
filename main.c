#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct
{
    char *roomName[50];
    char *roomCode[3];
    char *roomDesc[512];
} dungeonRooms;

void extractRoomName(char *line, char *roomName)
{
    int i = 11;
    while (line[i] != '\0')
    {
        roomName[11] = line[i];
        i++;
    }

    /* printf("the 12th character is: %c\n", line[11]);
     printf("the 13th character is: %c\n", line[12]);
     printf("the 14th character is: %c\n", line[13]);
     printf("the 15th character is: %c\n", line[14]);
     printf("the 15th character is: %c\n", line[26]);
     printf("the 15th character is: %c\n", line[32]);
     */
}

int main()
{
    char newRoomName[50];
    extractRoomName("Room Name: Forgotten Shrine", newRoomName);
    printf("%s\n", newRoomName);
    return 0;
}
