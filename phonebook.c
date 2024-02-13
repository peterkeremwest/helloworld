#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct //defining a struct named person, which can hold info for name and number.
    {
        string name;
        string number;
        //compared to declaring new arrays for every new feature, like names, numbers, eye colors etc, you save energy and time by creating the class yourself and adding it in that same function.
    }
person; 
int main(void)
{

    //From this point on, every function in the program can reach this structure I named 'person'.
    /*
     *
    *
     * 
    *       Class structure 
     * 
    * 
     * 
    */
    person people[2];
    people[0].name = "Carter";
    people[0].number = "+1-209-5593";   
    people[1].name = "David";
    people[1].number = "+1-284-4922";   
    
    /*string names[] = {"Carter", "David"};     //We are creating a phonebook with names and phone numbers designated for those specific people.
    string numbers[] = {"+1-209-5593", "+1-284-4922"};*/
        //The order of these names and numbers could always get mixed up with this flawed design, especially in bigger projects in which you'll be storing hundreds of names/variables matched with a second array/info.
    string name = get_string("Name: ");
    for (int i = 0; i<2; i++) 
    // A note, there's a design flaw in this code, the fact that there's a set number (2) for the members of these arrays can and will make it harder to redesign and change the code in more complicated projects. And the arrays and numbers are attached to each other, but there's always a chance to add a name to the names array and to forget the phone number for it.
    {
        if(strcmp(people[i].name, name) == 0) //we reach the attributes of the struct people by putting a . after their names.  
        //if(strcmp(names[i], name) == 0)
        {
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    //This purposedly flawed design is made as an introduction to class structures, demonstrating why a class structure is needed and how it can come in really handy. 
    printf("Not found \n");
    return 1;
}