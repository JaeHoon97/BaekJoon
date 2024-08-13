import Foundation

func solution(_ n:Int64) -> Int64 {
    var result = sqrt(Double(n))

    if result == Double(Int(result)) { return Int64(pow(result + 1, 2)) }

    return -1
}