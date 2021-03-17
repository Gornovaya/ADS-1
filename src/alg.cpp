// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
int i = 0;
int j = size - 1;
int res = 0;

while (i < j) {
int mid = (i + j) / 2;
if (value < arr[mid])
j = mid;
else
i = mid + 1;
}

if (value == arr[i]) {
while (arr[i] == value) {
res++;
i++;
}
}

if (res)
return res;
else
return 0;
}
