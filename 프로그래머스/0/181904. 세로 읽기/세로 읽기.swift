import Foundation

func solution(_ my_string:String, _ m:Int, _ c:Int) -> String {
    
    var result = ""
    var cnt = c - 1
    
    for (index, offset) in my_string.enumerated() {
        if index == cnt {
            result.append(offset)
            cnt += m
        }
    }
    
    return result
}