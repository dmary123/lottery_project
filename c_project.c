#include <stdio.h>

int main()
{
    int user_input_number[6];
    int lucky_number[6] = {6, 4, 8, 9, 3, 6};
    int lottery_count = 0;
    const int total_number = 30; 

    int x;
    printf("Input your amount: ");
    scanf("%d", &x);

    printf("Your %d has successfully been uploaded. Please kindly proceed.\n", x);
    printf("press 1 to place your bet:\t"); int option;
    scanf("%d",&option);
    while (option == 1){
       int balance =  x-100;
        printf("your current balance is %d\n",balance); 
        break;
        
        }
        while(x<300){
            printf("insuffient fund, kindly top up\n");
            break;
        }
    // }elseif (option == 2){
    //     printf("invaid input");
    // }else{
    //     printf("insuffient fund, kindly top up");
    // }
    printf("Please enter your numbers (6 different numbers between 1 and 30):\n");

    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &user_input_number[i]);
    }

    printf("Your numbers are: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", user_input_number[i]);
    }
    printf("\n");

   
    int random_lucky_number[6];
    for (int i = 0; i < 6; i++) {
        random_lucky_number[i] = rand() % total_number + 1;
    }

    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (user_input_number[i] == lucky_number[j]) {
                lottery_count++;
                break;
            }
        }
    }

    printf("You have matched %d numbers in the lottery!\n", lottery_count);


    return 0;
}