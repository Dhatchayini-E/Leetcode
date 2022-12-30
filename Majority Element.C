int majorityElement(int* arr, int n){
    int voter = arr[0];
    int voteCount=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==voter)
        {
            ++voteCount;
        }
            else
            {
                --voteCount;
                if(voteCount==0){
                    voter=arr[i];
                    voteCount=1;
                }
            }
    }
    return voter;
}
