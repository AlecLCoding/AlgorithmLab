//
//  main.c
//  AlgorithmLab
//
//  Created by Alec Linyard on 10/24/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#include <stdio.h>


struct languages
{
    char name[100];
    char birthdate[100];
    char executiontype[100];
    char languagetype[100];
};

struct languages MyLanguages =
    {
        {"Python", "1989", "Jit Interpreted", "MP"},
        {"JavaScript", "1995", "Jit Interpreted", "MP"},
        {"Java", "1990", "JVM Bytecode", "OOP"},
        {"Kotlin", "2016", "JVM Bytecode", "MP"},
        {"Swift", "2014", "Native code", "OOP"},
        {"Objective C", "1980", "Native code","OOP"},
        {"C++", "1979", "Native code","OOP"},
        {"C", "1972", "Native code", "Iterative"},
        {"C#", "2000", "IL Bytecode","MP"},
        {"Ruby", "1990", "YARV Bytecode","OOP"},
    };
