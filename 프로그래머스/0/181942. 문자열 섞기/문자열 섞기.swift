import Foundation

func solution(_ str1:String, _ str2:String) -> String {
    
    var str1 = str1
    var str2 = str2
    
    var result = ""
    
    while !str1.isEmpty && !str2.isEmpty {
        result.append(str1.removeFirst())
        result.append(str2.removeFirst())
    }
    
    
    return result
}
