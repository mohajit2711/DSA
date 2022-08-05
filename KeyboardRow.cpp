class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		string a="qwertyuiopQWERTYUIOP",b="asdfghjklASDFGHJKL",c="zxcvbnmZXCVBNM";

		unordered_map<char,int>ump1,ump2,ump3;

		for(auto it:a)
		{
			ump1[it]++;
		}

		vector<string>ans;

		for(auto it:b)
		{
			ump2[it]++;
		}
		for(auto it:c)
		{
			ump3[it]++;
		}

		for(int i=0;i<words.size();i++)
		{
			string s=words[i];
			int idx=0;
			bool flag=true;
			if(ump1.find(s[idx])!=ump1.end())
			{
				for(auto it:s)
				{
					if(ump1.find(it)==ump1.end())
					{
						flag=false;
					}
				}
			}
			else if(ump2.find(s[idx])!=ump2.end())
			{
				 for(auto it:s)
					{
						if(ump2.find(it)==ump2.end())
						{
							flag=false;
						}
					}
			}
			else
			{
				 for(auto it:s)
					{
						if(ump3.find(it)==ump3.end())
						{
							flag=false;
						}
					}
			}


			if(flag==true)
			{
				ans.push_back(s);
			}
		}


		return ans;
	}
};
