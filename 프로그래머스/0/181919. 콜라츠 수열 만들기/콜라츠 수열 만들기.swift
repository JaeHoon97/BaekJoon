import Foundation

func solution(_ n:Int) -> [Int] {
    var result: [Int] = []
    var x = n
    
    while x != 1 {
        result.append(x)
        x.isMultiple(of: 2) ? (x /= 2) : (x = x * 3 + 1)
    }
    
    result.append(1)
    
    return result
}
