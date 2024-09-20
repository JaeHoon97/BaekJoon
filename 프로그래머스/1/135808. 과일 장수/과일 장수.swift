import Foundation

func solution(_ k:Int, _ m:Int, _ score:[Int]) -> Int {
    // 사과들을 내림차순으로 정렬
    let apples = score.sorted(by: >)
    // 최종 가격
    var result = 0
    // 각 상자에 담기는 최저품의 인덱스 번호
    var index = m - 1
    // 사과의 수가 m개 이상일 경우만
    while index < apples.count {
        result += (apples[index] * m)
        index += m
    }
    return result
}