import Foundation

func solution(_ arr:[Int]) -> [Int] {
    
    var result: [Int] = []
    
    for i in arr {
        result.append(contentsOf: Array(repeating: i, count: i))
    }
    
    
    return result
}