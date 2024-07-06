import Foundation

func solution(_ n:Int) -> Int {
    
    var result: Int = 0
    
    String(n).forEach { result += ($0.wholeNumberValue)! }
    
    return result
}