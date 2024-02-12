#include <stdio.h>

int main() {
    int time_in_second, hour, minute, second;
    
    scanf("%d", &time_in_second);

    hour = time_in_second / 3600;
    time_in_second = time_in_second % 3600;
    minute = time_in_second / 60;
    second = time_in_second % 60;

    if(hour > 0){
        printf("%d hour(s) ", hour);
    }
    if(minute > 0){
        printf("%d min(s) ", minute);
    }
    if(second > 0){
        printf("%d sec(s)\n", second);
    }
    
}
