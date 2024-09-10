import Foundation

func solution(_ n:Int) -> Int {
    var str: String = ""
    var num: Int = n
    var val = 1
    
    while num >= 3 {
        str += String(num % 3)
        num = num / 3
    }
    
    str += String(num)
    
    return str.reversed().map { ch in
        var result =  Int(String(ch))! * val
        val *= 3
        return result
    }.reduce(0, +)
}