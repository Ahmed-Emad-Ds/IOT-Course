#include <stdio.h>
    
void velocity(int start_temp, int end_temp);

int main(){
    int start_temp, end_temp;
    printf("Enter the starting temperature: ");
    scanf("%d", &start_temp);

    printf("Enter the ending temperature: ");
    scanf("%d", &end_temp);

    velocity(start_temp, end_temp);
    
    return 0;
}


void velocity(int start_temp, int end_temp){
    for(int i = start_temp; i <= end_temp; i++){
            double velocity = 331.3 + 0.61 * i;
            printf("At %d degrees Celsius the velocity of sound is %.1lf m/s\n", i, velocity);
    }
}
