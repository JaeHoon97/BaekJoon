import Foundation

let input = readLine()!.components(separatedBy: " ").map { Int($0)! }
let N = input[0]
let M = input[1]

var arr = readLine()!.components(separatedBy: " ").map { Int($0)! }
arr.insert(0, at: 0)

var sumArr = Array(repeating: 0, count: N+1)

sumArr[0] = arr[0]

for i in 1...N {
    sumArr[i] = sumArr[i-1] + arr[i]
}

for _ in 0..<M {
    let input = readLine()!.components(separatedBy: " ").map { Int($0)! }
    let start = input[0]
    let end = input[1]
    
    print(sumArr[end] - sumArr[start-1])
}
