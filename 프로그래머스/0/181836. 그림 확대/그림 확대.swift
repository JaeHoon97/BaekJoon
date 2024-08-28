import Foundation

func solution(_ picture:[String], _ k:Int) -> [String] {
    var result = picture.flatMap {
        Array(repeating: $0, count: k)
    }
    
    // 문자열을 리턴해야함
    return result.map { str in
        // ".xx...xx."
        return str.map { ch in String(Array(repeating: ch, count: k)) }.joined()
    }
}