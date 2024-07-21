import Foundation

func solution(_ n:Int) -> [[Int]] {
    
    var result: [[Int]] = Array(repeating: Array(repeating: 0, count: n), count: n)
    
    for i in 0..<n {
        result[i][i] = 1
    }
    
    return result
}