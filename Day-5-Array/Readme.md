Array কী?

ধরো তোমার কাছে ৫টা number আছে:

10 20 30 40 50

আলাদা variable করলে:

int a = 10;
int b = 20;
int c = 30;
int d = 40;
int e = 50;

এটা inconvenient।

Array দিয়ে:

int arr[5] = {10, 20, 30, 40, 50};

একটা নাম:

arr

এর ভিতরে ৫টা value।

Index — সবচেয়ে গুরুত্বপূর্ণ

C++ array-এর index 0 থেকে শুরু হয়।

Value:  10   20   30   40   50
Index:   0    1    2    3    4

তাই:

cout << arr[0];

Output:

10

আর:

cout << arr[3];

Output:

40
Rule

যদি array size n হয়:

First index = 0
Last index = n - 1
3. Array traversal

সব element একে একে দেখতে:

for(int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}

এখানে আবার আমাদের পুরোনো concept ফিরে এসেছে:

i = index

i যাবে:

0 → 1 → 2 → ... → n-1

তাই array traversal-এর standard pattern:

for(int i = 0; i < n; i++)
{
    // arr[i]
}