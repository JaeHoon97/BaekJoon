import Foundation

func solution(_ a:Int, _ d:Int, _ included:[Bool]) -> Int {
    return included.enumerated().map { return $1 == true ? (a + d * $0) : 0 }.reduce(0, +)
}
