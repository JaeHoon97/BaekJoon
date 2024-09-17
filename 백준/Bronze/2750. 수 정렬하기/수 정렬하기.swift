import Foundation

let cnt = Int(readLine()!)!
var arr: [Int] = []

for _ in 0..<cnt {
    let input = Int(readLine()!)!
    arr.append(input)
}

arr.sort()

for i in arr {
    print(i)
}