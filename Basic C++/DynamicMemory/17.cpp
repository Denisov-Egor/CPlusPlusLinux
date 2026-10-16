#include <iostream>

using namespace std;

int main()
{
  int rows, cols;

  cin >> rows >> cols;

  int** matrix = new int*[rows];

  for (int i = 0; i < rows; i++)
  {
    matrix[i] = new int[cols];
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> matrix[i][j];
    }
  }

  int** transposed = new int*[cols];

  for (int i = 0; i < cols; i++)
  {
    transposed[i] = new int[rows];
  }

  for (int j = 0; j < cols; j++)
  {
    for (int i = 0; i < rows; i++)
    {
      transposed[j][i] = matrix[i][j];
    }
  }

  for (int j = 0; j < cols; j++)
  {
    for (int i = 0; i < rows; i++)
    {
      cout << transposed[j][i] << ' ';
    }
    cout << '\n';
  }

  for (int i = 0; i < rows; i++)
  {
    delete [] matrix[i];
  }
  
  delete [] matrix;
  matrix = nullptr;
  
  for (int i = 0; i < cols; i++)
  {
    delete [] transposed[i];
  }
  
  delete [] transposed;
  transposed = nullptr;
}