import Foundation

func solution(_ dots:[[Int]]) -> Int {
    let p1 = dots[0]
    let p2 = dots[1]
    let p3 = dots[2]
    let p4 = dots[3]
    if (p1[1] - p2[1]) * (p3[0] - p4[0]) == (p3[1] - p4[1]) * (p1[0] - p2[0])  { return 1 }
    if (p1[1] - p3[1]) * (p2[0] - p4[0]) == (p2[1] - p4[1]) * (p1[0] - p3[0]) { return 1 }
    if (p1[1] - p4[1]) * (p2[0] - p3[0]) == (p2[1] - p3[1]) * (p1[0] - p4[0]) { return 1 }
    return 0
}