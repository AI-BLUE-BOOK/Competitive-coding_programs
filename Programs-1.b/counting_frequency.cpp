//*******************Count frequency of each element in the array************//

//-----------------------Using FOR LOOP-----------------------------//
void Countfre(int arr[],int n)
{
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(visited==True)
        continue;

        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                visited[j]==true;
                count++;
            }

        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}

int main()
{
    int n=sizeof(arr)/sizeof(arr[0]);
    Countfre(arr,n);
}

// Time complexity: O(N*N)
// Space complexity: O(N)

//----------------------Counting Frequency-Using Map------------------//

void frequency(int arr[],int n)
{
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    for(auto x :map)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
// Time complexity: O(N)
// Space complexity: O(N)

//***********Highest and Lowest Frequency of an element in an array**********//
//-----------Brute-Force Approach using two loops-------------------//
void countfre(int arr[],int n)
{
    vector<int,int> visited(n,false);
    int maxfreq=0 , minfreq=n;
    int max_Element=0,min_Element=0;

    for(int i=0;i<n;i++)
    {
        if(visited[i]==true)
         continue;

        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                visited[i]==true;
                count++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            max_Element=arr[i];        
        }
        if(count<minfreq)
        {
            minfreq=count;
            min_Element=arr[i];
        }
    }
    cout<<"Maximum frequency element is: "<<max_Element<<endl;
    cout<<"Minimum frequency element is: "<<min_Element<<endl;
}
