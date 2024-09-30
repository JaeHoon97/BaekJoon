import Foundation

let N = Int(readLine()!)!
var arr: [Int] = readLine()!.split(separator: " ").map{ Int($0)! }
var result: [Int] = Array(repeating: 0, count: N)
var stack: [Int] = []

for i in 0..<N {
    while !stack.isEmpty && (arr[stack.last!] < arr[i]) {
        result[stack.last!] = arr[i]
        stack.removeLast()
    }
    stack.append(i)
}

while !stack.isEmpty {
    result[stack.last!] = -1
    stack.removeLast()
}

print(result.map{ String($0) }.joined(separator:  " "))
