//
//  main.h
//  AlgorithmLab
//
//  Created by Alec Linyard on 10/24/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#ifndef main_h
#define main_h

#define LIST 6
#define SEARCH_BUFFER_SIZE 512

typedef enum {JIT, JVM, ByteCode, Native} EXE_TYPE;
typedef enum {OOP, MP, Iterative, IL, YARV} LANG_TYPE;

typedef struct language
    {
        char name[100];
        char birthdate[10];
        EXE_TYPE exetype;
        LANG_TYPE langtype;
    }LANGUAGES;
#endif /* main_h */
