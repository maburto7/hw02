// complete the function definitions
#include <fstream>
#include <iostream>
#include "../include/matrix.h"

using namespace std;
void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2){
    string line;
    ifstream inFile;

    inFile.open(filename);
    inFile >> n1 >> m1; // reads things seperated by whitespace, getline reads the whole line

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            inFile >> A[i][j]; //arrays pass a pointer, that's why reference is not needed
        }
    }

    inFile >> n2 >> m2;

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            inFile >> B[i][j];
        }
    }

    inFile.close();
}

void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
  for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            res[i][j] = A[i][j]+ B[i][j];
        }
    }
}


void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
  for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            res[i][j] = A[i][j] - B[i][j];
        }
    }
}

void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
  //ask about which one will be the one in common between n1,m1  and n2, m2
  // n1 = m 
  // m2 = t
  // m1 = k?
  for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            res[i][j] = 0; //"Function must be initialized to zero prior to the function call."
        }
    }

  for (int i = 0; i < n1; i++) { 
        for (int j = 0; j < m2; j++) {
          
          for (int k = 0; k < m1; k++){ //this is the number in common from the example
            res[i][j] += A[i][k] * B[k][j];}
        }
    }

  
}

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]){
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[i][j] = M[j][i] ;
        }
    }


}

double matrixDeterminant3D(int M[3][3]){
  int res1, res2, res3;
  res1 = (M[1][1] * M[2][2] - M[1][2] * M[2][1]);
  res2 = (M[1][0] * M[2][2] - M[1][2] * M[2][0]);
  res3 = (M[1][0] * M[2][1] - M[1][1] * M[2][0]);
  return (M[0][0] * res1) - (M[0][1] * res2) + (M[0][2] * res3);
}

void print2DMatrix(const int M[][AR_CAP], int n1, int m1){
  for (int i=0;i<n1;i++){
    for (int j=0; j<m1; j++){
      cout << M[i][j] << ' ';
    }
    cout <<endl;
  }
}

