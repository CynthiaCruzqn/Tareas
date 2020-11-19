#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 

void to_upper_word(char *dest, char *src, int lenght){
    for(int i = 0; i < lenght; i++){
        dest[i] = toupper((int) src[i]);
    }
}

 

int get_word_length(char *word){
    int lenght = 0;
    while(word[lenght]){
        lenght++;
    }
    return lenght;
}

 

int main(int argc, char **argv)
{
    if(argc>1){
        const int word_length = get_word_length(argv[1]);
        char* mychar;
        mychar = (char *) malloc(sizeof(char*) * word_length);
        to_upper_word(mychar, argv[1], word_length);
        printf("%s \n", mychar);
        free(mychar);
    }

 

    return(0);
 }
