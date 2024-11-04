#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int **matrix1, **matrix2, **result;

    // 행과 열 크기 입력 받기
    printf("행렬의 행(row)과 열(column) 크기를 입력하세요: ");
    scanf("%d %d", &rows, &cols);

    // 첫 번째 행렬 메모리 할당
    matrix1 = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
    }

    // 두 번째 행렬 메모리 할당
    matrix2 = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix2[i] = (int *)malloc(cols * sizeof(int));
    }

    // 결과 행렬 메모리 할당
    result = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        result[i] = (int *)malloc(cols * sizeof(int));
    }

    // 첫 번째 행렬 입력
    printf("첫 번째 행렬의 요소를 입력하세요:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 두 번째 행렬 입력
    printf("두 번째 행렬의 요소를 입력하세요:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 행렬 덧셈
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 결과 출력
    printf("두 행렬의 합은 다음과 같습니다:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
