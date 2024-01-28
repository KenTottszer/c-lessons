#include <stdio.h>

typedef struct Date {
    int year;
    int month;
    int day;
} Date;

typedef struct Competitor {
    char name[31];
    Date birth;
    int rank;
} Competitor;

void Date_print(Date d);

void Competitor_print(Competitor c);

int main() {
    Competitor competitors[5] = {
        { "Am, Erica", {1984, 5, 6}, 1 },
        { "Abnorm, Al", {1982, 9, 30}, 3 },
        { "Pri, Mary", {1988, 8, 25}, 2 },
        { "Duck, Ling", {1979, 6, 10}, 5 },
        { "Mac, Donald", {1992, 4, 5}, 4 },
    };

    /* name of competitor 0 - printf %s */
    printf("Name of Competitor 0 is %s\n", competitors[0].name);
    /* rank of competitor 2 */
    printf("Rank of Competitor 2 is %d\n", competitors[2].rank);
    /* birth date of competitor 4, use the given function */
    Date_print(competitors[4].birth);
    /* the first letter of the name of competitor 1 (a string is an array of characters) */
    printf("First letter of competitor 1's name is %c\n", competitors[1].name[0]);
    /* is competitor 1 among the best three? yes/no, may use ?: operator */
    if (competitors[1].rank<=3){
        printf("Competitor 1's rank is among the best three!\n");
    }
    else{
        printf("Competitor 1's rank is not among the best three!\n");
    }
    /* is competitor 4 faster than competitor 3? */
    if(competitors[4].rank<competitors[3].rank){
        printf("Competitor 4 is faster than Competitor 3!\n");
    }
    else{
        printf("Competitor 3 is faster than Competitor 4!\n");
    }
    /* was competitor 1 born in the same year as competitor 2? */
    if(competitors[1].birth.year==competitors[2].birth.year){
       printf("Competitor 1's birth year is the same as Competitor 2's!\n");
    }
    else{
        printf("Competitor 1's birth year is not the same as Competitor 2's!\n");
    }
    /* complete the Competitor_print() function,
     * then print all data of competitor 1 */
    Competitor_print(competitors[1]);
    /* at last print all data of all competitors. */
    printf("Details of Competitor are...\n");
    for (int i = 0; i < 4; i++){
        Competitor_print(competitors[i]);
    }
    
    return 0;
}

void Date_print(Date d) {
    /* print year, month and day */
    printf("Date of Birth is %d.%d.%d\n", d.year, d.month, d.day );
}

void Competitor_print(Competitor c) {
    /* print all data of the competitor */
    printf(" Name: %s\n Birth: %d.%d.%d\n Rank: %d\n\n", c.name, c.birth.year, c.birth.month, c.birth.day, c.rank);
}