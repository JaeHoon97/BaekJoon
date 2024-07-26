import Foundation

func solution(_ my_string:String, _ s:Int, _ e:Int) -> String {
    var result = my_string
    
    let start = my_string.index(my_string.startIndex, offsetBy: s)
    let end = my_string.index(my_string.startIndex, offsetBy: e)
    let str = result[start...end].reversed()
    
    result.replaceSubrange(start...end, with: str)
    
    return result
}