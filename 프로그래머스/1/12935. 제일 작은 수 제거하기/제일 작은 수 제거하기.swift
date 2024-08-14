import Foundation

func solution(_ arr:[Int]) -> [Int] {
    var result = arr
    let index = result.firstIndex(of: result.min()!)!
    result.remove(at: index)
    
    return result.count == 0 ? [-1] : result
}