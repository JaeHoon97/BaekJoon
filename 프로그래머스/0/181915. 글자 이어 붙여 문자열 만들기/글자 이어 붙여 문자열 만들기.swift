import Foundation

func solution(_ my_string:String, _ index_list:[Int]) -> String {
    
    var result = ""
    
    for i in index_list {
        var index = my_string.index(my_string.startIndex, offsetBy: i)
        result += String(my_string[index])
    }
    
    
    return result
}