#include<stdio.h>
#include <string.h>

int main()
{   
    printf("Prices per day:\nCaravan-90lv.\nCamper-100lv.\n");
    int price_of_caravans;
    price_of_caravans = 90; 
    int price_of_camper;
    price_of_camper = 100; 

    char vehicle[15]=" ";
    printf("What type of vehicle do you want: ");
    scanf("%s", &vehicle);
    

    int days=0;
    printf("How many days do you want to use it: ");
    scanf("%d", &days);

    int money;
    if (strcasecmp(vehicle, "caravan")==0){
        money = money+(price_of_caravans*days);
        printf("You need to pay: %d", money);
    }
    else if(strcasecmp(vehicle, "camper")==0){
        money = money+(price_of_camper*days);
        printf("You need to pay: %d", money);
    }
    return 0;

}
