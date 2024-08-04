import Foundation

func solution(_ my_string:String, _ queries:[[Int]]) -> String {
    
    var str = my_string
    
    for query in queries {
        let first = str.index(str.startIndex, offsetBy: query[0])
        let last = str.index(str.startIndex, offsetBy: query[1])
        str.replaceSubrange(first...last, with: str[first...last].reversed())
    }
    
    return str
}