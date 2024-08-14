import Foundation

func solution(_ phone_number:String) -> String {
    var result = phone_number
    return result.dropLast(4).map { ch in "*" }.joined() + result.dropFirst(result.count - 4)
}