import Foundation

func solution(_ n:Int) -> Int {
    
    var result = 0
    
    if(n % 2 == 1) {
        for i in 1...n {
            if(i % 2 == 1) {
                result += i
            }
        }
    } else {
        for i in 1...n {
            if(i % 2 == 0) {
                result += i * i
            }
        }
    }
    
    
    return result
}