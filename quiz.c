#include <stdio.h>

int main() {
    int reponse, score = 0;

    printf("=====================================\n");
    printf("       QUIZ LANGAGE C - 10 QUESTIONS\n");
    printf("=====================================\n\n");

    // Fanontaniana 1
    printf("1. Quelle fonction permet d'afficher un texte en C ?\n");
    printf("1. scanf()\n2. printf()\n3. print()\n4. echo()\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 2) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 2.\n\n");

    // Fanontaniana 2
    printf("2. Quel type permet de stocker un entier ?\n");
    printf("1. float\n2. char\n3. int\n4. double\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 3) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 3.\n\n");

    // Fanontaniana 3
    printf("3. Quelle est la fonction principale d'un programme C ?\n");
    printf("1. start()\n2. main()\n3. begin()\n4. run()\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 2) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 2.\n\n");

    // Fanontaniana 4
    printf("4. Quel symbole termine une instruction en C ?\n");
    printf("1. :\n2. ;\n3. .\n4. ,\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 2) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 2.\n\n");

    // Fanontaniana 5
    printf("5. Quel operateur permet de faire une addition ?\n");
    printf("1. -\n2. *\n3. /\n4. +\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 4) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 4.\n\n");

    // Fanontaniana 6
    printf("6. Quelle bibliotheque contient printf() ?\n");
    printf("1. stdlib.h\n2. math.h\n3. stdio.h\n4. string.h\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 3) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 3.\n\n");

    // Fanontaniana 7
    printf("7. Quel type permet de stocker un caractere ?\n");
    printf("1. char\n2. int\n3. float\n4. double\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 1) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 1.\n\n");

    // Fanontaniana 8
    printf("8. Quel operateur compare deux valeurs ?\n");
    printf("1. =\n2. ==\n3. +=\n4. ++\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 2) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 2.\n\n");

    // Fanontaniana 9
    printf("9. Quelle boucle est utilisee pour les repetitions ?\n");
    printf("1. if\n2. switch\n3. for\n4. case\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 3) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 3.\n\n");

    // Fanontaniana 10
    printf("10. Quelle instruction permet de sortir d'une boucle ?\n");
    printf("1. stop\n2. exit\n3. break\n4. end\nVotre reponse : ");
    scanf("%d", &reponse);
    if (reponse == 3) { score++; printf("Correct !\n\n"); }
    else printf("Faux ! La bonne reponse est 3.\n\n");

    // Vokatra farany
    printf("=====================================\n");
    printf("          RESULTAT FINAL\n");
    printf("=====================================\n");
    printf("Score : %d / 10\n", score);

    if (score >= 8)
        printf("Excellent !\n");
    else if (score >= 5)
        printf("Bien joue !\n");
    else
        printf("Il faut encore pratiquer !\n");

    return 0;
}
