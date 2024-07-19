import Foundation

func solution(_ my_string:String) -> [String] {
    
    var result: [String] = []
    
    for i in 1...my_string.count {
        result.append(String(my_string.suffix(i)))
    }
    
    
    return result.sorted()
}
