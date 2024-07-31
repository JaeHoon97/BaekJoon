import Foundation

func solution(_ arr:[Int]) -> [Int] {
    var result = arr.enumerated().filter { $0.element == 2 }
    guard !result.isEmpty else { return [-1] }
    var first = result.min { $0.offset < $1.offset }
    var last = result.max { $0.offset < $1.offset }
    return Array(arr[first!.offset...last!.offset])
}