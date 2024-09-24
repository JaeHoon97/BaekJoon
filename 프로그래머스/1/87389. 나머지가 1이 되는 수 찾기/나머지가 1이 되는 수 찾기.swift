import Foundation

func solution(_ n:Int) -> Int {
    var result = 2
    
    while !(n-1).isMultiple(of: result)  {
        result += 1
    }
    
    return result
}