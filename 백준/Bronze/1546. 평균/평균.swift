import Foundation

let N = Int(readLine()!)!
let input = readLine()!.components(separatedBy: " ").map { Int($0)! }.sorted()

let max = input.last!

let result = input.map { Double($0) / Double(max) * 100 }.reduce(0.0, +) / Double(N)
print(result)
