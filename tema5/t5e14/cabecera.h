#define MAX 100
struct matriz{
	int M[MAX][MAX];
	int fil, col;
};
void leerMatriz(struct matriz m1);
struct matriz llenarMatriz(struct matriz m1);
void sumatorioDiagonal(struct matriz m1);