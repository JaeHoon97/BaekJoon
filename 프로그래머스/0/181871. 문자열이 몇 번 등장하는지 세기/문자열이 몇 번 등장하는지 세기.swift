import Foundation

func solution(_ myString:String, _ pat:String) -> Int {
    
    var result = 0
    var str = myString

    while !str.isEmpty {
        if str.prefix(pat.count).contains(pat) { result += 1 }
        str.removeFirst()
    }
    
    return result
}