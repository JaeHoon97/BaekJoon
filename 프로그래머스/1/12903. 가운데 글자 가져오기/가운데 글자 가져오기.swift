import Foundation

func solution(_ s:String) -> String {
    var result = Array(s)
    return s.count.isMultiple(of: 2) ? String(result[(s.count / 2 - 1)...(s.count / 2)]) : String(result[s.count / 2])
}