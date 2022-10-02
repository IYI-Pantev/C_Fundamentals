/*
Представете служителите
във фирма в структура с членове: пореден номер, име, презиме,
фамилия, позиция, трудов стаж в години, заплата в лева, указател към
структурата, описващ неговия началник. Напишете програма, която
въвежда 10 служителя, които се съхраняват в масив от описаните
структури. Въвеждането на служителите може да стане на два паса,
първо въвеждане на всички данни без указателя към началника и на
втори пас, указване на всеки служител кой е неговият началник.
*/

#include <stdio.h>

struct info
{
    char name [20];
    char surname[20];
    char Lname[20];
} boss[100];

struct firmPeople
{
    int id;
    char name[20];
    char surname[20];
    char LastName[20];
    char position[20];
    int worked_for;
    int salary;
    struct info *boss;
} p1[100];

int main()
{
    int n;
    size_t i;
    printf("How many wokers do you have?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("----------------\n");
        printf("worker %lu \n", i + 1);
        p1[i].id = (i + 1);
        
        printf("first name: \n");
        scanf("%s", p1[i].name);

        printf("Surname: \n");
        scanf("%s", p1[i].surname);

        printf("Last name: \n");
        scanf("%s", p1[i].LastName);

        printf("Position: \n");
        scanf("%s", p1[i].position);

        printf("Worked for: \n");
        scanf("%s", p1[i].worked_for);

        printf("Salary: \n");
        scanf("%d", &p1[i].salary);

        printf("Boss first name: \n");
        scanf("%s", boss[i].name);

        printf("Boss second name: \n");
        scanf("%s", boss[i].surname);

        printf("Boss last name: \n");
        scanf("%s", boss[i].Lname);
        printf("/n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Worker %d\n", p1[i].id);
        printf("First name: %s\n", p1[i].name);
        printf("Position: %s\n", p1[i].position);
        printf("His/her boss first name: %s\n", boss[i].name);
        printf("-------------\n");
    }
    
    return 0;
}