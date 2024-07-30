import Foundation

func solution(_ s:String) -> String {
    
    var dic: [Character:Int] = [:]
    
    s.forEach {
        let num = dic[$0] ?? 0
        dic.updateValue(num + 1, forKey: $0)
    }
    

    
    return String(dic.filter { $1 == 1 }.map { String($0.key) }.joined().sorted())
}