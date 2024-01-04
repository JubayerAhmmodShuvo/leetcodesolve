/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function (nums) {
  const map = new Map();

  for (let num of nums) {
    map.set(num, (map.get(num) || 0) + 1);
  }

  let count = 0;
  for (let [key, value] of map.entries()) {
    let t = value;
    if (t === 1) return -1;
    count += Math.floor(t / 3);
    if (t % 3 !== 0) count++;
  }
  return count;
};
