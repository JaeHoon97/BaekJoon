import Foundation

func solution(_ my_string:String) -> String {
    
    var result: String = ""
    
    for ch in my_string {
        if(ch.isLowercase) {
            result += ch.uppercased()
        } else {
            result += ch.lowercased()
        }
    }
    
    
    return result
}