#include <stdio.h>

void count(char sentence[]) {
    int consonants[26] = {0};
    
    for (int i = 0; sentence[i] != NULL; i++) {
        char ch = tolower(sentence[i]); 
        
    
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            consonants[ch - 'a']++;
        }
    }
    printf("Occurrences of consonants:\n");
    for (int i = 0; i < 26; i++) {
        if (consonants[i] > 0) {
            printf(" %d\n", consonants[i]);
        }
    }
}
int main() {
    char sentence[1000];   
    printf("Enter a sentence: ");
    scanf("%s",&sentence);  
    count(sentence);
}
