#include <bits/stdc++.h>

using namespace std;

char s[] = "010102010202010303010302010203010403010402010204010404010402010204010303010302010203010504010502010205010504010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010605010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010706010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010706010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010607010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010806010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010807010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010807010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010608010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010806010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010608010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010706010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010708010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010607010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010906010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010907010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010908010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010609010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010906010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010908010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010609010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010706010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010709010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010607010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010906010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010907010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010609010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010906010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010904010902010209010905010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010904010902010209010909010902010209010303010302010203010909010902010209010909010902010209010303010302010203010409010402010204010404010402010204010303010302010203010504010502010205010509010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010609010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010706010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010709010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010607010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010806010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010807010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010809010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010608010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010806010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010804010802010208010805010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010804010802010208010808010802010208010303010302010203010808010802010208010808010802010208010303010302010203010408010402010204010404010402010204010303010302010203010504010502010205010508010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010608010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010706010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010708010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010704010702010207010705010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010704010702010207010707010702010207010303010302010203010707010702010207010707010702010207010303010302010203010407010402010204010404010402010204010303010302010203010504010502010205010507010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010604010602010206010605010602010206010303010302010203010606010602010206010607010602010206010303010302010203010406010402010204010404010402010204010303010302010203010604010602010206010606010602010206010303010302010203010606010602010206010606010602010206010303010302010203010406010402010204010404010402010204010303010302010203010504010502010205010506010502010205010303010302010203010505010502010205010505010502010205010303010302010203010405010402010204010404010402010204010303010302010203010";

int main() {
  //cerr << strlen(s) << endl;
  assert(strlen(s) == 19689);
  int n = strlen(s);
  for (int i = 1; i <= n; i++) {
    for (int j = 1, k = i-1; j <= k; j++, k--)
      if (s[j-1] == s[i-1] && s[k-1] == s[i-1]) {
        cerr << i << " " << j << " " << k << endl;
      }
  }
  return 0;
}