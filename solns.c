/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>

float average(int arr[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
    return (float)sum/n;
}

int factors(int n, int farr[]) {
    int idx = 0;
    int i=2;
    while (n > 1) {
        if (n%i == 0) {
            farr[idx++] = i;
            n /= i;
        } else {
            i++;
        }
    }
    return idx;
}

int max(int arr[], int n) {
    int max = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int min(int arr[], int n) {
    int min = INT_MAX;
    for (int i=0; i<n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int mode(int arr[], int n) {
    if (n==0)
        return -1;
    int cnt = 0, max_cnt = -1, ret = 0;
    for (int i=0; i<n; i++) {
        cnt = 0;
        for (int j=i+1; j<n; j++) {
            if (arr[j] == arr[i]) {
                cnt++;
            }
        }
        if (cnt > max_cnt) {
            max_cnt = cnt;
            ret = arr[i];
        }
    }
    return ret;
}
