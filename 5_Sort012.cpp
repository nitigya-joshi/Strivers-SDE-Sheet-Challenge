void sort012(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1, temp;

    for (; mid <= high; mid++)
    {
        if (arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
        }

        else if (arr[mid] == 2)
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
            mid--;
        }
    }
}