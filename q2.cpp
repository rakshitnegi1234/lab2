#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

void countWordFrequency(char paragraph[]) {
  
    char words[MAX_LENGTH][MAX_LENGTH];
    int frequency[MAX_LENGTH];
    int wordCount = 0;
    
  
    char* token = strtok(paragraph, " ");
    while (token != NULL) {
        strcpy(words[wordCount], token);
        frequency[wordCount] = 1;
        wordCount++;
        token = strtok(NULL, " ");
    }
    
   
    for (int i = 0; i < wordCount; ++i) {
        for (int j = i + 1; j < wordCount; ++j) {
            if (strcmp(words[i], words[j]) == 0) {
                frequency[i]++;
                
               
                frequency[j] = 0;
            }
        }
    }
    
   
    printf("Word frequencies:\n");
    for (int i = 0; i < wordCount; ++i) {
        if (frequency[i] != 0) {
            printf("%s : %d\n", words[i], frequency[i]);
        }
    }
}

int main() {
    char paragraph[MAX_LENGTH];
    
    
    printf("Enter a paragraph:\n");
    fgets(paragraph, MAX_LENGTH, stdin);
    
    
    paragraph[strcspn(paragraph, "\n")] = '\0';
    
  
    countWordFrequency(paragraph);
    
    return 0;
}
