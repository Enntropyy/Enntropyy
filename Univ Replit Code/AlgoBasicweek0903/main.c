#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int array[SIZE][SIZE] = {0,};
int visit[SIZE] = {0,};
int virus = 0;

void dfs(int start, int node) {

  visit[start] = 1;
  virus++;
  
  for(int i=1; i<=node; i++) {
    if(array[start][i] == 1 && visit[i] == 0) {

      dfs(i, node);
    }
  }
  return;

}

int main() {

  int cnt, node;
  int x, y;
  scanf("%d", &cnt);
  scanf("%d", &node);
  for (int i=0; i<node; i++){
    scanf("%d %d", &x, &y);
    array[x][y]=1;
    array[y][x]=1;
  }

  dfs(1, node);
  printf("%d", virus-1);
}