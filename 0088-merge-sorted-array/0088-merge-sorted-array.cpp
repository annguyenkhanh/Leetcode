class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while (i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while (j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};

// Mindset:
// Lấy các giá trị từ cuối 2 mảng Num1 và Num2 duyệt lên, nếu nums2[j] bé hơn nums1[i] thì nums1[k]= nums1[i] và nums1[k-1]=nums2[j] hoặc ngược lại 