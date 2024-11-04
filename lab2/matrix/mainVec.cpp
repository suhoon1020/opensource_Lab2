#include <iostream>
#include <vector>

int main() {
    int rows, cols;

    // 행과 열 크기 입력 받기
    std::cout << "행렬의 행(row)과 열(column) 크기를 입력하세요: ";
    std::cin >> rows >> cols;

    // 행렬 선언 (2D 벡터)
    std::vector<std::vector<int>> matrix1(rows, std::vector<int>(cols));
    std::vector<std::vector<int>> matrix2(rows, std::vector<int>(cols));
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    // 첫 번째 행렬 입력
    std::cout << "첫 번째 행렬의 요소를 입력하세요:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    // 두 번째 행렬 입력
    std::cout << "두 번째 행렬의 요소를 입력하세요:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    // 행렬 덧셈
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 결과 출력
    std::cout << "두 행렬의 합은 다음과 같습니다:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
