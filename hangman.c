#include <stdio.h>
#include <string.h>
int first();
char* hangman1();
char* hangman2();
char* hangman3();
char* hangman4();
char* hangman5();
char* hangman1(){
    return ("  _______\n  |     |\n  |     O\n  |\n  |\n__|__\n");
}
char* hangman2(){
    return ("  _______\n  |     |\n  |     _O_\n  |\n  |\n__|__\n");
}
char* hangman3(){
    return ("  _______\n  |     |\n  |     _O_\n  |      |\n  |\n__|__\n");
}
char* hangman4(){
    return ("  _______\n  |     |\n  |     _O_\n  |      |\n  |     / \n__|__\n");
}
char* hangman5(){
        return ("  _______\n  |     |\n  |     _O_\n  |      |\n  |     / \\\n__|__\n");
}
int first(){
    return 0;
}
int main(){
    int end = 1;
    char fruit[5][20]= {"apple","banana","cherry","orange","strawberry"};
    char question1[20] = "_ _ _ _ _";
    char question2[20] = "_ _ _ _ _ _";
    char question3[20] = "_ _ _ _ _ _";
    char question4[20] = "_ _ _ _ _ _";
    char question5[20] = "_ _ _ _ _ _ _ _ _ _";
    //char hangman1[20] = "  _______\n";
    //char hangman2[20] = "  |     |\n";
    //char hangman3[20] = "  |    _O_\n";
    //char hangman4[20] = "  |     |\n";
    //char hangman5[20] = "  |    / \n";
    //char hangman6[20] = "__|__\n";
    int checkwin1 = 0;
    int checkwin2 = 0;
    int checkwin3 = 0;
    int checkwin4 = 0;
    int checkwin5 = 0;
    char input;
    int checklose = 0;
    int wow = 0;
    int choose;
    printf("*****************************\n");
    printf("*                           *\n");
    printf("*          HANGMAN          *\n");
    printf("*                           *\n");
    printf("*****************************\n");
    printf("  _______\n");
    printf("  |     |\n");
    printf("  |\n");
    printf("  |\n");
    printf("  |\n");
    printf("__|__\n");
    do{
    printf("Press 0 to Exit, Press 1 to Play : ");
    scanf("%d", &end);
    if (end == 0){
        break;
    }
    printf("There are 5 Question!\n");
    printf("Choose Quesetion! : ");
    scanf("%d", &choose);
    if (choose == 1){
    printf("First Question!!\n");
    printf("_ _ _ _ _\n");
    printf("Enter any alphabet : ");
    do{
    scanf(" %c", &input);
    if (strchr(fruit[0], input) != NULL){
      printf("Correct!\n");
      if ((input == 97) || (input == 65)){
          question1[0] = input;
          checkwin1 += 1;
      }
      else if ((input == 80) || (input == 112)){
          question1[2] = input;
          question1[4] = input;
          checkwin1 += 1;
      }
      else if ((input == 76) || (input == 108)){
          question1[6] = input;
          checkwin1 += 1;
      }
      else if ((input == 69) || (input == 101)){
          question1[8] = input;
          checkwin1 += 1;
      }
      printf("%s\n", question1);
    }
    else {
        printf("too bad!\n");
        checklose += 1;
        if (checklose == 1){
            printf(hangman1());
        }
        else if (checklose == 2){
            printf(hangman2());
        }
        else if (checklose == 3){
            printf(hangman3());
        }
        else if (checklose == 4){
            printf(hangman4());
        }
        else if (checklose == 5){
            printf(hangman5());
        }
        //printf("%s %s %s %s %s %s", hangman1, hangman2, hangman3, hangman4, hangman5, hangman6);
    }
    }while((checkwin1 < 4) && (checklose < 5));
    int check = 0;
    if (checkwin1 >= 3){
        printf("\n");
        printf("You win!!\n");
        checklose = 0;
        checkwin1 = 0;
    }
    else if (checklose >= 4){
        printf("You lose\n");
        checklose = 0;
        checkwin1 = 0;
    }

    //2//
    }
    else if (choose == 2){
    printf("Second Question!!\n");
    printf("_ _ _ _ _ _\n");
    printf("Enter any alphabet : ");
    do{
    scanf(" %c", &input);
    if (strchr(fruit[1], input) != NULL){
      printf("Correct!\n");
      if ((input == 98) || (input == 66)){
          question2[0] = input;
          checkwin2 += 1;
      }
      else if ((input == 97) || (input == 65)){
          question2[2] = input;
          question2[6] = input;
          question2[10] = input;
          checkwin2 += 1;
      }
      else if ((input == 110) || (input == 78)){
          question2[4] = input;
          question2[8] = input;
          checkwin2 += 1;
      }
      printf("%s\n", question2);
    }
    else {
        printf("too bad!\n");
        checklose += 1;
        if (checklose == 1){
            printf(hangman1());
        }
        else if (checklose == 2){
            printf(hangman2());
        }
        else if (checklose == 3){
            printf(hangman3());
        }
        else if (checklose == 4){
            printf(hangman4());
        }
        else if (checklose == 5){
            printf(hangman5());
        }
    }
    }while((checkwin2 < 3) && (checklose < 5));
    if (checkwin2 >= 3){
        printf("\n");
        printf("You win!!\n");
        checklose = 0;
        checkwin2 = 0;
    }
    else if (checklose >= 5){
        printf("You lose\n");
        checklose = 0;
        checkwin2 = 0;
    }   
    }

    //3//
    else if (choose == 3){
    printf("Third Question!!\n");
    printf("_ _ _ _ _ _\n");
    printf("Enter any alphabet : ");
    do{
    scanf(" %c", &input);
    if (strchr(fruit[2], input) != NULL){
      printf("Correct!\n");
      if ((input == 99) || (input == 67)){
          question3[0] = input;
         checkwin3 += 1;
      }
      else if ((input == 72) || (input == 104)){
          question3[2] = input;
         checkwin3 += 1;
      }
      else if ((input == 69) || (input == 101)){
          question3[4] = input;
         checkwin3 += 1;
      }
      else if ((input == 82) || (input == 114)){
          question3[6] = input;
          question3[8] = input;
         checkwin3 += 1;
      }
      else if ((input == 89) || (input == 121)){
          question3[10] = input;
         checkwin3 += 1;
      }
      printf("%s\n", question3);
    }
    else {
        printf("too bad!\n");
        checklose += 1;
        if (checklose == 1){
            printf(hangman1());
        }
        else if (checklose == 2){
            printf(hangman2());
        }
        else if (checklose == 3){
            printf(hangman3());
        }
        else if (checklose == 4){
            printf(hangman4());
        }
        else if (checklose == 5){
            printf(hangman5());
        }
    }
    }while((checkwin3 < 5) && (checklose < 5));
    if (checkwin3 >= 5){
        printf("\n");
        printf("You win!!\n");
    }
    else if (checklose >= 4){
        printf("You lose\n");
    }   
    }


        //4//
    else if (choose == 4){
    printf("Fourth Question!!\n");
    printf("_ _ _ _ _ _\n");
    printf("Enter any alphabet : ");
    do{
    scanf(" %c", &input);
    if (strchr(fruit[3], input) != NULL){
      printf("Correct!\n");
      if ((input == 79) || (input == 111)){
          question4[0] = input;
         checkwin4 += 1;
      }
      else if ((input == 114) || (input == 82)){
          question4[2] = input;
         checkwin4 += 1;
      }
      else if ((input == 97) || (input == 65)){
          question4[4] = input;
         checkwin4 += 1;
      }
      else if ((input == 110) || (input == 78)){
          question4[6] = input;
         checkwin4 += 1;
      }
      else if ((input == 71) || (input == 103)){
          question4[8] = input;
         checkwin4 += 1;
      }
      else if ((input == 69) || (input == 101)){
          question4[10] = input;
         checkwin4 += 1;
      }
      printf("%s\n", question4);
    }
    else {
        printf("too bad!\n");
        checklose += 1;
        if (checklose == 1){
            printf(hangman1());
        }
        else if (checklose == 2){
            printf(hangman2());
        }
        else if (checklose == 3){
            printf(hangman3());
        }
        else if (checklose == 4){
            printf(hangman4());
        }
        else if (checklose == 5){
            printf(hangman5());
        }
    }
    }while((checkwin4 < 6) && (checklose < 5));
    if (checkwin4 >= 6){
        printf("\n");
        printf("You win!!\n");
    }
    else if (checklose >= 4){
        printf("You lose\n");
    }   
    }

            //5//
    else if (choose == 5){
    printf("Fifth Question!!\n");
    printf("_ _ _ _ _ _ _ _ _ _\n");
    printf("Enter any alphabet : ");
    do{
    scanf(" %c", &input);
    if (strchr(fruit[4], input) != NULL){
      printf("Correct!\n");
      if ((input == 83) || (input == 115)){
          question5[0] = input;
         checkwin5 += 1;
      }
      else if ((input == 114) || (input == 82)){
          question5[4] = input;
          question5[14] = input;
          question5[16] = input;
         checkwin5 += 1;
      }
      else if ((input == 116) || (input == 84)){
          question5[2] = input;
         checkwin5 += 1;
      }
      else if ((input == 114) || (input == 82)){
          question5[6] = input;
         checkwin5 += 1;
      }
      else if ((input == 97) || (input == 65)){
          question5[6] = input;
         checkwin5 += 1;
      }
      else if ((input == 87) || (input == 119)){
          question5[8] = input;
         checkwin5 += 1;
      }
      else if ((input == 66) || (input == 98)){
          question5[10] = input;
         checkwin5 += 1;
      }
      else if ((input == 69) || (input == 101)){
          question5[12] = input;
         checkwin5 += 1;
      }
      else if ((input == 89) || (input == 121)){
          question5[18] = input;
         checkwin5 += 1;
      }
      printf("%s\n", question5);
    }
    else {
        printf("too bad!\n");
        checklose += 1;
        if (checklose == 1){
            printf(hangman1());
        }
        else if (checklose == 2){
            printf(hangman2());
        }
        else if (checklose == 3){
            printf(hangman3());
        }
        else if (checklose == 4){
            printf(hangman4());
        }
        else if (checklose == 5){
            printf(hangman5());
        }
    }
    }while((checkwin5 < 8) && (checklose < 5));
    if (checkwin5 >= 8){
        printf("\n");
        printf("You win!!\n");
    }
    else if (checklose >= 4){
        printf("You lose\n"); 
    }   
    }
    }while (end != 0);
    return 0;
}
