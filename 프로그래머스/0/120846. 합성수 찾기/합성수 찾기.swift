import Foundation

func solution(_ n:Int) -> Int {
    
    var result: [Int] = Array(repeating: 0, count: n+1)
    
    for i in 1...n {
        stride(from: i, through: n, by: i).forEach { result[$0] += 1 }
    }
    
    return result.filter { $0 >= 3 }.count
}