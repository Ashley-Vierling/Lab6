//Ashley Vierling
//October 22 2023
//Matrix Manipulation
//lab 06
#include <iostream>
#include <fstream>

const int maxSize = 100;

//prototypes
void readfile(const char* filename, int matrix[maxSize][maxSize],int size);
void printMatrix(const int matrix[maxSize][maxSize],int size);
void add(const int matrixA[maxSize][maxSize], const int matrixB[maxSize][maxSize], int output[maxSize][maxSize], int size);
void multiply(const int matrixA[maxSize][maxSize], const int matrixB[maxSize][maxSize], int output[maxSize][maxSize], int size);
void subtract(const int matrixA[maxSize][maxSize], const int matrixB[maxSize][maxSize], int output[maxSize][maxSize], int size);

int main(){
    int size;
    int matrixA[maxSize][maxSize];
    int matrixB[maxSize][maxSize];
    int output[maxSize][maxSize];

    std::cout << "Ashley Vierling" << std::endl;
    std::count << "Lab #6: Matrix manipulation";

    readfile("matrix_input.txt", matrixA, size);
    readfile("matrix_input.txt", matrixB, size);

    std::cout << "Matrix A" << std::endl;
    printMatrix(matrixA, size);

    std::cout << "Matrix B" << std::endl;
    printMatrix(matrixB, size);

    add(matrixA,matrixB,output,size);
    std::cout<< "Matrix Sum (A + B):" << std::endl;
    printMatrix(output,size);

    multiply(matrixA, matrixB, output, size);
    std::cout<< "Matrix Product (A * B):" << std::endl;
    printMatrix(output,size);

    subtract(matrixA,matrixB,output, size);
    std::cout<< "Matrix Difference (A - B): "<< std::endl;
    printMatrix(output, size);

}
//reads the input file
void readfile(const char* filename, int matrix[maxSize][maxSize],int size){
    std::ifstream file(filename);

    file >> size;

    for(int 1 = 0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            file >> matrix[i][j];
        }
    }
    file.close();
}

//prints the matrix
void printMatrix(const int matrix[maxSize][maxSize],int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size: j++) {

            std::cout << matrx[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


//adds the matrices together
void add(const int matrixA[maxSize][maxSize], const int matrixB[maxSize][maxSize], int output[maxSize][maxSize], int size){
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                output[i][j] = matrixB[i][j] + matrixB[i][j];
            }
        }
    }
}

//multiples the matrices together
void multiply(const int matrixA[maxSize][maxSize], const int matrixB[maxSize][maxSize], int output[maxSize][maxSize], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++) {
            output[i][j] =0;
            for(int k = 0; k < size; k++){
                output[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

//subtracts the matrices
void subtract(const int matrixA[maxSize][maxSize], const int matrixB[maxSize][maxSize], int output[maxSize][maxSize], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            output[i][j] = matrixB[i][j] - matrixA[i][j];
}



