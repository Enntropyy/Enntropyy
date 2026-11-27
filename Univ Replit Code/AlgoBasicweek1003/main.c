#include <stdio.h>
#define SIZE 6

typedef struct {
	int up;
	int dist;
}c;

void dijkstra_find(c* n, int h[][SIZE], int* dist);
int min_find(int* p, int* dist);

int main() {
	int h[][SIZE] = {
	{0, 2, 5, 1, 0, 0},
	{2, 0, 3, 2, 0, 0},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, 0},
	{0, 0, 1, 1, 0, 2},
	{0, 0, 5, 0, 2, 0},
};

	c n[SIZE];
	
	int dist[SIZE] = {0,};		
	
	dijkstra_find(n, h, dist);	

	printf("\n");

	for (int i = 0; i < SIZE; i++)
		printf("%d번 - 상위노드 : %d 최종 비용 : %d\n", i+1, n[i].up+1, n[i].dist);
	printf("\n");
}

void dijkstra_find(c* n, int h[][SIZE], int* dist) {
	int p[SIZE] = {1, 0};
	for (int i = 0; i < SIZE; i++)	{
		dist[i] = h[0][i];
		n[i].up = 0;
		n[i].dist = dist[i];
	}

	int i;
	while ((i = min_find(p, dist)) != -1)
	{
		p[i] = 1;
		for (int j = 1; j < SIZE; j++)
		{

			if (h[i][j] != 0 && (dist[i] + h[i][j] < dist[j] || dist[j] == 0))
			{
				dist[j] = dist[i] + h[i][j];
				n[j].up = i;
				n[j].dist = dist[j];
			}
		}
	}
}

int min_find(int* p, int* dist)
{
	int min = 999999;
	int j = -1;
	for (int i = 1; i < SIZE; i++)
		if (dist[i] != 0 && dist[i] < min && p[i] == 0)
		{
			min = dist[i];
			j = i;
		}
	if (j == -1)
		return -1;
	else
		return j;
}