class exercicio56 {
    public int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length == 0) return new int[0][0];
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        List<int[]> resp = new ArrayList<>();
        int[] prev = intervals[0];
        for (int i = 1; i < intervals.length; i++) {
            if (intervals[i][0] <= prev[1]) prev[1] = Math.max(prev[1], intervals[i][1]);
            else {
                resp.add(prev);
                prev = intervals[i];
            }
        }
        resp.add(prev);
        return resp.toArray(new int[resp.size()][]);
    }
}
