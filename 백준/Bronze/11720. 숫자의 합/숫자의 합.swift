import Foundation

let N = Int(readLine()!)!
let str = readLine()!

let result = str.map { Int(String($0))! }.reduce(0, +)

print(result)
