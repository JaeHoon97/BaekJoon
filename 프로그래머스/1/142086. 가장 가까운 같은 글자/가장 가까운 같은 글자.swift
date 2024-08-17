import Foundation

func solution(_ s:String) -> [Int] {
    var dic: [String: Int] = [:]
    var result: [Int] = []
    
    s.enumerated().forEach {
        let str = String($0.element)
        if dic[str] == nil { // 존재하지 않을 경우
            dic.updateValue($0.offset, forKey: str)
            result.append(-1)
        } else { // 이미 존재할 경우
            result.append($0.offset - dic[str]!)
            dic.updateValue($0.offset, forKey: str)
        }
    }
    return result
}