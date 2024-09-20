import Foundation

// 입력
let input = readLine()!.split(separator: " ").map { Int($0)! }
// 수 N개
let N = input[0]
// 각 수를 M으로 나누기
let M = input[1]
// N개의 정수 배열

var arr = readLine()!.split(separator: " ").map { Int($0)! }
arr.insert(0, at: 0)

// 구간 합 prefix Sum
var pSum: [Int] = Array(repeating: 0, count: N+1)
// 구간 합 구하기
for i in 1...N { pSum[i] = pSum[i-1] + arr[i] }

// 구간 합을 M으로 나눈 배열
var rArr: [Int] = Array(repeating: 0, count: M)
// pSum의 각 원소를 M으로 나눈 값을 rArr에 추가
pSum.forEach { rArr[$0 % M] += 1 }

// 최종 결과
var result = 0

for i in 0..<rArr.count {
    if rArr[i] == 0 { continue }
    result += (rArr[i] * (rArr[i] - 1) / 2)
}

print(result)