/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {number}
 */
var numSubmatrixSumTarget = function(matrix, target) {
    const rows = matrix.length;
    const cols = matrix[0].length;

    // Precompute the cumulative sum for each row
    for (let row = 0; row < rows; row++) {
        for (let col = 1; col < cols; col++) {
            matrix[row][col] += matrix[row][col - 1];
        }
    }

    let count = 0;

    // Iterate through all possible pairs of columns
    for (let c1 = 0; c1 < cols; c1++) {
        for (let c2 = c1; c2 < cols; c2++) {
            const map = new Map();
            map.set(0, 1);
            let sum = 0;

            // Iterate through all rows and calculate the sum
            for (let row = 0; row < rows; row++) {
                sum += matrix[row][c2] - (c1 > 0 ? matrix[row][c1 - 1] : 0);

                // Check if there is a subarray with sum equal to target
                count += map.get(sum - target) || 0;

                // Update the frequency of the current sum
                map.set(sum, (map.get(sum) || 0) + 1);
            }
        }
    }

    return count;
};