
Menu






























































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-07-15 19:44:06	Correct	cpp	67 / 67	View
2022-05-08 17:26:17	Correct	cpp	67 / 67	View
2022-05-08 17:24:41	RunTime Error	cpp	0 / 67	View
{
    public:
    //Function to sort an array using quick sort algorithm.
    
    // void swap(int *a,int *b){
        
    //     int *temp;
    //     *temp=*a;
        
    //     *a=*b;
    //     *b=*temp;
    // }
    void quickSort(int arr[], int low, int high)
    {
        // code here
       
      if(low<high){  
    
    int p=partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
    }
    }
    
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
          int pivot=arr[low];
   int i=low,j=high;
   //if htere is only one elemet
  if(low==high){
      return low;
  }
   while(i<j){
       
      
       while(arr[i]<=pivot)i++;
       
      
       while(arr[j]>pivot)j--;
       
       
       if(i<j){
           swap(arr[i],arr[j]);
       }
   }
    swap(arr[low],arr[j]);
       return j;
    }
};
