import Foundation

func solution(_ s:String) -> String {
    let result = s.components(separatedBy: " ").map { Int(String($0))! }.sorted()
    return "\(result.first!) \(result.last!)"
}