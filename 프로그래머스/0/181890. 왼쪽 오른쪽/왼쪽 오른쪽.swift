import Foundation

func solution(_ str_list:[String]) -> [String] {
    let leftIndex = str_list.firstIndex(of: "l") ?? 25
    let rightIndex = str_list.firstIndex(of: "r") ?? 25

    if leftIndex == 25 && rightIndex == 25 { return [] }
    
    return leftIndex < rightIndex ? Array(str_list.prefix(leftIndex)) : Array(str_list.suffix(str_list.count - rightIndex - 1))
}