#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Toggled string: %s\n", str);
    return 0;
}
