import Foundation

func solution(_ n:Int) -> String {
    let evenStr = "수"
    let oddStr = "박"
    var result = ""
    
    for i in 0..<n { i.isMultiple(of: 2) ? result.append(evenStr) : result.append(oddStr) }
    return result
}