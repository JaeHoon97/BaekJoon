import Foundation

func solution(_ rank:[Int], _ attendance:[Bool]) -> Int {
    var students = rank.enumerated().filter { attendance[$0.offset] }.sorted { $0.element < $1.element }
    return students[0].offset * 10000 + students[1].offset * 100 + students[2].offset
}