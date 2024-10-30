#include<stdio.h>

void air_display()
{
    printf("Displaying air timings...\n");
}

void bus_display()
{
    printf("Displaying bus service...\n");
}

void train_display() 
{
    printf("Displaying train timings...\n");
}

void main() 
{
    char character;
    
    printf("TRAVEL GUIDE\n\n");
    printf("A Air Timings\n");
    printf("T Train Timings\n");
    printf("B Bus Service\n");
    printf("X to skip\n");
    printf("\nEnter your choice\n");
    
    character = getchar();  
    switch (character) 
    {
        case 'A':
            air_display();
            break;
        case 'B':
            bus_display();
            break;
        case 'T':
            train_display();
            break;
        default:
            printf("No valid choice\n");
    }
}
