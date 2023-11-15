#include<iostream>
using namespace std;

class Matrix{
	int rows,col;
	int mat[100][100];
public:
	Matrix(int r,int c,int m[100][100]	){
		rows = r;
		col = c;
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				mat[i][j] = m[i][j];
			}
		}
	}

	Matrix operator+(Matrix m){
		int res_mat[100][100];
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				res_mat[i][j] = mat[i][j] + m.mat[i][j];
			}
		}
		return Matrix(rows,col,res_mat);
	}

	void display_matrix(){
		cout << "Matrix: " << endl;
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main(){
	int mat1[100][100];
	int mat2[100][100];
	int rows1,rows2,col1,col2;
	cin >> rows1 >> col1 ;
	for(int i=0;i<rows1;i++){
		for(int j=0;j<col1;j++){
			cin >> mat1[i][j];
		}
	}
	Matrix m1(rows1,col1,mat1);

	cin >> rows2 >> col2 ;
	for(int i=0;i<rows2;i++){
		for(int j=0;j<col2;j++){
			cin >> mat2[i][j];
		}
	}
	Matrix m2(rows2,col2,mat2);

	Matrix ans = m1 + m2;
	ans.display_matrix();
	return 0;
}