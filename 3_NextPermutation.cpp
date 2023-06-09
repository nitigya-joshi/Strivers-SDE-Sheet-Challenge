void swap(vector<int> &arr, int i, int index)
{
    int temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
}

vector<int> nextPermutation(vector<int> &arr, int n)
{
    if (n == 1)
        return arr;
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        for (int i = n - 1; i > index; i--)
        {
            if (arr[i] > arr[index])
            {
                swap(arr, i, index);
                break;
            }
        }
    }

    for (int i = index + 1, j = n - 1; i <= (n + index) / 2; i++, j--)
    {
        swap(arr, i, j);
    }
    return arr;
}