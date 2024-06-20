import Foundation

func solution(_ n:Int) -> Int {
    
    var sum = 0
    
    for val in 1...n {
        if(val % 2 == 0) {
            sum += val
        }
    }
    
    return sum
}