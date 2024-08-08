import Foundation

func solution(_ arr:[Int], _ query:[Int]) -> [Int] {
    
    var result = arr
    
    for index in 0..<query.count {
        if index.isMultiple(of: 2) {
            result.removeLast(result.count - query[index] - 1)
        } else {
            result.removeFirst(query[index])
        }
    }
    
    return result
}