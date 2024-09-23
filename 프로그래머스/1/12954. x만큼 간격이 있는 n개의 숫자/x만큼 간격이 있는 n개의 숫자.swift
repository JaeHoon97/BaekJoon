import Foundation

func solution(_ x:Int, _ n:Int) -> [Int64] {
    
    guard x != 0 else { return Array(repeating: 0, count: n) }
    
    return Array(stride(from: x, through: x * n, by: x)).map { Int64($0) }
}