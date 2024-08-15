import Foundation

func solution(_ d:[Int], _ budget:Int) -> Int {
    var result: [Int] = []
    d.sorted().forEach {
        if (result.reduce(0, +) + $0) <= budget { result.append($0) }
    }
    
    return result.count
}