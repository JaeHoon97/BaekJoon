import Foundation

func solution(_ array:[Int]) -> Int {
    
    let result = array.sorted()
    
    return result[result.count / 2]
}