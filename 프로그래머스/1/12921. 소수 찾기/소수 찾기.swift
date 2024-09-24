import Foundation

func solution(_ n:Int) -> Int {
    var result = 0

    for num in 2...n {
        var flag = true
        if num == 2 || num == 3 {
            result += 1
            continue
        }
        
        let squareRoot = sqrt(Double(num))
        
        for i in 2...Int(squareRoot) {
            if num % i == 0 {
                flag = false
                break
            }
        }
        
        if flag { result += 1}
    }
    
    return result
}