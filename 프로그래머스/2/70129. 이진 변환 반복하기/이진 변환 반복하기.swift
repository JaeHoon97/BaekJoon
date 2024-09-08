import Foundation

var result = ""
var changeCount = 0
var removeCount = 0

func solution(_ s:String) -> [Int] {
    result = s
    
    while result != "1" {
        var str = removeZero(str: result)
        result = String(str.count, radix: 2)
        changeCount += 1
    }
    
    return [changeCount, removeCount]
}

func removeZero(str: String) -> String {
    return str.map { ch in
        if ch == "1" {
            return "1"
        } else {
            removeCount += 1
            return ""
        }
    }.joined()
}