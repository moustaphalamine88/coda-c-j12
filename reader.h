#ifndef HEADER_H
#define HEADER_H


#include <stdlib.h>
#include <stdio.h>


typedef struct s_number pos;

struct s_number {
    int value;
    pos *next;
};



#endif
