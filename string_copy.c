#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[80], str2[80];
    int size1,size2, i,j;
    printf ("Give the first string: ");
    scanf ("%s", str1);
    printf ("Give the second string: ");
    scanf ("%s", str2);

    size1= strlen(str1);
    size2= strlen(str2);

    for (j=0; j<size2; j++){
        for (i=0; i<size1; i++){
             if (str2[j]==str1[i])
                 str1[i]=' ';
        }
    }

    printf("%s\n", str1);

    system("pause");

}
