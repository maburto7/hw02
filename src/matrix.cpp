// complete the function definitions
#include <matrix.h>

void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2);

void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]);

void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]);

void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]);

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]); 

double matrixDeterminant3D(int M[3][3]);

void print2DMatrix(const int M[][AR_CAP], int n1, int m1);


