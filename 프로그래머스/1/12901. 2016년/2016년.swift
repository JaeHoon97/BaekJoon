import Foundation

func solution(_ a:Int, _ b:Int) -> String {
    let cal: [Int] = [31, 29, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31]
    let days: [String] = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"]
    var sum = 0
    
    for i in 0..<(a-1) { sum += cal[i] }
    sum += b
    return days[((sum - 1) % 7)]
}