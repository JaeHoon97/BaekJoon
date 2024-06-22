import Foundation

func solution(_ array:[Int]) -> [Int] {
    
    var max = array.max()!
    var index = array.firstIndex(of: max)!
    
    return [max, index]
}