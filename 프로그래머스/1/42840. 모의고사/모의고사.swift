import Foundation

func solution(_ answers:[Int]) -> [Int] {
    let s1 = [1, 2, 3, 4, 5]
    let s2 = [2, 1, 2, 3, 2, 4, 2, 5]
    let s3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    var result: [Int] = []
    var scores: [Int] = [0, 0, 0]
    
    for (num, answer) in answers.enumerated() {
        if s1[num % s1.count] == answer { scores[0] += 1 }
        if s2[num % s2.count] == answer { scores[1] += 1 }
        if s3[num % s3.count] == answer { scores[2] += 1 }
    }
    
    var max = scores.sorted(by: >)[0]
    
    for (index, score) in scores.enumerated() {
        if max == score {
            result.append(index+1)
        }
    }
    
    return result
}