import Foundation

func solution(_ A:String, _ B:String) -> Int {
    var copyA = A
    var result = 0
    
    while copyA != B {
        copyA.insert(copyA.removeLast(), at: copyA.startIndex)
        result += 1
        if result > B.count { return -1 }
    }
    
    return result
}