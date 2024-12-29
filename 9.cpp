// Q-9
#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    void inputMatrix() {
        cout << "Enter elements of the matrix (2x2):" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    
    Matrix add(Matrix B) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.mat[i][j] = mat[i][j] + B.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    Matrix A, B;

    cout << "Matrix A:" << endl;
    A.inputMatrix();

    cout << "Matrix B:" << endl;
    B.inputMatrix();

   
    Matrix result = A.add(B);

    
    cout << "Matrix Addition Result:" << endl;
    result.displayMatrix();

   
}