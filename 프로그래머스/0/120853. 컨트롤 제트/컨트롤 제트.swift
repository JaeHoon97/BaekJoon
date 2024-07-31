import Foundation

func solution(_ s:String) -> Int {
    
    var result = 0
    var temp = 0

    s.components(separatedBy: " ").forEach { char in
        var str = String(char)
        
        if str != "Z" {
            result += Int(str)!
            temp = Int(str)!
        }
        else {
            result -= temp
        }
    }
    
    return result
}