import Foundation

func solution(_ keymap:[String], _ targets:[String]) -> [Int] {
    var dic: [Character:Int] = [:]
    var result: [Int] = Array(repeating: 0, count: targets.count)
    
    keymap.forEach { str in
        str.enumerated().forEach { ch in
            if dic[ch.element] == nil {
                dic.updateValue(ch.offset + 1, forKey: ch.element)
            } else {
                let m = min(dic[ch.element]!, ch.offset + 1)
                dic.updateValue(m, forKey: ch.element)
            }
        }
    }
    
    for target in targets.enumerated() {
        for ch in target.element {
            if dic[ch] != nil {
                result[target.offset] += dic[ch]!
            } else {
                result[target.offset] = -1
                break
            }
        }
    }
    
    return result
}