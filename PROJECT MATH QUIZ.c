#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

// Initializing variables
int score = 100;
int select; 
int answer;

//char
char type[100];
char nod[100];

//================================================your code here================================================//


void clear_s() {
    system("cls");
}

void time_set(){
    int tem = 1;
    printf("Startimg in..\n");
    for (int i = 0; i < 3;) {
        sleep(1);
        printf("%d..\n", tem++);
        i++;
            if (i == 3) {
                sleep(1);
                printf("GO!!");
                sleep(1);
                clear_s();
            }
    };
}

int easy_math(){
    srand(time(NULL));
    int x1, x2, x3, x4, x5, x_sum;         //Number variables for EASY

    // EASY level numbers
    x1 = rand() % 10 + 1;
    x2 = rand() % 10 + 1; 
    x3 = rand() % 10 + 1;
    x4 = rand() % 10 + 1;
    x5 = rand() % 10 + 1;

    printf("1. %d - %d = ", x1, x2);
    scanf("%d", &answer);
    if (answer != (x_sum = x1 - x2)) {
        score -= 20;
    }

    printf("2. %d x %d + %d = ", x1, x2, x3);
    scanf("%d", &answer);
    if (answer != (x_sum = (x1 * x2) + x3)) {
        score -= 20;
    };

    printf("3. %d + %d + %d + %d = ", x1, x2, x3, x4);
    scanf("%d", &answer);
    if (answer != (x_sum = x1 + x2 + x3 + x4)) {
        score -= 20;
    };

    printf("4. %d x %d x %d = ", x1, x2, x3);
    scanf("%d", &answer);
    if (answer != (x_sum = x1 * x2 * x3)) {
        score -= 20;
    };

    printf("5. %d x %d - %d + %d - %d = ", x1, x2, x3, x4, x5);
    scanf("%d", &answer);
    if (answer != (x_sum = (x1 * x2) - x3 + x4 - x5)) {
        score -= 20;
    };
    sleep(1);
    system("cls");
    return 0;
}
int normal_math(){
    srand(time(NULL));
    int y1, y2, y3, y4, y5, y_sum;         //Number variables for NORMAL


    // NORMAL level numbers
    y1 = rand() % 50 + 1;
    y2 = rand() % 50 + 1;
    y3 = rand() % 50 + 1;
    y4 = rand() % 50 + 1;
    y5 = rand() % 50 + 1;

    printf("1. %d + %d = ", y1, y2);
    scanf("%d", &answer);
    if (answer != (y_sum = y1 + y2)) {
        score -= 20;
    }

    printf("2. %d - %d + %d = ", y1, y2, y3);
    scanf("%d", &answer);
    if (answer != (y_sum = y1 - (y2 + y3))) {
        score -= 20;
    };

    printf("3. %d + %d x %d - %d = ", y1, y2, y3, y4);
    scanf("%d", &answer);
    if (answer != (y_sum = (y1 + y2) * (y3 - y4))) {
        score -= 20;
    };

    printf("4. %d - %d x %d = ", y1, y2, y3);
    scanf("%d", &answer);
    if (answer != (y_sum =  y1 - (y2 * y3))) {
        score -= 20;
    };

    printf("5. %d x %d - %d x %d - %d = ", y1, y2, y3, y4, y5);
    scanf("%d", &answer);
    if (answer != (y_sum = (y1 * y2) - (y3 * y4) - y5)) {
        score -= 20;
    };
    sleep(1);
    system("cls");
    return 0;
}
int hard_math(){
    srand(time(NULL));
    int z1, z2, z3, z4, z5, z_sum;         //Number variables for HARD

    // HARD level numbers
    z1 = rand() % 100 + 1;
    z2 = rand() % 100 + 1;
    z3 = rand() % 100 + 1; 
    z4 = rand() % 100 + 1;
    z5 = rand() % 100 + 1;

    printf("1. %d - %d x %d = ", z1, z2, z3);
    scanf("%d", &answer);
    if (answer != (z_sum = z1 - (z2 * z3))) {
        score -= 20;
    }
    printf("2. %d x %d - %d x %d = ", z1, z2, z3, z4);
    scanf("%d", &answer);
    if (answer != (z_sum = (z1 * z2) - (z3 * z4))) {
        score -= 20;
    };

    printf("3. %d + %d + %d + %d x %d = ", z1, z2, z3, z4, z5);
    scanf("%d", &answer);
    if (answer != (z_sum = z1 + z2 + z3 + (z4 * z5))) {
        score -= 20;
    };

    printf("4. %d - %d - %d - %d  = ", z1, z2, z3, z4);
    scanf("%d", &answer);
    if (answer != (z_sum = z1 - z2 - z3 - z4)) {
        score -= 20;
    };

    printf("5. %d - %d x %d x %d + %d = ", z1, z2, z3, z4, z5);
    scanf("%d", &answer);
    if (answer != (z_sum = z1 - (z2 * z3 * z4) + z5)) {
        score -= 20;
    };
    sleep(1);
    system("cls");
    return 0;
}


int main() {
    srand(time(NULL));
    printf ("Apakah sudah siap untuk mengerjakan soal Matematika? (y/n)\n");
    printf ("Answers : ");
    scanf ("%s", &nod);
    while (nod) {
    if (strcmp (nod, "y") == 0) {
        printf ("Alright! Let's do this!!");
        sleep(2);
        clear_s();
        break;
    } else if (strcmp (nod, "n") == 0) {
        printf ("If thats so... Practice first before get into the challenges!\n\n");
        return 0;
        } else {
            printf("Invalid choice! Please answer with 'y' or 'n': ");
            scanf("%s", nod);
            continue;
        }
    };
    

    char difficulty[][50] = {"EASY", "NORMAL", "HARD"};
    printf("Pilihlah Tingkat Kesulitan!\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i+1, difficulty[i]);
    };
    
    printf("Choosing : ");
    scanf("%d", &select);

    switch (select) {
        case 1:
            printf("You have chosen EASY level!\n");
            sleep(1);
            clear_s();
            time_set();
            easy_math();
            break;
        case 2:
            printf("You have chosen NORMAL level!\n");
            sleep(1);
            clear_s();
            time_set();
            normal_math();
            break;
        case 3:
            printf("You have chosen HARD level!\n");
            sleep(1);
            clear_s();
            time_set();
            hard_math();
            break;
        default:
            printf("Invalid choice!\n");
            break;
    };
    
    printf("Quiz Matematika Selesai!!\n\n");
    sleep(2);
    if (score == 100) {
        printf("Score = A, Perfect!");
    } else if (score <= 100 && score >= 80) {
        printf("Score = B, Good!");
    } else if (score <= 80 && score >= 60) {
        printf("Score = C, Not Bad!");
    } else if (score <= 60 && score >= 40) {
        printf("Score = D, Bad, Try Again!");
    } else if (score <= 40 && score >= 20) {
        printf("Score = E, Disappointing! But still have hope!");
    } else {
        printf("Score = F, Need Improvement!");
    };

    return 0;
}