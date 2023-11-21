//-------------------Count frequency of each element in the array------------//

/***************************Using FOR LOOP*************************************/
void Countfre(int arr[],int n)
{
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(visited==True)
        continue;

        int count=0;
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

//-----------Counting Frequency-Using Map-----------------------------------------//

void frequency(int arr[],int n)
{
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    for(auto x :map)
    {
        cout<<
    }
}