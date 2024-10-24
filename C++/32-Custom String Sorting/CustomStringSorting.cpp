#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b); // Return the comparison result from strcmp
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a); // Reverse the order by swapping 'a' and 'b'
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int distinct_a = count_distinct_characters(a);
    int distinct_b = count_distinct_characters(b);

    if (distinct_a == distinct_b) {
        // If both strings have the same number of distinct characters, sort lexicographically
        return strcmp(a, b);
    }

    return distinct_a - distinct_b; // Sort based on distinct character count

}

int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a == len_b) {
        // If both strings have the same length, sort lexicographically
        return strcmp(a, b);
    }

    return len_a - len_b; // Sort by length
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    // Implement bubble sort (or any sorting algorithm) using the comparison function
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                // Swap strings if they are in the wrong order
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int count_distinct_characters(const char* str) {
    int count[26] = {0};
    int distinct_count = 0;
    while (*str) {
        if (count[*str - 'a'] == 0) {
            distinct_count++;
        }
        count[*str - 'a']++;
        str++;
    }
    return distinct_count;
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}