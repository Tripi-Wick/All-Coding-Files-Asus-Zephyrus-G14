//Approach 1
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        bool temp=0;

        if(nums1.size()!=0 && nums2.size()!=0){
                if(nums1.size()!=1){
                    for(double i=0,j=1; i<nums1.size()-1; i++,j++){
                            if(nums1.at(i)>nums1.at(j)){
                                swap(nums1.at(i),nums1.at(j));
                            }
                    }
                }
                if(nums2.size()!=1){
                    for(double i=0,j=1; i<nums2.size()-1; i++,j++){
                            if(nums2.at(i)>nums2.at(j)){
                                swap(nums2.at(i),nums2.at(j));
                            }
                    }
                }
                    for(double i=0;i<nums2.size() && i<nums1.size() ;i++){
                        if(nums1[i]!=nums2[i]){temp = 1;}
                    }

                    if(nums1.size() != nums2.size()){temp=1;}

                    if(temp==1){
                        for(double i=0;i<nums2.size();i++){
                            nums1.push_back(nums2[i]);
                        }
                    }


                    int a = nums1.size();

                    sort(nums1.begin(),nums1.end());

                    if(a%2!=0){
                        return nums1[a/2];
                    }
                    
                    int b = a/2;
                    double x = nums1[b];
                    double y = nums1[b-1];
                    double z = (x+y);
                    if(z<0){z=z*(-1);}
                    double res=z/2;
                    return res;
        }

        if(nums1.size()!=0 && nums2.size()==0){
                    for(double i=0,j=1; i<nums1.size()-1; i++,j++){
                            if(nums1.at(i)>nums1.at(j)){
                                swap(nums1.at(i),nums1.at(j));
                                }
                    }
                    int a = nums1.size();
                    if(a%2!=0){
                        return nums1[nums1.size()/2];
                    }
                    int b = a/2;
                    double x = nums1[b];
                    double y = nums1[b-1];
                    double z = (x+y);
                    if(z<0){z=z*(-1);}
                    double res=z/2;
                    return res;
        }

        if(nums1.size()==0 && nums2.size()!=0){
                    for(double i=0,j=1; i<nums2.size()-1; i++,j++){
                            if(nums2.at(i)>nums2.at(j)){
                                swap(nums2.at(i),nums2.at(j));
                                }
                    }
                    int a = nums2.size();
                    if(a%2!=0){
                        return nums2[nums2.size()/2];
                    }
                    int b = a/2;
                    double x = nums2[b];
                    double y = nums2[b-1];
                    double z = (x+y);
                    if(z<0){z=z*(-1);}
                    double res=z/2;
                    return res; 
        }
        return 0;
    }
};