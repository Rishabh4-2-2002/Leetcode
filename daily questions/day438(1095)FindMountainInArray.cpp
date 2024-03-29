int findInMountainArray(int t, MountainArray& arr) {
  auto peak = 0, r = arr.length() - 1;
  while (peak < r) {
    int m = (peak + r) / 2;
    if (arr.get(m) > arr.get(m + 1)) r = m;
    else peak = m + 1;
  }
  auto i = bSearch(arr, t, 0, peak);
  return i != -1 ? i : bSearch(arr, t, peak + 1, arr.length() - 1, false);
}
int bSearch(MountainArray& arr, int t, int l, int r, bool asc = true) {
  while (l <= r) {
    int m = (l + r) / 2;
    auto val = arr.get(m);
    if (val == t) return m;
    if (asc == val < t) l = m + 1;
    else r = m - 1;
  }
  return -1;
}