import Foundation

func solution(_ n:Int) -> Int {
    
    var result: Int = 1
    
    while(true) {
        if(result * 7 >= n) {
            break;
        } else {
            result += 1
        }
    }
    
    return result
}