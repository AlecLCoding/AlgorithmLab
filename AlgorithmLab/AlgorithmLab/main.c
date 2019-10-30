//
//  main.c
//  AlgorithmLab
//
//  Created by Alec Linyard on 10/24/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "main.h"
#define LIST 10

typedef struct language
{
    char name[100];
    char date[100];
    char exetype[100];
    char langtype[100];
}LANGUAGE;

LANGUAGE progLang[LIST] =
    {
        {"Python", "1989", "JIT", "MP"},
        {"JavaScript", "1995", "JIT", "MP"},
        {"Java", "1990", "JVM", "OOP"},
        {"Kotlin", "2016", "JVM", "MP"},
        {"Swift", "2014", "Native", "OOP"},
        {"Objective C", "1980", "Native","OOP"},
        {"C++", "1979", "Native", "OOP"},
        {"C", "1972", "Native", "Iterative"},
        {"C#", "2000", "IL", "MP"},
        {"Ruby", "1990", "YARV", "OOP"},
    };

int mainarray (void){
    int i;
    for(i=0; i<9; i++)
    {
        printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", progLang[i].name, "Birth Date: ", progLang[i].date, "Execution Type: ",progLang[i].exetype, "Language Type: ",progLang[i].langtype);
      printf("\n");
    }
    return 0;
}

int searcharrayname(void){
    char name[80];
    printf("Enter Language Name: %s", name);
    scanf("%s", name);
    for (int i = 0; i<LIST; i++){
        if(strstr(progLang[i].name , name)!=0)
            {
                printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", progLang[i].name, "Birth Date: ", progLang[i].date, "Execution Type: ",progLang[i].exetype, "Language Type: ",progLang[i].langtype);
              printf("\n");
            }
    }
        return 0;
}

int searcharraydate(void){
    char name[80];
    printf("Enter Language Name: %s", name);
    scanf("%s", name);
    for (int i = 0; i<LIST; i++){
        if(strstr(progLang[i].date , name)!=0)
            {
                printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", progLang[i].name, "Birth Date: ", progLang[i].date, "Execution Type: ",progLang[i].exetype, "Language Type: ",progLang[i].langtype);
              printf("\n");
            }
    }
        return 0;
}

int searcharrayexe(void){
    char name[80];
    printf("Enter Language Name: %s", name);
    scanf("%s", name);
    for (int i = 0; i<LIST; i++){
        if(strstr(progLang[i].exetype , name)!=0)
            {
                printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", progLang[i].name, "Birth Date: ", progLang[i].date, "Execution Type: ",progLang[i].exetype, "Language Type: ",progLang[i].langtype);
              printf("\n");
            }
    }
        return 0;
}

int searcharraylang(void){
    char name[80];
    printf("Enter Language Name: %s", name);
    scanf("%s", name);
    for (int i = 0; i<LIST; i++){
        if(strstr(progLang[i].langtype , name)!=0)
            {
                printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", progLang[i].name, "Birth Date: ", progLang[i].date, "Execution Type: ",progLang[i].exetype, "Language Type: ",progLang[i].langtype);
              printf("\n");
            }
    }
        return 0;
}


int structarray(void)
{
    char input;
    int endOrNo, validInput;
    endOrNo = 0;
    char message[80];
    
    while (endOrNo == 0) {
        validInput = 0;
        printf("--------------------------------------------\n");
        printf("             ~ Menu Selection ~             \n");
        printf("--------------------------------------------\n");
        printf("Options:\n");
        printf("A. Language\n");
        printf("B. Birth Date\n");
        printf("C. Execution Type\n");
        printf("D. Language Type\n");
        printf("E. Print Entire Table\n");
        printf("--------------------------------------------\n");
        printf("Select Option: ");
        while (validInput == 0) {
            scanf("%c", &input);
            switch(input) {
                case 'a':
                case 'A':
                    validInput = 1;
                searcharrayname();
                    break;
                    
                case 'b':
                case 'B':
                    validInput = 2;
                searcharraydate();
                    break;
                    
                case 'c':
                case 'C':
                    validInput = 3;
                searcharrayexe();
                    break;
                    
                case 'd':
                case 'D':
                    validInput = 4;
                searcharraylang();
                    break;
                    
                case 'e':
                case 'E':
                    validInput = 7;
                    mainarray();
                    break;
                    
                case 0:
                    validInput = 99;
                    endOrNo = 1;
                    break;
                    
            }
        }
    }
    return 0;
}



/*
int progLanguage(char *message)
{
    int found = -1;
    
    // These are working buffers to enable searching and displaying data
    char displayArray[LIST][SEARCH_BUFFER_SIZE];  // 2D arrays
    char exeArray[LIST][SEARCH_BUFFER_SIZE];
    char langArray[LIST][SEARCH_BUFFER_SIZE];
    char searchArray[LIST][SEARCH_BUFFER_SIZE];
    char searchTerm[SEARCH_BUFFER_SIZE];
    
    // This 1st loop makes it easy to see what to search,
    //      struct is transformed to single line to make it easier to search
    printf("List of Programming Languages:\n");
    printf("ID \tName \t\t\tCreator \t\tYear\n");
    for (int i =0; i < LIST; i++) {
        // p1 is pointer short cut to make references below easier to look at
        LANGUAGE *pl = &progLang[i];
        // formating data to string(s) to allow for it to be used again in function
        sprintf(displayArray[i], "%d: \t%-10s \t\t%-15s \t%s", i, pl->name, pl->birthdate );
        sprintf(exeArray[i], "\t%s", exeString[pl->exetype]);
        sprintf(langArray[i], "\t%s", langString[pl->langtype]);
        sprintf(searchArray[i], "%s %s %s",displayArray[i], exeArray[i], langArray[i] );
        printf("%s\n", displayArray[i]);
        printf("%s\n", exeArray[i]);
        printf("%s\n\n", langArray[i]);
    }
    
    // Get inpupt from user to search
    printf("Enter filter:\n");
    scanf("%s", searchTerm);
    
    // This 2nd loop only prints lines that have a search term hit
    for (int i=0; i < LIST; i++) {
        char* p;
        p = strstr(searchArray[i], searchTerm);  // p points to address where term is found
        if (p) {
            // match dispalys data for matching language
            printf("%s\n", displayArray[i]);
            printf("%s\n", exeArray[i]);
            printf("%s\n", langArray[i]);
            
            // sending feedback message to driver that called this function
            LANGUAGE *pl = &progLang[i];
            if (found > 0) {
                sprintf(message,"%s %s", message, pl->name);
                found++;
            } else {
                sprintf(message,"%s", pl->name);
                found = 1;
            }
        }
    }
    return found;
}
*/
