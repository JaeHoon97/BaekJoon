import Foundation

// 빠른 입력 처리 함수
func readIntArray() -> [Int] {
    return readLine()!.split(separator: " ").map { Int($0)! }
}

let input = readIntArray()
let N = input[0]
let M = input[1]

var arr = Array(repeating: Array(repeating: 0, count: N + 1), count: N + 1)

for i in 1...N {
    let input = readIntArray()
    for j in 1...N {
        arr[i][j] = input[j-1]
    }
}

// 구간 합 배열 (Prefix Sum)
var psum = Array(repeating: Array(repeating: 0, count: N + 1), count: N + 1)

for i in 1...N {
    for j in 1...N {
        psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + arr[i][j]
    }
}

// 빠른 입력 처리로 M개의 쿼리 처리
for _ in 0..<M {
    let query = readIntArray()
    let x1 = query[0], y1 = query[1], x2 = query[2], y2 = query[3]
    let result = psum[x2][y2] - psum[x1 - 1][y2] - psum[x2][y1 - 1] + psum[x1 - 1][y1 - 1]
    print(result)
}
