import Foundation

func solution(_ n:Int) -> Int {
    var result: [Int] = []
    var number = 0
    
    while result.count != 100 {
        number += 1
        if String(number).contains("3") || number.isMultiple(of: 3)  { continue }
        result.append(number)
    }
    
    return result[n-1]
}