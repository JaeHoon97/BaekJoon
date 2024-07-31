import Foundation

func solution(_ n:Int) -> [Int] {
    var arr: [Int] = []
    arr = (2...n).filter { n.isMultiple(of: $0) }
    return arr.filter { num in
        (1...num).filter { num.isMultiple(of: $0) }.count == 2
    }
}