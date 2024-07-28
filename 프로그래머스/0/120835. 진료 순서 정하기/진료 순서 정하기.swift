import Foundation

func solution(_ emergency:[Int]) -> [Int] {
    
    var result: [Int:Int] = [:]
    var index = 1
    
    emergency.sorted(by: >).forEach {
        result.updateValue(index, forKey: $0)
        index += 1
    }
    
    return emergency.map { result[$0]! }
}