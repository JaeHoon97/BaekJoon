import Foundation

func solution(_ my_string:String, _ indices:[Int]) -> String {
    
    var arr = indices.sorted()
    return my_string.enumerated().filter { arr.contains($0.offset) ? false : true }.map { String($0.element) }.joined()
}