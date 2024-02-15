// Saves names and numbers to a CSV file

#include <cs50.h>

#include <stdio.h>

#include <stdio.h>

int main (void)
{
    FILE *file = fopen("phonebook.csv", "a");

    string name = get_string("Name:");
    string number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number); //  fprintf( ->file you want to write to, "what you want to input", where you want to keep the input);

    fclose(file);
}