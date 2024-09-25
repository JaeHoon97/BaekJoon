import Foundation

func solution(_ n:Int, _ m:Int, _ section:[Int]) -> Int {
    var remain: [Bool] = Array(repeating: true, count: n+1)
    var result = 0
    
    section.forEach {
        remain[$0] = false
    }
    
    for i in section {
        if !remain[i] {
            for j in i..<i+m {
                if (j <= n) && !remain[j] {
                    remain[j] = true
                }
            }
            result += 1
        }
    }
    
    return result
}