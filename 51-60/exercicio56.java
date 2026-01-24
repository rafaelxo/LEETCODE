class exercicio56 {
    public int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length == 0) return new int[0][0];
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        List<int[]> resp = new ArrayList<>();
        int stt = intervals[0][0];
        int end = intervals[0][1];
        for (int i = 1; i < intervals.length; i++) {
            int currStt = intervals[i][0];
            int currEnd = intervals[i][1];
            if (currStt <= end) end = Math.max(end, currEnd);
            else {
                resp.add(new int[] { stt, end });
                stt = currStt;
                end = currEnd;
            }
        }
        resp.add(new int[] { stt, end });
        return resp.toArray(new int[resp.size()][]);
    }
}
