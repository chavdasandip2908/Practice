#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two strings (for sorting)
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to swap two elements in an array
void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse elements in the array from start to end
void reverse(char **s, int start, int end) {
    while (start < end) {
        swap(&s[start], &s[end]);
        start++;
        end--;
    }
}

int next_permutation(int n, char **s)
{
	int i = n - 2;

    // Step 1: Find the first decreasing element from the end
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0) {
        i--;
    }

    if (i < 0) {
        return 0;  // No more permutations
    }

    // Step 2: Find the smallest element larger than s[i] to the right
    int j = n - 1;
    while (strcmp(s[i], s[j]) >= 0) {
        j--;
    }

    // Step 3: Swap s[i] with s[j]
    swap(&s[i], &s[j]);

    // Step 4: Reverse the elements to the right of i
    reverse(s, i + 1, n - 1);

    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}