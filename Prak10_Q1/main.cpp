#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstring>
#include <math.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
//function definitions
int ReadFile(int *, int *);

int main()
{
    char number[10];
    FILE *file = fopen("data.txt", "r");
    fscanf(file, "%s %s \n", number);
    fclose(file);
    cout << number << endl;



}


int ReadFile(int *, int *){
    int number;




}
