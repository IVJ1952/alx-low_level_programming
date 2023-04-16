/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0, right = (int)size - 1, mid;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        print_array(array, left, right);

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
