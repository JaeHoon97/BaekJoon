import Foundation

func solution(_ arr:[Int], _ queries:[[Int]]) -> [Int] {
    
    var result = arr
    
    queries.forEach {
        let start = $0[0]
        let end = $0[1]
        
        result.swapAt(start, end)
    }
    
    return result
}