#include <stdio.h>
 
int main() {

    int sec;
    int hour;
    int minute;
    printf("Please enter the amount of seconds. \n");
    scanf("%d",&sec);
    if (sec > 86400 || sec < 0){
        return -1;
    }
    hour = sec / 3600;
    minute = sec % 3600 / 60;
    printf("%d hours, %d minutes.", hour, minute);
    return 0;
}