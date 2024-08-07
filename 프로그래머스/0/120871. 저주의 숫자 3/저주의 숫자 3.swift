import Foundation

func solution(_ n:Int) -> Int {
    var result: [Int] = []
    var number  = 1
    
    while result.count != 100 {
        if String(number).contains("3") || number.isMultiple(of: 3)  {
            number += 1
            continue
        }
        result.append(number)
        number += 1
    }
    
    return result[n-1]
}