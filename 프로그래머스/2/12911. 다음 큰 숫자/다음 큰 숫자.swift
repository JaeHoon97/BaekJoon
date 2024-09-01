import Foundation

func solution(_ n:Int) -> Int {
    var num = n + 1
    
    while true {
        if num.nonzeroBitCount == n.nonzeroBitCount {
            return num
        }
        num += 1
    }
}