 🧠  More Direct Way to Rotate by 180°: You can just swap elements  diagonally opposite in one go:
```
void rotateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            swap(mat[i][j], mat[n - i - 1][n - j - 1]);
        }
    }

    // If n is odd, handle the middle row
    if (n % 2 != 0) {
        int mid = n / 2;
        for (int j = 0; j < n / 2; ++j) {
            swap(mat[mid][j], mat[mid][n - j - 1]);
        }
    }
}
```