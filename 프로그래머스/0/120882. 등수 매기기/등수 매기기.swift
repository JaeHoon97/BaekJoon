import Foundation

func solution(_ score:[[Int]]) -> [Int] {
    var dic: [Int:Int] = [:]
    let average = score.map { $0.reduce(0, +) }
    var cnt = 1
    
    average.sorted(by: >).forEach {
        if !dic.keys.contains($0) { dic.updateValue(cnt, forKey: $0) }
        cnt += 1
    }
    
    return average.map { dic[$0]! }
}