import Foundation

func solution(_ s:String) -> String {
    
    var result = s
    var index = 0
    
    return result.map { ch in
        guard ch != " " else {
            index = 0
            return " "
        }
        
        if index.isMultiple(of: 2) {
            index += 1
            return String(ch).uppercased()
        } else {
            index += 1
            return String(ch).lowercased()
        }
    }.joined()
}