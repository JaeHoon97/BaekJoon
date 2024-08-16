import Foundation

func solution(_ t:String, _ p:String) -> Int {
    var str = t
    var result = 0
    
    while str.count >= p.count {
        let subStr = str.prefix(p.count)
        if Int(subStr)! <= Int(p)! { result += 1 }
        str.removeFirst()
    }
    
    return result
}