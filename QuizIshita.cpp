#include <stdio.h>
#include <stdlib.h>

int main() {
	jump :
    char population;
    int score = 0;

    printf("Choose the correct options\n");

    while (1) {
        printf("Which state is most populated in India:\n");
        printf("a) Uttar Pradesh\tb) Andhra Pradesh\nc) Tamil Nadu\t\td) Kerala\n");
        scanf(" %c", &population);

        switch (population) {
            case 'a':
                printf("Uttar Pradesh\n");
                score++;
                break;
            case 'b':
                printf("Andhra Pradesh\n");
                break;
            case 'c':
                printf("Tamil Nadu\n");
                break;
            case 'd':
                printf("Kerala\n");
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        char choice;
                printf("Please enter 1 for the next question or any other value to return: ");
                scanf(" %c", &choice);
        if (choice == '1') {
                    printf("Next question\n");
                } else {
                    printf("Return to the previous question\n");
                    goto jump;
                }
                break;
    }
    jump2 :
    char cleanest;
    while (1) {
        printf("Which is the cleanest city in India:\n");
        printf("a) Maharashtra\tb) Gujarat\nc) Madhya Pradesh\t\d) Uttrakhand\n");
        scanf(" %c", &cleanest);

        switch (cleanest) {
            case 'a':
                printf("Maharashtra\n");
                break;
            case 'b':
                printf("Gujarat\n");
                break;
            case 'c':
                printf("Madhya Pradesh\n");
                score++;
                break;
            case 'd':
                printf("Uttrakhand\n");
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        char choice;
                printf("Please enter 1 for the next question or any other value to return: ");
                scanf(" %c", &choice);
        if (choice == '1') {
                    printf("Next question\n");
                } else {
                    printf("Return to the previous question\n");
                    goto jump2;
                }
                break;
    }
    jump3 :
    char silicon_valley;
    while (1) {
        printf("What city is the silicon valley of India:\n");
        printf("a)Hyderabad\tb) Bangalore\nc) Pune\td) Mumbai\n");
        scanf(" %c", &silicon_valley);

        switch (silicon_valley) {
            case 'a':
                printf("Hyderabad\n");
                break;
            case 'b':
                printf("Bangalore\n");
                score++;
                break;
            case 'c':
                printf("Pune\n");
                break;
            case 'd':
                printf("Mumbai\n");
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        char choice;
                printf("Please enter 1 for the next question or any other value to return: ");
                scanf(" %c", &choice);
        if (choice == '1') {
                    printf("Next question\n");
                } else {
                    printf("Return to the previous question\n");
                    goto jump3;
                }
                break;
}
jump4 :
    char pearl;
    while (1) {
        printf("Which city known as City of Pearl:\n");
        printf("a)Jaipur\tb) Indore\nc) Dehradun\td) Hyderabad\n");
        scanf(" %c", &pearl);

        switch (pearl) {
            case 'a':
                printf("Jaipur\n");
                score;
                break;
            case 'b':
                printf("Indore\n");
                break;
            case 'c':
                printf("Dehradun\n");
                break;
            case 'd':
                printf("Hyderabad\n");
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        jump5 :
        char choice;
                printf("Please enter 0 for submit or\n 1 for previous question\n 2 for reattempt questions\n : ");
                scanf(" %c", &choice);
        if (choice == '0') {
                    printf("your quiz has been submitted\n");
                } else if(choice == '1') 
				{
                    printf("Return to the previous question\n");
                    goto jump4;
                }
                else if(choice == '2') 
				{
                    printf("Return to the previous question\n");
                    goto jump;
                }
                else 
				{
                    printf("u have enter wrong value enter it again\n");
                    goto jump5;
                }
                break;
    }
    printf("\nCorrect options:\n");
    printf("Q1: d\tQ2: b\tQ3: d\tQ4: a\n");
    printf("Your answers:\n");
    printf("Q1: %c\tQ2: %c\tQ3: %c\tQ4: %c\n",population, cleanest, silicon_valley, pearl);
    printf("Your score is: %d out of 4\n", score);
    return 0;
}

