#include <stdio.h>

void morning();
void afternoon();
void night();

int main(){

    // morning();
    // afternoon();
    // night();

     morning();

return 0;

}

// Way 1
// void morning(){printf("Good Morining\n");}
// void afternoon(){printf("Good Afternoon\n");}
// void night(){printf("Good Night\n");}



// Way 2
void morning(){
    printf("Good Morining\n");
    afternoon();
    }

void afternoon(){
    printf("Good Afternoon\n");
    night();
    }

void night(){printf("Good Night\n");}