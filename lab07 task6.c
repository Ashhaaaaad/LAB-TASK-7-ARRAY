#include <stdio.h>

int main() {
    char word[100],c;
    int vowel_count = 0, consonant_count = 0, i = 0; 
    printf("Enter a single word(max 99 characters): ");
    scanf("%99s", word); 
    while (word[i] != '\0') {
        c=word[i];
        if ((c>='a' && c<='z') || (c>='A' && c<='Z')) {
            
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
                
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
        i++;
    }
    printf("\n=== Analysis Results ===\n");
    printf("Word: %s\n", word);
    printf("Vowels: %d\n", vowel_count);
    printf("Consonants: %d\n", consonant_count);
    return 0;
}
