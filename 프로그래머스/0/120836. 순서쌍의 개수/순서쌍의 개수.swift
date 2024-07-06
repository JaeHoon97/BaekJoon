import Foundation

func solution(_ n:Int) -> Int {
    
    var result = 0
    
    for i in 1...n {
        if n.isMultiple(of: i) {
            result += 1
        }
    }
    
    return result
}