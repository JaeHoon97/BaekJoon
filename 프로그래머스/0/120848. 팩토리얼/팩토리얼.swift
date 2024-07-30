import Foundation

func solution(_ n:Int) -> Int {
    
    var result = 1
    var num = 0
    
    repeat {
        num += 1
        result *= num
    } while result <= n
    
    return num - 1
}