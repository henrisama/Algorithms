/* 
  Longest Common Subsequence
*/
#include <string>
#define MAX 100

using namespace std;

int max(int a, int b){
  return (a > b)? a : b;
}

int LCS(const char* S1, const char* S2, int m, int n){
  int lcs[MAX][MAX];
  m++; n++;

  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      if(i == 0 || j == 0)
        lcs[i][j] = 0;
      else if(S1[i - 1] == S2[j -1])
        lcs[i][j] = lcs[i-1][j-1] + 1;
      else
        lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
    }
  }

  return lcs[m-1][n-1];
}
// complexity O(m.n)