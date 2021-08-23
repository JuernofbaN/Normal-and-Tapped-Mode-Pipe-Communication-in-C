//
// Created by turanmertduran on 27.02.2021.
//
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){
    int M = atoi(argv[1]);
    int index;
    char str;
    char* charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(M > 0){
        M--;
        index = rand() % 60;
        str = charset[index];
        printf("%c", str);
    }
}