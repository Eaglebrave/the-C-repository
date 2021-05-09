#include <bits/stdc++.h>
using namespace std;
const long long bignum = 10000000000000000ll;
int totday, buy, fd, fc, sd, sc,

    ans; //总天数、买几、快洗天慢洗、快洗费慢洗费
struct {
	int need, buy, fwash, swash, fuse, suse;





} cnt[101]; //目标输出数组
struct {
	int date, store;
} que[101];

long long getval(int totbuy) {
	long long totprice = totbuy;
	totprice *= buy; //购买总费用
	cnt[0].buy = cnt[0].need ;
	totbuy -= cnt[0].need ;
	cnt[0].fwash = cnt[0].swash = 0;
	int head = 0, tail = -1;
	for (int i = 1; i < totday; i++) {
		if (i >= fd) {
			que[++tail].date = i - fd;
			que[tail].store = cnt[i - fd].need ;
		}
		cnt[i].fwash = cnt[i].swash = cnt[i].fuse = cnt[i].suse = 0;
		int remain;
		if (totbuy >= cnt[i].need ) {
			totbuy -= cnt[i].need ;
			cnt[i].buy = cnt[i].need ;
			remain = 0;
			continue;
		}
		remain = cnt[i].need - totbuy;
		cnt[i].buy = totbuy;
		totbuy = 0;
		while (remain && head <= tail && que[head].date <= i - sd) {
			int use = remain;
			if (use > que[head].store )
				use = que[head].store ;
			cnt[que[head].date].swash += use;
			cnt[i].suse += use;
			totprice += use * sc;
			remain -= use;
			que[head].store -= use;
			if (!que[head].store )
				head++;
		}while (remain && head <= tail) {
			int use = remain;
			if (use > que[tail].store )
				use = que[tail].store ;
			cnt[que[tail].date].fwash += use;
			cnt[i].fuse += use;
			totprice += use * fc;
			remain -= use;
			que[tail].store -= use;
			if (!que[tail].store )
				tail--;
		}
		if (remain)
			return bignum;
	}
	return totprice;
}

int main() {
	cin >> totday; //输入天数
	int base = 0, sum = 0;
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < totday; i++) {
		cin >> cnt[i].need ; //每天需求
		if (cnt[i].need > base)
			base = cnt[i].need ; //某天最大需求
		sum += cnt[i].need ;
	}//总需求
	cin >> buy >> fd >> fc >> sd >> sc; //输入买的钱 快洗天 慢洗天 快慢洗用到
	int l = base, r = sum;
	long long left = getval(l), right = getval(r);
	while (r - l >= 3) {
		int delta = (r - l) / 3;
		int a = l + delta, b = r - delta;
		long long x = getval(a);
		long long y = getval(b);
		if (left <= x && x <= y || left >= x && y >= x) {
			r = b;
			right = y;
		} //钱多了r就变小一else { l=a;left=x;}}
		long long min = left;
		ans = l;
			for (int i = l + 1; i <= r; i++) {
			long long tmp = getval(i);
			if (tmp < min) {
				min = tmp;
				ans = i;
			}
		}
		printf("" % lld / n"", getval(ans));
		for (int i = 0; i < totday; i++)
			printf(“ % d % d % d % d % d % d\n”, cnt[i].need, cnt[i].buy, cnt[i].fwash, cnt[i].swash, cnt[i].fuse, cnt[i].suse);
		return 0;
	}