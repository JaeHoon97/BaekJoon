import Foundation

func solution(_ intStrs:[String], _ k:Int, _ s:Int, _ l:Int) -> [Int] {
    
    let result: [Int] = intStrs.map { str in
        let start = str.index(str.startIndex, offsetBy: s)
        let end = str.index(start, offsetBy: l-1)
        let num = Int(str[start...end])!
        return num
    }
    
    return result.filter { $0 > k }
}