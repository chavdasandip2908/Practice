#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

// Function to calculate the area of a triangle 
double calculate_area(triangle tr) {
    double p = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}

// Comparison function for sorting by area
int compare(const void* a, const void* b) {
    triangle* t1 = (triangle*)a;
    triangle* t2 = (triangle*)b;
    double area1 = calculate_area(*t1);
    double area2 = calculate_area(*t2);
    return (area1 > area2) - (area1 < area2);  // Returns -1, 0, or 1 for sorting
}

void sort_by_area(triangle* tr, int n) {
	qsort(tr, n, sizeof(triangle), compare);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}