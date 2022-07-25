bool isPaintpossible(vector<int> &arr, int k, int mid, int n){

   

    int paintersCnt = 1;

    int areaSum = 0;

   

    for(int i=0; i<n; i++){

        if(areaSum + arr[i] <= mid){

            areaSum += arr[i];

        }

        else{

            paintersCnt++;

                if(paintersCnt > k || arr[i] > mid){

                    return false;

                }

            areaSum = 0;

            areaSum += arr[i];

        }

    }

    return true;

}

int findLargestMinDistance(vector<int> &boards, int k)

{

    int s = 0;

    int sum = 0;

    int n = boards.size();

    for(int i=0; i<n; i++){

        sum += boards[i];

    }

    int e=sum;

    int mid = s + (e-s)/2;

    int ans;

   

    while(s<=e){

       

        if(isPaintpossible(boards,k,mid,n)){

            ans = mid;

            e = mid - 1;

        }

        else{

            s = mid + 1;

        }

        mid = s + (e-s)/2;

    }

    return ans;

}
