#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int found = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        for(int j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        printf("No repeating characters\n");
    return 0;
}
