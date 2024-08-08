import Foundation

let s1 = readLine()!

print(s1.map { $0.isLowercase ? $0.uppercased() : $0.lowercased() }.joined())