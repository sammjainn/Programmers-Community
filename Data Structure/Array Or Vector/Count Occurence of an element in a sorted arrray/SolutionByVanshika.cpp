include<bits / stdc++.h>

    using namespace std;
#define ll long long int

int main()
{
    ll n; // stores the no of elements in an array
    cin >> n;
    ll a[n], i;
    ll count = 0; // stores the frequency of an element

    for (i = 0; i < n; i++)
        cin >> a[i];

    ll x;
    cin >> x;
    for (i = 0; i < n; i++) {
        if (a[i] == x) // if the input element is x then increment the count
            count++;
    }

    cout << "Frequency of " << x << " = " << count;
}
