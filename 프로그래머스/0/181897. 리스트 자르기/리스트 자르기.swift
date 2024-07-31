import Foundation

func solution(_ n:Int, _ slicer:[Int], _ num_list:[Int]) -> [Int] {
    var start = 0
    var last = 0
    var diff = 1
    var result: [Int] = []
    
    switch n {
    case 1:
        last = slicer[1]
    case 2:
        start = slicer[0]
        last = num_list.count - 1
    case 3:
        start = slicer[0]
        last = slicer[1]
    default:
        start = slicer[0]
        last = slicer[1]
        diff = slicer[2]
    }
    
    while start <= last {
        result.append(num_list[start])
        start += diff
    }
    
    return result
}
