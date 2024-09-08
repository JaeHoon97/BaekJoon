import Foundation

func solution(_ myString:String, _ pat:String) -> String {
    var str = myString
    var result = ""
    
    while str.contains(pat) {
        let index = str.range(of: pat)!
        let subStr = str[..<index.upperBound]
        result += subStr
        str.removeSubrange(..<index.upperBound)
    }
    
    return result
}