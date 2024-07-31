import Foundation

func solution(_ arr:[Int], _ queries:[[Int]]) -> [Int] {
    
    var result = arr
    
    queries.forEach {
        for index in $0[0]...$0[1] {
            if index.isMultiple(of: $0[2]) { result[index] += 1}
        }
    }
    
    return result
}