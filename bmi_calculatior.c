
#include <stdio.h>



int main()
{
    int weight;
    float height, meter, bmi;
    printf("Enter height: ");
    scanf("%f",&height);

    printf("Enter weight: ");
    scanf("%d",&weight);

    meter = height * 0.3048;

    bmi = weight / (meter * meter);

    printf("height is: %.1f weight is: %d \n", height, weight);

    printf("Your body mass index is: %.2f \n", bmi);

    if(bmi <= 18.5){
        printf("Weight is low, go and eat some food.");
    }else if(18.5 > bmi || bmi <= 24.9){
        printf("Normal weight, don't eat much");
    }else if(24.9 > bmi || bmi < 34.9){
        printf("Over weight, eat less");
    }else{
        printf("Very very over weight, You are in danger.");
    }


    return 0;
}
