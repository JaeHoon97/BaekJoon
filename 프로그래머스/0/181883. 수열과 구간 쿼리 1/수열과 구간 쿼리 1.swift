import Foundation

func solution(_ arr:[Int], _ queries:[[Int]]) -> [Int] {
    
    var result: [Int] = arr
    
    queries.forEach { arr in
        for index in arr[0]...arr[1] {
            result[index] += 1
        }
    }
    
    return result
}