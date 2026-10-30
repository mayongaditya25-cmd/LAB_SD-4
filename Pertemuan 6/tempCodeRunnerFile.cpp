 int mid = left + (right - left) / 2;

        mergesort(data, left, mid);
        mergesort(data, mid + 1, right);
        merge(data, left, mid, right);