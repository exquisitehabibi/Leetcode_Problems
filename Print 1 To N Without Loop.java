class Solution {
    
    public void pr(int i, int n){
        System.out.print(i+" ");
        if(i==n){ return ;}
        i++;
        pr(i,n);
    }
    
    public void printNos(int n) {
        int i =1;
        pr(i,n);
        // Your code here
    }
}
