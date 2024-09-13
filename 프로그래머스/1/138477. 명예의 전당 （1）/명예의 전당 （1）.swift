import Foundation

func solution(_ k:Int, _ score:[Int]) -> [Int] {
    var result: [Int] = []
    var honors: [Int] = []
    
    for val in score {
        honors.append(val)
        honors.sort(by: >)
        if honors.count <= k {
            result.append(honors.last!)
        } else {
            result.append(honors[k-1])
        }
    }
    
    return result
}