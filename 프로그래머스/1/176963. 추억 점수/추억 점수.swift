import Foundation

func solution(_ name:[String], _ yearning:[Int], _ photo:[[String]]) -> [Int] {
    var result: [Int] = []
    var dic: [String: Int] = [:]
    
    for i in name.indices {
        dic.updateValue(yearning[i], forKey: name[i])
    }
    
    photo.forEach { strArr in
        result.append(strArr.map { dic[$0] ?? 0 }.reduce(0, +))
    }
    print(result)
    return result
}