/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {

const resultSet = new Set();
const setnums1=new Set(nums1);

nums2.forEach((e)=>{          // TC->O(N), SC->O(N)
    if(setnums1.has(e))
    resultSet.add(e);
})
return [...resultSet];
};