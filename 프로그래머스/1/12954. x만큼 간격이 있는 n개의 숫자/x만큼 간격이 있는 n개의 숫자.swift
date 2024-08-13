import Foundation

func solution(_ x:Int, _ n:Int) -> [Int64] {
    
    if x == 0 { return Array(repeating: Int64(x), count: n) }
    return Array(stride(from: Int64(x), through: Int64(x * n), by: x))
}