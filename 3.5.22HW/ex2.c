int main(){

    double days, km, percent, counter_km, added_km, x_km, y_km;

    printf("Days:\n");
    scanf("%lf", &days); 

    printf("Kilometres first day:\n");
    scanf("%lf", &km) ; 

    printf("Improvement in percent:\n");
    scanf("%lf", &percent); 

    printf("How many X km to stop: ");
    scanf("%lf", &x_km);

    printf("How many Y km to stop: ");
    scanf("%lf", &y_km);



    counter_km = km; 
    added_km = 0;
    for (int day = 1; day < days; day++)
    {
        counter_km = (counter_km*percent/100)+ counter_km; 
        added_km += counter_km;

        if (added_km >= x_km)
        {
            printf("You've reached maximum km for you: %.2f km for %d days\n", x_km, day);
            break;
        }
        else if (added_km >= y_km)
        {
            printf("You've reached maximum km for you: %.2f km for %d days\n", y_km, day);
            break;
        }
        
    }
    printf("Total km: %.3f km", added_km);
    return 0;
}