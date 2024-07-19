import Foundation

func solution(_ my_strings:[String], _ parts:[[Int]]) -> String {
    
    var result = ""
    
    for i in 0..<parts.count {
        let string = my_strings[i]
        let start = string.index(string.startIndex, offsetBy: parts[i][0])
        let end = string.index(string.startIndex, offsetBy: parts[i][1])
        result += string[start...end]
    }
    
    return result
}