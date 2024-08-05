import Foundation

func solution(_ arr:[[Int]]) -> [[Int]] {
    
    var result = arr
    
    if result.count > result[0].count {
        for i in 0..<(result.count - result[0].count) {
            for j in 0..<result.count { result[j].append(0) }
        }
        return result
    } else if result.count < result[0].count {
        for i in 0..<(result[0].count - result.count) {
            result.append(Array(repeating: 0, count: result[0].count))
        }
        return result
    } else {
        return result
    }
}
