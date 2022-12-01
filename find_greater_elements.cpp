void find_greater_elements(int nums[], int n)
{
    cout << "\nElements which have at-least two greater elements: ";
    for (int i=0; i<n; i++)
    {
        int ctr = 0;
        for (int j=0; j<n; j++)
            if (nums[j] > nums[i])
                ctr++;
 
        if (ctr >= 2)
            cout << nums[i] << " ";
    }
}
