/*
 * caution:
 * 日本語の文字化けが発生しています。
 * 擿
 * 北斗支政放斬断旬旺故明時
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPrime(int x);

int main(int argc,char *argv[]){
  int i;
  int N=10;
  for(i=1;i<=N;i++){
    printf("%2d:%d\n",i,isPrime(i));
  }
  return EXIT_SUCCESS;
}

// isPrime()関数
// 仮引数xが、素数ならtrue、合成数ならfalseを返す
bool isPrime(int x){
  if(x<2){
    return false;
  }else if(x==2){
    return true;
  }else if(2<x){
    int i;
	if(x%2==0){
	  return false;
	}
	for(i=3;i*i<=x;i+=2){
	  if(x%i==0){
	    return false;
      }
    }
  }
  return true;
}

/* Unicode
64F0  擰  擱  擲  擳  擴  擵  擶  擷  擸  擹  擺  擻  擼  擽  擾  擿
-----
6500  攀  攁  攂  攃  攄  攅  攆  攇  攈  攉  攊  攋  攌  攍  攎  攏
6510  攐  攑  攒  攓  攔  攕  攖  攗  攘  攙  攚  攛  攜  攝  攞  攟
6520  攠  攡  攢  攣  攤  攥  攦  攧  攨  攩  攪  攫  攬  攭  攮  支
6530  攰  攱  攲  攳  攴  攵  收  攷  攸  改  攺  攻  攼  攽  放  政
6540  敀  敁  敂  敃  敄  故  敆  敇  效  敉  敊  敋  敌  敍  敎  敏
6550  敐  救  敒  敓  敔  敕  敖  敗  敘  教  敚  敛  敜  敝  敞  敟
6560  敠  敡  敢  散  敤  敥  敦  敧  敨  敩  敪  敫  敬  敭  敮  敯
6570  数  敱  敲  敳  整  敵  敶  敷  數  敹  敺  敻  敼  敽  敾  敿
6580  斀  斁  斂  斃  斄  斅  斆  文  斈  斉  斊  斋  斌  斍  斎  斏
6590  斐  斑  斒  斓  斔  斕  斖  斗  斘  料  斚  斛  斜  斝  斞  斟
65A0  斠  斡  斢  斣  斤  斥  斦  斧  斨  斩  斪  斫  斬  断  斮  斯
65B0  新  斱  斲  斳  斴  斵  斶  斷  斸  方  斺  斻  於  施  斾  斿
65C0  旀  旁  旂  旃  旄  旅  旆  旇  旈  旉  旊  旋  旌  旍  旎  族
65D0  旐  旑  旒  旓  旔  旕  旖  旗  旘  旙  旚  旛  旜  旝  旞  旟
65E0  无  旡  既  旣  旤  日  旦  旧  旨  早  旪  旫  旬  旭  旮  旯
65F0  旰  旱  旲  旳  旴  旵  时  旷  旸  旹  旺  旻  旼  旽  旾  旿
-----
6600  昀  昁  昂  昃  昄  昅  昆  昇  昈  昉  昊  昋  昌  昍  明  昏
*/
