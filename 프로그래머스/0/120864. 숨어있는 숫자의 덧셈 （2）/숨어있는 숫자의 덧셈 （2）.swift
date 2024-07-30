import Foundation

func solution(_ my_string:String) -> Int {
    var result = 0
    my_string.map { $0.isNumber ? String($0) : "." }.joined().components(separatedBy: ".").forEach { result += (Int($0) ?? 0) }
    return result
}