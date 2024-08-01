import Foundation

func solution(_ my_str:String, _ n:Int) -> [String] {
    var str = my_str
    var result: [String] = []
    
    while str.count >= n {
        result.append(String(str.prefix(n)))
        str.removeFirst(n)
    }
    
    if !str.isEmpty { result.append(str) }
    
    return result
}