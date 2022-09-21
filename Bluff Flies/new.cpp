#include <iostream>
using namespace std;

void Array1(int A[], int n)
{
   int max = 0, min = A[0];
   for (int i = 0; i < n; i++)
   {
      if (A[i] > max)
      {
         max = A[i];
      }
      if (A[i] < min)
      {
         min = A[i];
      }
   }
   cout << "Max is: " << max << " and Min is: " << min << endl;
}


void Array2(int m, int n, int *B)
{
   int max = INT_MIN;
   int min = INT_MAX;
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (*B > max)
         {
            max = *B;
         }
         if (*B < min)
         {
            min = *B;
         }
      }
   }
   cout << "Max is: " << max << " and Min is: " << min << endl;
}



int main()
{
   int a, m, n, A[a];

   cout << "Enter size of A and B: ";
   cin >> a >> m >> n;

   int B[m][n];

   cout << "Enter elements of A" << endl;
   for (int i = 0; i < a; i++)
   {
      cin >> A[i];
   }

   cout << "Enter elements of B" << endl;
   
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> B[i][j];
      }
      cout << endl;
   }

   Array1(A, a);
   Array2(m, n, &B[0][0]);

   return 0;
}