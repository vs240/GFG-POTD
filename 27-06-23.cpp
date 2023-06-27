class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        vector<int> res1,res2;
        int maxi=-1e9;
        while(head1)
        {
        maxi=max(maxi,head1->data);
        res1.push_back(head1->data);
        head1=head1->next;
        }
        while(head2)
        {
             maxi=max(maxi,head2->data);
            res2.push_back(head2->data);
            head2=head2->next;
        }
        struct Node * res=new struct Node(0);
        struct Node * temp=res;
        int l=0,r=0;
        int n=res1.size();
        int m=res2.size();
        vector<int> hj(maxi+1,0);
        
        for(int i=0;i<n;i++)
        {
            hj[res1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            hj[res2[i]]++;
        }
        while(l<hj.size())
        {
            if(hj[l]>=1)
            {
            struct Node*yt=new struct Node(l);
            res->next=yt;
            res=res->next;
            
            }
            l++;
        }
        return temp->next;
    }
};