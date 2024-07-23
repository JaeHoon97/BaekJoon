import Foundation

func solution(_ numLog:[Int]) -> String {
    
    var result = ""
    
    for i in 0..<(numLog.count-1) {
        let val = numLog[i+1] - numLog[i]
        if val == -1 {
            result += "s"
        } else if val == 1 {
            result += "w"
        } else if val == 10 {
            result += "d"
        } else {
            result += "a"
        }
    }
    
    return result
}