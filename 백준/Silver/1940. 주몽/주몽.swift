import Foundation

let N = Int(readLine()!)! // 재료의 개수
let M = Int(readLine()!)! // 갑옷을 만드는데 필요한 수
let arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted() // 재료 고유번호 배열. 오름차순 정렬

var start = 0 // 왼쪽 인덱스
var end = arr.count - 1 // 오른쪽 인덱스
var result = 0 // 결과값

while start < end {
    if arr[start] + arr[end] == M {
        result += 1
        start += 1
        end -= 1
    } else {
        (arr[start] + arr[end] > M) ? (end -= 1) : (start += 1)
    }
}

print(result)