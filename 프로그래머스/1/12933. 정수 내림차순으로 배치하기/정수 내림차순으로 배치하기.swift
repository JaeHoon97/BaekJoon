import Foundation

func solution(_ n:Int64) -> Int64 {
    let result = String(String(n).sorted(by: >))
    return Int64(result)!
}