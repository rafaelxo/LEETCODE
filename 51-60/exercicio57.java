class exercicio57 {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> resp = new ArrayList<>();
        int i = 0;
        int n = intervals.length;
        while (i < n && intervals[i][1] < newInterval[0]) {
            resp.add(intervals[i]);
            i++;
        }
        int stt = newInterval[0];
        int end = newInterval[1];
        while (i < n && intervals[i][0] <= end) {
            stt = Math.min(stt, intervals[i][0]);
            end = Math.max(end, intervals[i][1]);
            i++;
        }
        resp.add(new int[] { stt, end });
        while (i < n) {
            resp.add(intervals[i]);
            i++;
        }
        return resp.toArray(new int[resp.size()][]);
    }
}
