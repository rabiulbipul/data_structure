for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
				arr3[j]=mm;
				mm++;
				}
			}
			mm=1;
        }		

   for(i=0; i<n; i++)
    {
      if(arr3[i]==2){ctr++;}  
    }
