//3. Напишете функция, която връща двумерен масив, запълнен по
//следния начин:
 
 
int main() {
 
    int matrix[5][5];
    int lower_counter = 1;
    int upper_counter = 20;
 
    for (int a = 0; a < 5; ++a){
        for (int b = 0; b < 5; ++b) {
            if (a < b) {
                matrix[b][a] = lower_counter;
                lower_counter++;
            }else if (a == b) {
                matrix[a][b] = 0;
            }else if (a > b){
                matrix[b][a] = upper_counter;
                upper_counter--;
            }
        }
    }
 
    return 0;
}