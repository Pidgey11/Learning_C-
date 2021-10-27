#include <stdio.h>
#include <string.h>

void temp() {
    printf("Please insert temp in 'F : ");
    float temp_f;
    scanf_s("%f", &temp_f);
    float temp_c = (temp_f - 32.0) * 5.0 / 9.0;
    printf("Temperatura w C = %.2f \n", temp_c);
}

void nauka_string() {
    char name[20] = "Mateusz";
    char name2[100];
    strcpy_s(name2, sizeof(name2), name);
    printf("Imie nr 2 = %s \n", name2);
    strcat_s(name2, sizeof(name2), " lat");
    printf("Nr 2 po zmianie: %s \n", name2);


}

void nauka_string2() {
    printf("What is your name: ");
    char name[40] = "Mateusz \n";
    char message[100];
    strcpy_s(message, sizeof(message), name);
    strcat_s(message, sizeof(message), "is ");
    strcat_s(message, sizeof(message), "learning C :) ");
    printf("%s", message);

    /*there is some bug in this function,
    *will come back to this with internet    up
     */
}

void learning_if() {
    char password[20];
    printf("Please enter a password: ");
    scanf_s("%19s", password);
    
    if (strcmp(password, "Pluralsight") == 0) { // strcmp zwracam zero gdy są te same 
        printf("Correct password");
    }
    else {
        printf("Wrong password");
    }
    /* again looks like some bugs hidden here
     *but no internet to check them
     */
}

void learning_if2() {
    printf("Prosze podac numer: ");
    int number1;
    scanf_s("%d", &number1);

    printf("Prosze podac nowy numer:");
    int number2;
    scanf_s ("%d", &number2);
    if (number1 > number2) {
        printf("Number 1 > number 2 \n");
    }
    else if (number2 > number1) {
        printf("Number 2 > number 1 \n");
    }
    else {
        printf("Sa równe \n");
    }
}

void learning_switch() {
    int number;
    printf("Please write a number: ");
    scanf_s("%d", &number);
    switch (number) {
    case 1:
        printf("you entered one \n");
        break;
    case 10:
        printf("You entered 10 \n");
        break;
    case 64:
        printf("You entered 64 :) \n");
        break;
    default:
        printf("You entered different number :> \n");
        break;
    }
}

void learning_ternary() {
    int MaxNumber;
    int number1;
    int number2;
    MaxNumber = (number1 > number2) ?
        number1 : number2;
    /*przyklad instr warunkowej w której dla true 
     * przypisujemy pierwsza opcje a dla false
     *druga
     */
    // i tym miłym akcentem kończymy na dzisiaj 24.10
}

int main(void)
{
    //temp();
    //nauka_string();
    //nauka_string2();
    //learning_if();
    //learning_if2();
    //learning_switch();
    return 0;
}



// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
