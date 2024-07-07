import Foundation

func solution(_ rny_string:String) -> String {
    var result = ""
    
    for ch in rny_string {
        (ch == "m") ? result.append("rn") : result.append(ch)
    }
    
    return result
}