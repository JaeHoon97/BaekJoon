import Foundation

func solution(_ start_num:Int, _ end_num:Int) -> [Int] {
    
    return Array(stride(from: start_num, through: end_num, by: -1))
}