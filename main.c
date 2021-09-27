// Created by victor on 20/09/2021.
#include <stdio.h>



int exercie1 (){
    int nombre1 = 0, nombre2 = 0;
    printf("Saisir deux entiers");
    scanf("%d", &nombre1);
    scanf("%d", &nombre2);
    if nombre1 < nombre2
    printf("%d", nombre2);
    else
    printf("%d", nombre1);
    return 0;
}


int exercice2 (){
    int longueur = 0, largeur = 0;
    printf("Saisir la longueur");
    scanf("%d", &longueur);
    printf("Saisir la largueur");
    scanf("%d", &largeur);
    int res1 = largeur*2+longueur*2;
    int res2 = largeur*longueur;
    printf("Le périmètre du rectangle est %d", res1);
    printf("L'aire du rectangle est %d", res2);
    return 0;
}


int exercice3() {
    const int constante = 3;
    int nombre = 0;
    printf("Saisir un nombre");
    scanf("%d", &nombre);
    if constante % nombre = 0
    {
        printf("L'entier est un multiple de 3");
    }
    else
    {
        printf("L'entier n'est pas un multiple de 3");
    }
    if (nombre >= 10)
    {
        printf("L'entier est supérieur ou égal à 10");
    }
    else
    {
        printf("L'entier est strictement inférieur à 10");
    }
    return 0;
}


int exercice4 (){
    int age = 0,etudiant = 0;
    printf("Saisir votre age");
    scanf("%d", &age);
    printf("Saisir 1 si vous etes étudiant de moins de 27 ans ?");
    scanf("%d", &etudiant);
    if etudiant=1
    {
        printf("6 euros");
    }
    if age<=12
    {
        printf("4 euros");
    }
    if (age>13) && (age<=17)
    {
        printf("6 euros");
    }
    if age>=65
    {
        printf("6 euros");
    }
    else
    {
        printf("9 euros");
    }
    return 0;
}


int exercice5 (){
    int numeroBoisson = 0;
    printf("Saisir le numéro de votre boisson");
    scanf("%d", &numeroBoisson);
    if numeroBoisson=1
    {
        printf("Coca Cola");
    }
    if numeroBoisson=2
    {
        printf("Ice Tea");
    }
    if numeroBoisson=3
    {
        printf("Orangina");
    }
    if numeroBoisson=10
    {
        printf("Café");
    }
    if numeroBoisson=11
    {
        printf("Thé");
    }
    else
    {
        printf("Erreur")
    }
    return 0;
}


int exercice6 (){
    float note1=0, note2=0, note3=0, note=0;
    note=note1*note2*note3
    printf("Saisir la 1e note: \n>");
    scanf("%d, &note1");
    printf("Saisir la 2e note: \n>");
    scanf("%d, &note2");
    printf("Saisir la 3e note: \n>");
    scanf("%d, &note3");
    if (note1>20)||(note2>20)||(note3>20)
    {
        printf("Erreur")
    }
    else
    {
        printf("La moyenne est: %d\n", note/3)
    }
    return 0;
}


int exercice7 (){
    int nombreClasses=0, nombreEleves=0, nombreTotal=0;
    printf("Saisir nombre de classes")
    scanf("%d", &nombreClasses);
    for (int i=1, i<=nombreClasses, i++)
        printf("Saisir nombre d'élève dans cette classe", i);
        scanf("%d", &nombreTotal)

    printf("Le nombre total d'élève est %d")
    return 0;
}


int exercice8 (){
    int nombre = 0;
    printf("Saisir le nombre à vérifier")
    scanf("%d", &nombre);
    while (nombre % 2 != 0 || nombre % 7 != 0);
    printf("Saisir un autre nombre");
    scanf("%d, &n");
    printf("Le nombre %d est correct")
    return 0;
}


int exercice9 (){

}




int exercice10 (){

}




