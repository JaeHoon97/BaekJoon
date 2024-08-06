import Foundation

func solution(_ spell:[String], _ dic:[String]) -> Int {
    let str = spell.sorted().joined()
    let result = dic.filter { String($0.sorted()).contains(str) }
    return result.isEmpty ? 2 : 1
}