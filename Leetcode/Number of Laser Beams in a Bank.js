/**
 * @param {string[]} bank
 * @return {number}
 */
var numberOfBeams = function (bank) {
  let leaser = 0;
  let prev_devices = 0;
  for (let i = 0; i < bank.length; i++) {
    let count_device = 0;
    for (let j = 0; j < bank[i].length; j++) {
      if (bank[i][j] == 1) {
        count_device++;
      }
    }
    leaser += count_device * prev_devices;
    if (count_device > 0) {
      prev_devices = count_device;
    }
  }
  return leaser;
};
