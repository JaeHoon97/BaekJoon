import Foundation

func solution(_ todo_list:[String], _ finished:[Bool]) -> [String] {
    
    var result: [String] = []
    
    for (index, ele) in finished.enumerated() {
        
        if (!ele) { result.append(todo_list[index]) }
        
    }
    return result
}