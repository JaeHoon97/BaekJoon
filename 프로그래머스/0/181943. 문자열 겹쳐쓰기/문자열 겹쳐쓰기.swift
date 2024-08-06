import Foundation

func solution(_ my_string:String, _ overwrite_string:String, _ s:Int) -> String {
    var result = my_string
    var startIndex = result.index(result.startIndex, offsetBy: s)
    var endIndex = result.index(result.startIndex, offsetBy: s + overwrite_string.count)
    result.replaceSubrange(startIndex..<endIndex, with: overwrite_string)
    return result
}