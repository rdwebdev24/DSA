// #include <bits/stdc++.h>
// #include <sstream>
// #include <string>
// #include <vector>

// using namespace std;

// bool is_attacked(int i, int j, vector<vector<int>>arr, int n){
//     int x=i,y=0;
//     while(y<n){
//         if(x!=i or y!=j){
//             if(arr[x][y]==1){
//                 return true;
//             }
//         }
//         y++;
//     }
//     x=0,y=j;
//     while(x<n){
//         if(x!=i or y!=j){
//             if(arr[x][y]==1){
//                 return true;
//             }
//         }
//         x++;
//     }

//     for(int p=0; p<n; p++){
//         for(int q=0; q<n; q++){
//             if(p+q==i+j){
//                 if(p!=i and q!=j){
//                     if(arr[p][q]==1){
//                         return true;
//                     }
//                 }
//             }else if(p-q==i-j){
//                 if(p!=i and q!=j){
//                     if(arr[p][q]==1){
//                         return true;
//                     }
//                 }
//             }
//         }
//     }
//     return false;

// }

// bool n_queen(vector<vector<int>>arr,int n){
//     if(n==0){
//         return true;
//     }
//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr.size(); j++){
//             if(is_attacked(i,j,arr,n)){
//                 continue;
//             }else{
//                 arr[i][j] = 1;
//             }
//             if(arr,n-1){
//                 return true;
//             }
//             arr[i][j]=0;
//         }
//     }
// }

// int main()
// {
//      system("cls");
//      int n;
//      cout<<"Enter the value of n : ";
//      cin>>n;
//     vector<vector<int>> arr( n ,vector<int>(n,0) );
//      arr[0][1] = 1;
//      arr[1][3] = 1;
//      arr[2][0] = 1;
//      arr[3][2] = 1;
//      cout<<"Printing the vector : "<<endl;
//      for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr.size(); j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//      }
//      bool ans;
//     //  ans = n_queen(arr,n);
//     cout<<"attcked places : "<<endl;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<(is_attacked(i,j,arr,n))<<" ";
//         }
//         cout<<endl;
//     }

//      return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print_(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}

node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

node *insert(node *head, int data, int x)
{
    node *newnode = new node(data);
    int cnt = 1;
    if (x == 1)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    node *temp = head;
    while (cnt < x - 1 and temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp != NULL)
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}

node *deleteNode(node *head, int x)
{
    int cnt = 1;
    node *temp = head;
    if (x <= 0)
    {
        cout << "zero se kam kyu diya re" << endl;
        return head;
    }
    if (x == 1)
    {
        temp = head->next;
        delete head;
        return temp;
    }
    while (cnt < x - 1 and temp != NULL)
    {
        temp = temp->next;
        cnt++;
        if (temp->next == NULL)
        {
            cout << "nahi delete kr skta" << endl;
            return head;
        }
    }
    node *a = temp->next;
    node *b = a->next;
    delete a;
    temp->next = b;
    return head;
}

int length(node *head)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

vector<int> mid(node *head)
{
    int l = length(head);
    vector<int> arr;
    int mid;
    (l & 1) ? (mid = l / 2) : (mid = (l - 1) / 2);
    node *temp = head;
    while (mid--)
    {
        temp = temp->next;
    }
    arr.push_back(temp->data);
    if (!(l & 1))
    {
        arr.push_back(temp->next->data);
    }
    return arr;
}

void slowfast_method_mid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == NULL)
        {
            cout << slow->data;
            return;
        }
    }
    if (fast->next == NULL)
    {
        cout << slow->data;
        cout << slow->next->data;
    }
    return;
}

node *deleteDuplicates(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
            node *a = temp->next;
            delete a;
        }
        temp = temp->next;
    }
    return head;
}

// REVERSE THE LINKED LIST //
node *Reverse(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    node *NewHead = Reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return NewHead;
}

node *reverseIterative(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *n = head->next;

    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = n;
        if (n != NULL)
        {
            n = n->next;
        }
    }
    return prev;
}

node *removeDuplicates(node *head)
{
    node *temp = head;
    node *temp2;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp2 = temp->next;
            while (temp2 != NULL && temp2->data == temp->data)
            {
                node *a = temp2;
                temp2 = temp2->next;
                delete a;
            }
            temp->next = temp2;
            if (temp->next == NULL)
            {
                break;
            }
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

node *removeElement(node *head, int x)
{
    node *temp = head;
    node *temp2;
    while (temp != NULL and temp->next != NULL)
    {
        if (temp->next->data == x)
        {
            temp2 = temp->next;
            while (temp2 != NULL && temp2->data == x)
            {
                node *a = temp2;
                temp2 = temp2->next;
                delete a;
            }
            temp->next = temp2;
            if (temp->next == NULL)
            {
                break;
            }
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }

    if (head->data == x)
    {
        node *newHead = head->next;
        delete head;
        return newHead;
    }
    return head;
}

node *rotate(node *head, int k)
{
    int l = length(head);
    int cnt = 1;
    node *temp = head;

    k = abs(l - (k % l));
    cout << "k : " << k << endl;
    if (k == 0)
    {
        return head;
    }

    while (cnt < k)
    {
        temp = temp->next;
        cnt++;
    }

    node *head2 = Reverse(temp->next);
    temp->next = NULL;
    node *head1 = Reverse(head);

    cnt = 1;
    temp = head1;
    while (cnt < k)
    {
        temp = temp->next;
        cnt++;
    }

    temp->next = head2;
    head = Reverse(head1);
    return head;
}

node *reversePair(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    vector<int> arr;
    node *temp = head;

    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    for (int i = 0; i < arr.size(); i += 2)
    {
        if (i == arr.size())
        {
            break;
        }
        if (i == arr.size() - 1 and i % 2 == 0)
        {
            break;
        }
        else
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    node *head2 = NULL;
    node *tail = NULL;
    for (int i = 0; i < arr.size(); i++)
    {
        node *n = new node(arr[i]);
        if (head2 == NULL)
        {
            head2 = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = tail->next;
        }
    }
    return head2;
}

node *reverseBetween(node *head, int left, int right)
{
    if (left == right)
    {
        return head;
    }
    int cnt = 1;
    node *tail;
    node *temp = head;
    node *newHead;

    while (true)
    {
        if (cnt == left)
        {
            newHead = temp;
        }
        if (cnt == right)
        {
            tail = temp->next;
            temp->next = NULL;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    node *head2 = Reverse(newHead);

    cout << newHead->data << " newHead" << endl;
    temp = head2;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail;

    if (left == 1)
    {
        return head2;
    }
    temp = head;
    cnt = 1;
    while (true)
    {
        if (cnt == left - 1)
        {
            temp->next = head2;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}

node *mergeList(node *head1, node *head2)
{

    node *fh = NULL;
    node *ft = NULL;

    if (head1 == NULL and head2 != NULL)
    {
        return head2;
    }
    if (head2 == NULL and head1 != NULL)
    {
        return head1;
    }
    if (head1 == NULL and head2 == NULL)
    {
        return head1;
    }

    if (head1->data < head2->data)
    {
        fh = head1;
        ft = head1;
        head1 = head1->next;
    }
    else
    {
        fh = head2;
        ft = head2;
        head2 = head2->next;
    }

    while (head1 != NULL and head2 != NULL)
    {
        if (head1->data > head2->data)
        {
            ft->next = head2;
            ft = head2;
            head2 = head2->next;
        }
        else
        {
            ft->next = head1;
            ft = head1;
            head1 = head1->next;
        }
    }

    if (head2 == NULL)
    {
        ft->next = head1;
    }
    if (head1 == NULL)
    {
        ft->next = head2;
    }

    return fh;
}

long long int numberOfSquares(long long int n)
{
    long long int square;
    if (n % 2 == 0)
    {
        n = n / 2 - 1;
    }
    square = (n * (n + 1)) / 2;
    return square;
}

string ReFormatString(string s, int k)
{
    int length = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '-')
        {
            length++;
        }
    }
    int rem = length % k;
    int group = length / k;
    cout << group << endl;
    int i = 0, j = 0;
    string str;

    int temp_rem = rem;
    while (temp_rem > 0)
    {
        if (s[i] != '-')
        {
            str.push_back(toupper(s[i]));
            temp_rem--;
        }
        i++;
    }
    if (rem != 0)
    {
        str.push_back('-');
    }
    cout << "str : " << str << endl;
    cout << i << endl;
    j = 0;
    int itr = 0;
    while (j < group)
    {
        for (; i < s.size(); i++)
        {
            if (s[i] != '-')
            {
                str.push_back(toupper(s[i]));
                itr++;
                if (itr == k)
                {
                    itr = 0;
                    break;
                }
            }
        }
        if (i != s.size())
        {
            str.push_back('-');
        }
        i++;
        j++;
    }
    i = str.size() - 1;
    if (str[str.size() - 1] == '-')
    {
        str.pop_back();
    }

    return str;
}

int Sum(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
{
    vector<int> arr2;

    for (int i = 0; i < queries.size(); i++)
    {
        int data = queries[i][0];
        int idx = queries[i][1];
        nums[idx] = nums[idx] + data;
        int sum = Sum(nums);
        arr2.push_back(sum);
    }
    return arr2;
}

node *sortZeroAndOnes(node *head)
{
    node *temp = head;
    int cntZero = 0;
    int cntOne = 0;
    int cntTwo = 0;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            cntZero++;
        }
        if (temp->data == 1)
        {
            cntOne++;
        }
        if (temp->data == 2)
        {
            cntTwo++;
        }
        temp = temp->next;
    }

    temp = head;
    while (cntZero > 0)
    {
        temp->data = 0;
        temp = temp->next;
        cntZero--;
    }

    while (cntOne > 0)
    {
        temp->data = 1;
        temp = temp->next;
        cntOne--;
    }

    while (cntTwo > 0)
    {
        temp->data = 2;
        temp = temp->next;
        cntTwo--;
    }
    return head;
}

node *MapSort(node *head)
{
    map<int, int> m;
    node *temp = head;

    while (temp != NULL)
    {
        m[temp->data]++;
        temp = temp->next;
    }

    temp = head;
    for (auto i : m)
    {
        int cnt = i.second;
        while (cnt > 0)
        {
            temp->data = i.first;
            temp = temp->next;
            cnt--;
        }
    }
    return head;
}

int Multiply(node *head1, node *head2)
{
    if (head1 == NULL or head2 == NULL)
    {
        return 0;
    }
    int l1 = length(head1) - 1;
    int l2 = length(head2) - 1;
    int num1 = 0;
    int num2 = 0;

    node *temp = head1;
    while (temp != NULL)
    {
        num1 = num1 + pow(10, l1) * temp->data;
        temp = temp->next;
        l1--;
    }

    temp = head2;
    while (temp != NULL)
    {
        num2 = num2 + pow(10, l2) * temp->data;
        temp = temp->next;
        l2--;
    }
    return (num1 * num2);
}

node *addTwoNumber(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    int l1 = length(head1) - 1;
    int l2 = length(head2) - 1;
    int num1 = 0;
    int num2 = 0;

    node *temp = head1;
    while (temp != NULL)
    {
        num1 = num1 + pow(10, l1) * temp->data;
        temp = temp->next;
        l1--;
    }

    temp = head2;
    while (temp != NULL)
    {
        num2 = num2 + pow(10, l2) * temp->data;
        temp = temp->next;
        l2--;
    }

    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    cout << "num2+num1 : " << num2 + num1 << endl;

    int sum = num1 + num2;

    node *newHead = NULL;
    node *tail = NULL;

    while (sum > 0)
    {
        int data = sum % 10;
        node *n = new node(data);
        if (newHead == NULL)
        {
            newHead = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = tail->next;
        }
        sum /= 10;
    }

    return newHead;
}

node *detectAndRemoveLoop(node *head)
{
    map<node *, int> m;
    node *temp = head;
    node *loop;
    m[temp]++;
    while (temp != NULL)
    {
        m[temp->next]++;
        if (m[temp->next] > 1)
        {
            loop = temp;
            break;
        }
        temp = temp->next;
    }
    cout << loop->data << endl;
    loop->next = NULL;
    return head;
}

void reverseStr(string &str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void ReverseIII(string &s)
{

    int j = 0, i = 0;
    int cnt = 0;
    int f = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            string substr = s.substr(j, i - j);
            reverseStr(substr);
            s = s.substr(f, j) + substr + s.substr(i);
            j = i + 1;
        }
        cnt++;
    }
    string substr = s.substr(j);
    reverseStr(substr);
    s = s.substr(f, j) + substr + s.substr(i);
}

int slicing(vector<int> &arr,
            int X, int Y)
{

    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;

    vector<int> result(Y - X + 1);

    copy(start, end, result.begin());

    int max = *max_element(start, end);

    return max;
}

node *deleteMiddle(node *head)
{
    int l = length(head);
    int mid = l / 2;

    if (mid == 0)
    {
        return NULL;
    }
    node *temp = head;
    while (mid > 1)
    {
        temp = temp->next;
        mid--;
    }
    node *a = temp->next;
    temp->next = a->next;
    delete a;

    return head;
}

vector<int> nextGreaterNode(node *head)
{
    vector<int> arr;
    node *temp = head;

    while (temp != NULL and temp->next != NULL)
    {
        node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp2->data > temp->data)
            {
                arr.push_back(temp2->data);
                break;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        if (temp2 == NULL)
        {
            arr.push_back(0);
        }
        temp = temp->next;
    }
    arr.push_back(0);
    return arr;
}

vector<int> matchDay(vector<int> arr, int k)
{
    int j = k - 1;
    int i = 0;
    int max = slicing(arr, i, j);
    int cnt = k;
    vector<int> vec;
    while (j < arr.size())
    {
        if (cnt < 1)
        {
            max = slicing(arr, i, j);
            cnt = k;
        }
        if (arr[j] > max)
        {
            max = arr[j];
        }
        vec.push_back(max);
        j++;
        i++;
        cnt--;
    }
    return vec;
}

class Solution
{
    int minEle = INT_MAX;
    stack<int> s;

public:
    /*returns min element from stack*/
    int getMin()
    {
        if (s.empty())
        {
            return -1;
        }
        return minEle;
    }

    /*returns poped element from stack*/
    int pop()
    {
        if (!s.empty())
        {
            int val = s.top();
            s.pop();
            return val;
        }
        return -1;
    }

    /*push element x into the stack*/
    void push(int x)
    {
        if (x < minEle)
        {
            minEle = x;
        }
        s.push(x);
    }
};

string reverseWords(string str)
{

    // string str2;
    // stack<int> s;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] != '.')
    //     {
    //         s.push(str[i]);
    //     }
    //     else
    //     {
    //         while (!s.empty())
    //         {
    //             str2.push_back(s.top());
    //             s.pop();
    //         }
    //         str2.push_back('.');
    //     }
    // }
    // while (!s.empty())
    // {
    //     str2.push_back(s.top());
    //     s.pop();
    // }
    // return str2;

    stack<int> s;
    int j = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '.')
        {
            s.push(str[i]);
        }
        else
        {
            while (!s.empty())
            {
                str[j] = s.top();
                s.pop();
                j++;
            }
            str[j] = '.';
            j = i + 1;
        }
    }
    while (!s.empty())
    {
        str[j] = s.top();
        s.pop();
        j++;
    }
    return str;
}

int minLength(string s, int n)
{
    int l = n;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "i : " << i << " " << endl;
        string str = s.substr(i, 2);
        cout << "str : " << str << endl;
        if (str == "12")
        {
            l = l - 2;
            i++;
            cout << "enter if" << endl;
        }
        else if (str == "21")
        {
            l = l - 2;
            i++;
            cout << "enter elseif1" << endl;
        }
        else if (str == "34")
        {
            l = l - 2;
            i++;
            cout << "enter elseif2" << endl;
        }
        else if (str == "43")
        {
            l = l - 2;
            i++;
            cout << "enter elseif3" << endl;
        }
        else if (str == "56")
        {
            l = l - 2;
            i++;
            cout << "enter elseif4" << endl;
        }
        else if (str == "65")
        {
            l = l - 2;
            i++;
            cout << "enter elseif5" << endl;
        }
        else if (str == "78")
        {
            l = l - 2;
            i++;
            cout << "enter elseif6" << endl;
        }
        else if (str == "87")
        {
            l = l - 2;
            i++;
            cout << "enter elseif7" << endl;
        }
        else if (str == "09")
        {
            l = l - 2;
            i++;
            cout << "enter elseif8" << endl;
        }
        else if (str == "90")
        {
            l = l - 2;
            i++;
            cout << "enter elseif9" << endl;
        }
        else
        {
            continue;
        }
    }
    return l;
}

vector<int> shortestToChar(string s, char c)
{
    vector<int> arr;
    vector<int> vec;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            arr.push_back(i);
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        vector<int> arr2;
        for (int j = 0; j < arr.size(); j++)
        {
            int diff = abs(i - arr[j]);
            arr2.push_back(diff);
        }
        sort(arr2.begin(), arr2.end());
        vec.push_back(arr2[0]);
    }
    return vec;
}

vector<string> commonChars(vector<string> &words)
{
    map<int, int> m;
    vector<string> s;

    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            m[words[i][j]]++;
            if (m[words[i][j]] % words.size() == 0)
            {
                string str(1, words[i][j]);
                s.push_back(str);
            }
        }
    }
    return s;
}

long long sqNum(long long N)
{
    long long cnt = 0;
    if (N < 4)
    {
        return 0;
    }
    for (int i = 4; i < N; i++)
    {
        cout << "i : " << i << endl;
        for (int j = 2; j * j <= N; j++)
        {
            cout << "j : " << j << endl;
            if (i % (j * j) == 0)
            {
                cout << "if " << endl;
                cnt++;
            }
        }
    }
    cout << "cnt : " << cnt << endl;
    return cnt;
}

int maximum69Number(int num)
{
    int n = num;
    int l = ceil(log10(num));
    int p = 0;
    int max = num;
    while (l > 0)
    {
        int rem = n % 10;
        int n2 = num;
        if (rem == 9)
        {
            n2 = n2 - pow(10, p) * 3;
        }
        if (rem == 6)
        {
            n2 = n2 + pow(10, p) * 3;
        }
        if (n2 > max)
        {
            max = n2;
        }
        n /= 10;
        p++;
        l--;
    }
    return max;
}

char ItoC(int n)
{
    char c = 48 + n;
    return c;
}

char getChar(int rem)
{
    switch (rem)
    {
    case 10:
        return 'a';
        break;
    case 11:
        return 'b';
        break;
    case 12:
        return 'c';
        break;
    case 13:
        return 'd';
        break;
    case 14:
        return 'e';
        break;
    case 15:
        return 'f';
        break;
    default:
        break;
    }
}

string toHex(int num)
{
    int rem = 0;
    string s;

    while (num)
    {
        rem = num % 16;
        if (rem > 9)
        {
            char c = getChar(rem);
            s.push_back(c);
        }
        else
        {
            char c = rem + 48;
            s.push_back(c);
        }
        num /= 16;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
    return s;
}

int evaluatePostfix(string s)
{
    stack<int> stk;
    int res = 0;
    int a, b;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '*' and s[i] != '+' and s[i] != '-' and s[i] != '/')
        {
            int num = s[i] - 48;
            stk.push(num);
        }
        else
        {
            switch (s[i])
            {
            case '*':
                a = stk.top();
                stk.pop();
                b = stk.top();
                stk.pop();
                res = a * b;
                stk.push(res);
                break;
            case '+':
                a = stk.top();
                stk.pop();
                b = stk.top();
                stk.pop();
                res = a + b;
                stk.push(res);
                break;
            case '-':
                a = stk.top();
                stk.pop();
                b = stk.top();
                stk.pop();
                res = b - a;
                stk.push(res);
                break;
            case '/':
                a = stk.top();
                stk.pop();
                b = stk.top();
                stk.pop();
                if (b != 0)
                {
                    if (b > a)
                    {
                        res = b / a;
                    }
                    else
                    {
                        res = a / b;
                    }
                }
                else
                {
                    res = 0;
                }
                stk.push(res);
                break;
            default:
                break;
            }
        }
    }
    return res;
}

void circularArray(char arr[], int n, int k)
{
    int i = k - 1;
    int j = n;
    while (j > 0)
    {
        i = i % n;
        cout << arr[i] << " ";
        j--;
        i++;
    }
}

string longestCommonPrefix(vector<string> &s)
{
    string pref = "";
    int i = 0;
    int j = 0;
    while (i < s[0].size() and j < s[0].size())
    {
        if (s[0][i] != s[1][i])
        {
            pref = s[0].substr(0, i);
            break;
        }
        i++;
    }
    if (i == s[0].size())
    {
        pref = s[0];
    }
    int k = 2;
    while (k < s.size())
    {
        if (s[k].empty())
        {
            pref = "";
            break;
        }
        int i = 0;
        while (i < s[k].size())
        {
            if (s[k][i] != pref[i])
            {
                pref = pref.substr(0, i);
                cout << pref << endl;
                break;
            }
            i++;
        }
        if (i == s[k].size())
        {
            pref = pref.substr(0, i);
        }

        k++;
    }
    cout << pref << endl;
    return pref;
}

int lengthOfLongestSubstring(string s)
{
    int j = 0;
    int l = 0;
    int mxl = 0;
    bool flag = false;
    string str(1, s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        flag = true;
        j = 0;
        while (j < str.size())
        {
            if (str[j] == s[i])
            {
                l = str.size();
                if (l > mxl)
                {
                    mxl = l;
                }
                flag = false;
                str = s[i];
                break;
            }
            j++;
        }
        if (flag)
        {
            str = str + s[i];
        }
        cout << "str : " << str << endl;
    }
    l = str.size();
    if (l > mxl)
    {
        mxl = l;
    }
    cout << mxl;
    return mxl;
}

long maximumSumSubarray(int K, vector<int> &arr, int N)
{
    int sum = 0;
    int i = 0;
    for (; i < K; i++)
    {
        sum += arr[i];
    }
    int max = sum;
    int j = K;
    while (j < N)
    {
        sum = sum + arr[j] - arr[j - K];
        if (sum > max)
        {
            max = sum;
        }
        j++;
    }
    return max;
}

vector<int> FirstNegative(vector<int> arr, int k)
{
    int n = arr.size();
    int j = 0;
    vector<int> vec;
    for (int i = 0; i < n - k; i++)
    {
        int k = 3;
        j = i;
        while (k--)
        {
            if (arr[j] < 0)
            {
                vec.push_back(arr[j]);
                break;
            }
            j++;
        }

        if (j == k)
        {
            vec.push_back(0);
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int longestValindString(string str)
{
    int n = str.length();
    stack<int> stk;
    stk.push(-1);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            stk.push(i);
        else
        {
            if (!stk.empty())
            {
                stk.pop();
            }
            if (!stk.empty())
                result = max(result, i - stk.top());
            else
                stk.push(i);
        }
    }
    return result;
}

class node2
{
    node2 *next;
    int data;
    node2(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int Number(string s)
{
    int i = 0;
    int num = 0;
    while (s.size() != 0)
    {
        int c = s[i] - 48;
        // cout<<"c : "<<c<<endl;
        num += pow(10, s.size() - i - 1) * c;
        // cout<<"num : "<<num<<endl;
        s = s.substr(1);
        // cout<<"s : "<<s<<endl;
    }
    return num;
}

string removeKDigit(string s, int k)
{
    int i = 0;
    int j = k;
    int min = INT_MAX;

    if (s.size() == k)
    {
        return "0";
    }

    while (j <= s.size())
    {
        string a = s.substr(0, i);
        string b = s.substr(j);
        string str = a + b;
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "str : " << str << endl;
        int num = Number(str);
        cout << "numGet : " << num << endl;
        if (num < min)
        {
            min = num;
        }
        cout << "min : " << min << endl;
        i++;
        j++;
    }
    cout << min;
    return to_string(min);
}

node *SumLinkedList(stack<int> s1, stack<int> s2)
{
    node *head = NULL;
    int carry = 0;
    int sum = 0;

    while (!s1.empty() and !s2.empty())
    {
        int a = s1.top();
        s1.pop();
        int b = s2.top();
        s2.pop();

        sum = carry + a + b;
        if (sum / 10)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
        {
            carry = 0;
        }
        node *n = new node(sum);
        n->next = head;
        head = n;
    }

    while (!s1.empty())
    {
        if (carry)
        {
            sum = s1.top() + carry;
        }
        else
        {
            sum = s1.top();
        }
        node *n = new node(sum);
        s1.pop();
        n->next = head;
        head = n;
        carry = 0;
    }
    while (!s2.empty())
    {
        if (carry)
        {
            sum = s2.top() + carry;
        }
        else
        {
            sum = s2.top();
        }
        while (sum)
        {
            sum = sum % 10;
            node *n = new node(sum);
            s2.pop();
            n->next = head;
            head = n;
        }

        carry = 0;
    }
    if (carry)
    {
        node *n = new node(carry);
        n->next = head;
        head = n;
    }
    return head;
}

vector<int> NextGreater(vector<int> arr)
{
    vector<int> vec;
    int n = arr.size();
    int i = 0;
    bool flag = true;
    int j = 0;
    while (i < n)
    {
        j = i + 1;
        j = j % n;
        flag = true;
        cout << "i : " << i << endl;
        int k = n;
        while (k > 1)
        {
            if (arr[j] > arr[i])
            {
                cout << "j_push : " << j << endl;
                vec.push_back(arr[j]);
                flag = false;
                break;
            }
            k--;
            j++;
            j = j % n;
            cout << "j : " << j << endl;
            cout << "k : " << k << endl;
        }
        if (flag)
        {
            cout << "flag : " << flag << endl;
            vec.push_back(-1);
        }
        i++;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return vec;
}

int binarySearch(vector<int> arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;
    sort(arr.begin(), arr.end());
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

void merge(int arr[], int p, int q, int r)
{

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> vec;
    for (int i = 0; i < nums1.size(); i++)
    {
        int j = nums2.size() - 1;
        stack<int> s;
        while (nums1[i] != nums2[j])
        {
            if (s.empty())
            {
                s.push(nums2[j]);
                vec.push_back(-1);
            }

            else if (s.top() > nums2[j])
            {
                s.pop();
                vec.push_back(s.top());
                s.push(nums2[j]);
            }
            else if (s.top() <= nums2[j])
            {
                while (!s.empty() and s.top() <= nums2[j])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    vec.push_back(-1);
                }
                else
                {
                    vec.push_back(s.top());
                }
                s.push(nums2[j]);
            }
            j--;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return vec;
}

bool find(unordered_set<char> s, char c)
{
    auto it = s.find(c);
    if (it == s.end())
    {
        return false;
    }
    if (*it)
    {
        return true;
    }
}

long long getMaxArea(vector<long long> arr)
{
    int len = 0;
    int area = 0;
    int maxArea = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int k = i + 1;
        int j = i - 1;
        while (k < arr.size() and arr[k] >= arr[i])
        {
            k++;
        }
        while (j >= 0 and arr[j] >= arr[i])
        {
            j--;
        }
        len = k - j - 1;
        area = arr[i] * len;
        maxArea = max(area, maxArea);
    }
    return maxArea;
}

vector<int> previous(vector<int> arr)
{
    stack<pair<int, int>> s;
    vector<pair<int, int>> vec;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.empty())
        {
            s.push({arr[i], i});
            vec.push_back({arr[i], -1});
        }
        else if (s.top().first <= arr[i])
        {
            vec.push_back({arr[i], s.top().second});
            s.push({arr[i], i});
        }
        else if (s.top().first > arr[i])
        {
            while (s.top().first > arr[i])
            {
                s.pop();
                if (s.empty())
                {
                    break;
                }
            }
            if (s.empty())
            {
                vec.push_back({arr[i], -1});
            }
            else
            {
                vec.push_back({arr[i], s.top().second});
            }
            s.push({arr[i], i});
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    return arr;
}

int minSubArrayLen(vector<int> &arr, int target)
{
    int l = 0, r = 0, len = 0;
    int sum = 0;
    int minLen = INT_MAX;

    while (r < arr.size())
    {
        if (l == r)
        {
            sum = arr[l];
        }
        if (sum >= target)
        {
            while (l < r)
            {
                sum = sum - arr[l];
                l++;
                if (sum >= target)
                {
                    len = r - l + 1;
                    minLen = min(len, minLen);
                    if (len == 1)
                    {
                        return minLen;
                    }
                }
            }
        }
        else
        {
            len = r - l + 1;
            r++;
            sum = sum + arr[r];
        }
    }
    if (minLen == INT_MAX)
    {
        minLen = 0;
    }
    return minLen;
}

double findMaxAverage(vector<int> &nums, int k)
{
    int i = 0, j = k - 1;
    double sum = 0, avg = 0, maxAvg = INT_MIN;
    ;
    for (i = 0; i < k; i++)
    {
        sum += nums[i];
    }
    cout << "sum : " << sum << endl;
    i = 0;
    while (j < nums.size())
    {
        avg = sum / k;
        maxAvg = max(avg, maxAvg);
        cout << "avg : " << avg << endl;
        cout << "maxAvg : " << maxAvg << endl;

        j++;
        i++;

        if (j < nums.size())
        {
            sum = sum + nums[j] - nums[i - 1];
            cout << "sum : " << sum << endl;
        }
    }
    cout << maxAvg;
    return maxAvg;
}

bool checkRepeat(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
        if (m[s[i]] > 1)
        {
            return false;
        }
    }
    return true;
}

int countGoodSubstrings(string s)
{
    int i = 0;
    int j = 2;
    int cnt = 0;
    while (j < s.size())
    {
        string str = s.substr(i, 3);
        bool check = checkRepeat(str);
        if (check)
        {
            cnt++;
        }
        j++;
        i++;
    }
    return cnt;
}

vector<int> slicing2(vector<int> &arr,
                     int X, int Y)
{
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;

    vector<int> result(Y - X + 1);

    copy(start, end, result.begin());

    return result;
}

int divisorSubstrings(int num, int k)
{
    string s = to_string(num);
    int i = 0;
    int j = k - 1;
    int cnt = 0;
    while (j < s.size())
    {
        string str = s.substr(i, k);
        cout << "str : " << str << endl;
        int n = stoi(str);
        cout << "n : " << n << endl;
        if (n != 0 and num % n == 0)
        {
            cnt++;
        }
        j++;
        i++;
    }
    cout << cnt;
    return cnt;
}

int check_white_black(string str)
{
    map<char, int> m;

    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
    }
    return m['W'];
}

int minimumRecolors(string s, int k)
{
    int i = 0, j = k - 1;
    int cnt = 0;
    int Min = INT_MAX;
    while (j < s.size())
    {
        string str = s.substr(i, k);
        int cnt = check_white_black(str);
        Min = min(cnt, Min);
        i++;
        j++;
    }
    return Min;
}

int minSubArrayLen(int target, vector<int> &arr)
{
    int sum = arr[0];
    int len = 0, minLen = INT_MAX;
    int l = 0, r = 0;

    while (r < arr.size())
    {
        if (sum < target)
        {
            r++;
            if (r < arr.size())
            {
                sum += arr[r];
            }
        }
        else if (sum > target)
        {
            len = r - l + 1;
            minLen = min(len, minLen);
            sum -= arr[l];
            l++;
        }
        else
        {
            len = r - l + 1;
            minLen = min(len, minLen);
            r++;
            if (r < arr.size())
            {
                sum += arr[r];
            }
        }
    }
    if (minLen == INT_MAX)
    {
        return 0;
    }
    return minLen;
}

bool check_anagram(string s, map<char, int> p)
{
    map<char, int> ms;

    for (int i = 0; i < s.size(); i++)
    {
        ms[s[i]]++;
    }

    for (auto i : ms)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "----" << endl;
    for (auto i : p)
    {
        cout << i.first << " " << i.second << endl;
    }

    int k = ms.size();
    auto it = ms.begin();
    auto it2 = p.begin();

    while (k > 0)
    {

        if ((*it).first == (*it2).first)
        {
            if ((*it).second != (*it2).second)
            {
                return false;
            }
        }
        ++it;
        ++it2;
        k--;
    }
    return true;
}

bool repeat_char(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
        if (m[s[i]] > 1)
        {
            return true;
        }
    }
    return false;
}

int lengthOfLongestSubstring_(string str)
{
    if (str.size() == 1)
    {
        return 1;
    }
    if (str.size() == 0)
    {
        return 0;
    }
    cout << str.size() << endl;
    int i = 0;
    int j = 1;
    int len = 0;
    int maxLen = INT_MIN;
    while (j <= str.size())
    {

        string s = str.substr(i, j - i);
        bool check = repeat_char(s);
        cout << "s : " << s << endl;
        cout << "check : " << check << endl;

        if (check)
        {
            i++;
        }
        else
        {
            len = j - i;
            maxLen = max(maxLen, len);
            cout << "len : " << len << endl;
            cout << "maxLen : " << maxLen << endl;
            j++;
        }
    }

    return maxLen;
}

string remove_duplicates(string s)
{
    cout << "s : " << s << endl;
    if (s.size() == 1)
    {
        ;
        return s;
    }
    string newStr = remove_duplicates(s.substr(1));
    if (s[0] == newStr[0])
    {
        newStr = newStr.substr(1);
        cout << "newStr1 : " << newStr << endl;
    }
    else
    {
        newStr = s[0] + newStr;
        cout << "newStr2 : " << newStr << endl;
    }
    return newStr;
}

bool areAnagram(string str1, string str2)
{
    int count[256] = {0};
    int i;

    for (i = 0; str1[i] && str2[i]; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    if (str1[i] || str2[i])
        return false;

    for (i = 0; i < 256; i++)
        if (count[i])
            return false;
    return true;
}

vector<int> findAnagrams(string s, string p)
{
    int k = p.size();
    int i = 0, j = k - 1;
    vector<int> arr;
    while (j < s.size())
    {
        string str = s.substr(i, k);
        bool check = areAnagram(str, p);
        if (check)
        {
            arr.push_back(i);
        }
        j++;
        i++;
    }
    return arr;
}

int maxVowels(string s, int k)
{
    int cnt = 0;
    int maxc = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
        {
            cnt++;
        }
    }
    maxc = max(maxc, cnt);
    int v = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
        {
            v = i;
            break;
        }
    }

    int i = 1;
    int j = k;
    while (j < s.size())
    {
        if (i > v)
        {
            cnt--;
            maxc = max(maxc, cnt);
            for (int x = i; x <= j; x++)
            {
                if (s[x] == 'a' or s[x] == 'e' or s[x] == 'i' or s[x] == 'o' or s[x] == 'u')
                {
                    v = x;
                    break;
                }
                v = x;
            }
        }
        if (s[j] == 'a' or s[j] == 'e' or s[j] == 'i' or s[j] == 'o' or s[j] == 'u')
        {
            cnt++;
            maxc = max(maxc, cnt);
        }
        i++;
        j++;
    }
    cout << maxc;
    return maxc;
}

string transform(string S)
{

    int cnt = 1;
    string s = "";
    for (int i = 0; i < S.size(); i++)
    {
        if (tolower(S[i]) == tolower(S[i + 1]))
        {
            cnt++;
        }
        else
        {
            string str = to_string(cnt) + string(1, S[i]);
            s = s + str;
            cnt = 1;
        }
    }
    return s;
}

string reverseEqn(string s)
{
    stack<string> st;
    int i = 0;
    int j = 0;

    while (j < s.size())
    {
        while (j <= s.size() and s[j] != '*' and s[j] != '/' and s[j] != '-' and s[j] != '+')
        {
            j++;
        }
        string str = s.substr(i, j - i);
        st.push(str);
        if (j < s.size())
        {
            st.push(string(1, s[j]));
        }
        j++;
        i = j;
    }
    string str = "";
    while (!st.empty())
    {
        str += st.top();
        st.pop();
    }
    return str;
}

int findMaxDiff(vector<int> arr)
{
    stack<int> s;
    vector<int> left;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            left.push_back(0);
        }
        else if (s.top() < arr[i])
        {
            left.push_back(s.top());
            s.push(arr[i]);
        }
        else if (s.top() >= arr[i])
        {
            while (!s.empty() and s.top() >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                s.push(arr[i]);
                left.push_back(0);
            }
            else
            {
                left.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }

    while (!s.empty())
    {
        s.pop();
    }

    vector<int> right;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            right.push_back(0);
        }
        else if (arr[i] > s.top())
        {
            right.push_back(s.top());
            s.push(arr[i]);
        }
        else if (arr[i] <= s.top())
        {
            while (!s.empty() and arr[i] <= s.top())
            {
                s.pop();
            }
            if (s.empty())
            {
                right.push_back(0);
                s.push(arr[i]);
            }
            else
            {
                right.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }
    reverse(right.begin(), right.end());
    int maxdiff = INT_MIN;
    for (int i = 0; i < right.size(); i++)
    {
        int diff = abs(right[i] - left[i]);
        maxdiff = max(diff, maxdiff);
    }
    return maxdiff;
}

int evaluatePostfix2(string str)
{
    stack<char> s;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (s.empty())
        {
            cout << "if" << endl;
            s.push(str[i]);
        }
        else if (str[i] == '+' or str[i] == '-' or str[i] == '/' or str[i] == '*')
        {
            cout << "elseif" << endl;
            int a = s.top() - 48;
            s.pop();
            int b = s.top() - 48;
            s.pop();
            cout << "a , b : " << a << " " << b << endl;
            switch (str[i])
            {
            case '+':
                sum = a + b;
                break;
            case '-':
                sum = b - a;
                break;
            case '*':
                sum = a * b;
                break;
            case '/':
                sum = a / b;
                break;
            }
            char c = sum + 48;
            cout << "sum : " << sum << endl;
            s.push(c);
        }
        else
        {
            cout << "esle" << endl;
            s.push(str[i]);
        }
    }
    return sum;
}

string removeOuterParentheses(string s)
{
    int cnt = 0;
    string str;
    ;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (cnt != 0)
            {
                str.push_back(s[i]);
            }
            cnt++;
        }
        else
        {
            cnt--;
            if (cnt != 0)
            {
                str.push_back(s[i]);
            }
        }
    }
    return str;
}

string removeOuterParentheses2(string s)
{
    stack<int> S;
    int cnt = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            cnt++;
            if (cnt > 0)
            {
                S.push(s[i]);
            }
        }
        if (s[i] == ')')
        {
            cnt--;
            if (cnt >= 0)
            {
                S.push(s[i]);
            }
        }
    }
    string str;

    while (!S.empty())
    {
        str.push_back(S.top());
        S.pop();
    }
    return str;
}

vector<int> finalPrices(vector<int> &arr)
{
    stack<int> s;
    vector<int> vec;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            vec.push_back(arr[i]);
        }
        else if (arr[i] >= s.top())
        {
            int price = arr[i] - s.top();
            vec.push_back(price);
            s.push(arr[i]);
        }
        else
        {
            while (!s.empty() and arr[i] < s.top())
            {
                s.pop();
            }
            if (s.empty())
            {
                vec.push_back(arr[i]);
                s.push(arr[i]);
            }
            else
            {
                int price = arr[i] - s.top();
                vec.push_back(price);
                s.push(arr[i]);
            }
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return vec;
}

void prints(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void printq(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    stack<int> s;
    queue<int> q;
    int cnt = 0;
    for (int i = 0; i < students.size(); i++)
    {
        q.push(students[i]);
    }
    for (int i = sandwiches.size() - 1; i >= 0; i--)
    {
        s.push(sandwiches[i]);
    }

    while (!q.empty())
    {
        if (q.front() ^ s.top())
        {
            int x = q.front();
            q.pop();
            q.push(x);
            if (cnt >= q.size())
            {
                break;
            }
            cnt++;
        }
        else
        {
            cnt = 0;
            q.pop();
            s.pop();
        }
    }
    return cnt;
}
void print_arr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int largestHistogram(long long arr[], int n)
{
    stack<pair<int, int>> s1;
    stack<pair<int, int>> s2;
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < n; i++)
    {
        if (s1.empty())
        {

            s1.push({arr[i], i});
            left.push_back(-1);
        }
        else if (s1.top().first < arr[i])
        {
            left.push_back(s1.top().second);
            s1.push({arr[i], i});
        }
        else if (s1.top().first >= arr[i])
        {
            while (!s1.empty() and s1.top().first >= arr[i])
            {
                s1.pop();
            }
            if (s1.empty())
            {
                s1.push({arr[i], i});
                left.push_back(-1);
            }
            else
            {
                left.push_back(s1.top().second);
                s1.push({arr[i], i});
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s2.empty())
        {
            s2.push({arr[i], i});
            right.push_back(n);
        }
        else if (arr[i] > s2.top().first)
        {
            right.push_back(s2.top().second);
            s2.push({arr[i], i});
        }
        else if (arr[i] <= s2.top().first)
        {
            while (!s2.empty() and arr[i] <= s2.top().first)
            {
                s2.pop();
            }
            if (s2.empty())
            {
                right.push_back(n);
                s2.push({arr[i], i});
            }
            else
            {
                right.push_back(s2.top().second);
                s2.push({arr[i], i});
            }
        }
    }
    reverse(right.begin(), right.end());
    print_arr(right);
    print_arr(left);

    int area = 0;
    for (int i = 0; i < right.size(); i++)
    {
        int diff = abs(right[i] - left[i] - 1) * arr[i];
        cout << diff << ":";
        area = max(area, diff);
        cout << area << " ";
    }
    return area;
}

void reorderList2(node *head)
{
    stack<int> s;
    queue<int> q;
    node *temp = head;
    int cnt = 0;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    temp = head;

    while (2 * cnt <= len)
    {
        q.push(temp->data);
        temp = temp->next;
        cnt++;
    }
    while (temp != NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }

    prints(s);
    printq(q);
    q.pop();
    cnt = 1;
    temp = head;
    while (!q.empty() and !s.empty())
    {
        if (cnt & 1)
        {
            node *n = new node(s.top());
            temp->next = n;
            temp = n;
            s.pop();
        }
        else
        {
            node *n = new node(q.front());
            temp->next = n;
            temp = n;

            q.pop();
        }
        cnt++;
    }
    while (!q.empty())
    {
        node *n = new node(q.front());
        temp->next = n;
        temp = n;
        q.pop();
    }
    while (!s.empty())
    {
        node *n = new node(s.top());
        temp->next = n;
        temp = n;
        s.pop();
    }
    print_(head);
}

int celebrity(vector<vector<int>> &M, int n)
{
    vector<int> arr1;
    vector<int> arr2;

    for (int i = 0; i < M.size(); i++)
    {
        for (int j = 0; j < M[0].size(); j++)
        {
            if (M[i][j] == 1)
            {
                    arr1.push_back(i);
                    arr2.push_back(j);
            }
        }
    }

    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                return -1;
            }
        }
    }
    return arr2[0];
}




int main()
{
    system("cls");
    vector<int> arr(26,0);
    string s = "";
    int k=3;
    int cnt=0;
    int ans=0;
    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']++;
        if(i>=k-1){
            cnt=0;
            arr[s[i-k]-'a']--;
            for(auto i:arr){
                if(i){
                    cnt++;
                }
            }
            if(cnt==k-1){
                ans++;
            }
        }
    }

    cout<<"ans : "<<ans;    

    return 0;
}
