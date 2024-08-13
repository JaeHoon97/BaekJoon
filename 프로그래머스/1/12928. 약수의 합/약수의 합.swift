import Foundation

func solution(_ n:Int) -> Int {
    if n == 0 { return 0 }
    return (1...n).filter { n.isMultiple(of: $0) }.reduce(0, +)
}
