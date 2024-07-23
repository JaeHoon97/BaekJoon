func solution(_ arr:[Int], _ intervals:[[Int]]) -> [Int] {
    return Array(intervals.map { arr[$0[0]...$0[1]] }.joined())
}