import Foundation

func solution(_ myString:String) -> String {
    return myString.map { String($0) > "l" ? String($0) : "l" }.joined()
}