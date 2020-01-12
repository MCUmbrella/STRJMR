#include<iostream>
#include<sys/time.h>
#include<cstdlib>
#include<locale>
#include<vector>
using namespace std;
wchar_t A[]={L'Ꭿ', L'∀', L'₳', L'Ǻ', L'Ǡ', L'Ắ', L'Ằ', L'Ẵ', L'Ä', L'Å', L'À', L'Ǟ', L'Ⱥ', L'ᗩ', L'Ã', L'Â', L'Á'};
wchar_t a[]={L'å', L'ä', L'ª', L'ẵ', L'ẳ', L'ằ', L'ắ', L'ά', L'α', L'ǻ', L'@', L'á', L'à', L'â', L'ã'};
wchar_t B[]={L'Ɓ', L'ᗿ', L'ᗾ', L'ᗽ', L'ᗷ', L'ß', L'฿', L'β', L'Ᏸ', L'ℬ', L'ᛔ', L'ᗹ', L'ᗸ', L'Ᏸ'};
wchar_t b[]={L'␢', L'ხ', L'ƀ', L'Ђ'};
wchar_t C[]={L'Ꮸ', L'⊂', L'Ḉ', L'Ć', L'Ĉ', L'Ċ', L'Č', L'Ç', L'ℂ', L'☾', L'Ⴚ', L'₡'};
wchar_t c[]={L'¢', L'ḉ', L'č', L'ć', L'ς', L'ĉ', L'ċ', L'ç', L'¢'};
wchar_t D[]={L'ᚧ', L'ᚦ', L'Đ', L'Ď', L'Ɗ', L'ᗫ'};
wchar_t d[]={L'ȡ', L'₫', L'đ', L'ď'};
wchar_t E[]={L'∑', L'É', L'È', L'Ê', L'Έ', L'Ě', L'Ę', L'Ė', L'Ē', L'ℰ', L'Ễ', L'Ể', L'Ề', L'Ế'};
wchar_t e[]={L'è', L'é', L'ê', L'ę', L'ě', L'ė', L'ē', L'६', L'℮', L'ҿ', L'Ҿ', L'ε', L'έ', L'є'};
wchar_t F[]={L'ᚪ', L'ᚩ', L'Ḟ', L'₣', L'ℱ'};
wchar_t f[]={L'ᚨ', L'ᶂ', L'ḟ', L'∮', L'ƒ'};
wchar_t G[]={L'₲', L'Ģ', L'Ġ', L'Ğ', L'Ĝ', L'Ǥ', L'Ꮆ', L'Ꮹ'};
wchar_t g[]={L'ᶃ', L'ģ', L'ġ', L'ğ', L'ĝ', L'ǥ', L'ℊ'};
wchar_t H[]={L'ਮ', L'Ḩ', L'廾', L'Ή', L'Ħ', L'Ĥ', L'ዙ', L'ℋ', L'ℍ'};
wchar_t h[]={L'♄', L'ḩ', L'Һ', L'ђ', L'Ћ', L'ħ', L'Ꮵ', L'ℏ', L'ℌ', L'ℎ'};
wchar_t I[]={L'Į', L'İ', L'Ĭ', L'Ī', L'Ĩ', L'Í', L'Ì', L'Î', L'Ί', L'Ï'};
wchar_t i[]={L'ĭ', L'ī', L'ĩ', L'ΐ', L'ϊ', L'î', L'í', L'ì', L'ι', L'ί', L'Ꭵ', L'į'};
wchar_t J[]={L'Ĵ', L'ℑ', L'ჟ'};
wchar_t j[]={L'ɉ', L'ĵ'};
wchar_t K[]={L'Ҡ', L'Ҝ', L'Ķ', L'Ќ', L'Ꮶ', L'₭'};
wchar_t k[]={L'ҡ', L'ᶄ', L'ҝ', L'ķ', L'ќ', L'k'};
wchar_t L[]={L'Ḽ', L'Ľ', L'Ł', L'Ļ', L'Ĺ', L'Ŀ', L'Ŀ'};
wchar_t l[]={L'ȴ', L'ḽ', L'ľ', L'ł'};
wchar_t M[]={L'ጠ', L'ᛖ', L'爪', L'ᙢ', L'ᗰ', L'Ḿ', L'ℳ'};
wchar_t m[]={L'₥', L'ḿ', L'ᶆ', L'ʍ'};
wchar_t N[]={L'₦', L'ℵ', L'Ň', L'Ņ', L'Ń', L'Ŋ', L'Ñ', L'ℕ'};
wchar_t n[]={L'ȵ', L'ŉ', L'ň', L'ņ', L'ń', L'ŋ', L'ή', L'ח', L'ñ', L'η'};
wchar_t O[]={L'Ọ', L'Õ', L'Ö', L'Ô', L'Ò', L'Ó', L'Θ', L'Ǿ', L'Ό', L'ტ', L'Ō', L'Ő', L'Ợ', L'Ổ', L'Ớ', L'Ờ', L'Ở', L'Ό', L'Ø', L'Ọ'};
wchar_t o[]={L'õ', L'ö', L'ô', L'ò', L'ǿ', L'σ', L'ό', L'ó', L'٥', L'ℴ', L'ő', L'ō', L'ổ', L'ø', L'ợ', L'ọ', L'ớ', L'ờ'};
wchar_t P[]={L'Ҏ', L'₽', L'☧', L'₱', L'尸', L'Ꭾ', L'ℙ'};
wchar_t p[]={L'ҏ', L'թ', L'ᖘ', L'ᶈ', L'Ꮅ', L'ρ', L'ρ'};
wchar_t Q[]={L'ჹ', L'ǭ', L'Ǭ', L'Q', L'ℚ'};
wchar_t q[]={L'૧', L'q'};
wchar_t R[]={L'尺', L'Ꮢ', L'Ŕ', L'Ŗ', L'Ř', L'ᖇ', L'℟', L'ℛ', L'ℜ', L'ℝ', L'ᚱ'};
wchar_t r[]={L'ᶉ', L'ŕ', L'ŗ', L'ř'};
wchar_t S[]={L'Տ', L'ֆ', L'$', L'Ŝ', L'Ş', L'Š', L'Ṧ', L'Ꮥ', L'Ś'};
wchar_t s[]={L'క', L'ŝ', L'ş', L'š', L'ś', L'ȿ', L'ṧ'};
wchar_t T[]={L'⍡', L'₮', L'Ṫ', L'干', L'Ŧ', L'Ť', L'Ţ', L'T', L'₸'};
wchar_t t[]={L'Ꮏ', L'ṫ', L'ŧ', L'ť', L'ţ', L'τ', L't'};
wchar_t U[]={L'Ü', L'Û', L'Ú', L'Ù', L'Ự', L'Ừ', L'Ủ', L'Ũ', L'ᙀ', L'∪', L'Ա', L'Ů', L'Ű', L'Ų', L'Ŭ', L'Ū', L'Ũ'};
wchar_t u[]={L'ü', L'ự', L'ữ', L'ử', L'û', L'ù', L'ΰ', L'ú', L'ϋ', L'ύ', L'น', L'ů', L'ű', L'ų', L'ŭ', L'ū', L'ũ', L'ừ'};
wchar_t V[]={L'℣', L'Ṽ', L'Ꮙ', L'√', L'∨', L'✓'};
wchar_t v[]={L'ᶌ', L'ṽ'};
wchar_t W[]={L'ฝ', L'Ẅ', L'ᙡ', L'ᗯ', L'Ꮃ', L'Ꮤ', L'Ŵ', L'Ẁ', L'Ẃ', L'₩'};
wchar_t w[]={L'ಭ', L'ಎ', L'ѡ', L'ฬ', L'ŵ', L'ω', L'ώ', L'ẅ', L'ẁ', L'ẃ', L'พ', L'ผ'};
wchar_t X[]={L'Ẍ', L'᙭', L'χ'};
wchar_t x[]={L'א', L'ᶍ', L'ẍ', L'×'};
wchar_t Y[]={L'￥', L'ϒ', L'Ẏ'};
wchar_t y[]={L'Ⴘ', L'௶', L'ע', L'ɤ', L'ẏ', L'Ꮍ', L'Ꭹ', L'ɣ', L'ϒ'};
wchar_t Z[]={L'Ꮓ', L'Ẑ', L'乙', L'ℤ'};
wchar_t z[]={L'ɀ', L'ẑ'};
static string tget(void)
{
    string defaultTime = "19700101000000000";
    try
    {
        struct timeval curTime;
        gettimeofday(&curTime, NULL);
        int milli = curTime.tv_usec / 1000;

        char buffer[80] = {0};
        struct tm nowTime;
        localtime_r(&curTime.tv_sec, &nowTime);//tsafe
        strftime(buffer, sizeof(buffer), "%Y%m%d%H%M%S", &nowTime);

        char currentTime[84] = {0};
        snprintf(currentTime, sizeof(currentTime), "%s%03d", buffer, milli);
        return (string)(currentTime);
    }
    catch(const std::exception& e)
    {
        return (string)(defaultTime);
    }
}

wchar_t rep(wchar_t ab)
{
  switch(ab)
  {
   case 'A':
    ab=A[rand()%sizeof(A)/4];
    break;
   case 'a':
    ab=a[rand()%sizeof(a)/4];
    break;
   case 'B':
    ab=B[rand()%sizeof(B)/4];
    break;
   case('b'):
    ab=b[rand()%sizeof(b)/4];
    break;
   case 'C':
    ab=C[rand()%sizeof(C)/4];
    break;
   case('c'):
    ab=c[rand()%sizeof(c)/4];
    break;
   case('D'):
    ab=D[rand()%sizeof(D)/4];
    break;
   case('d'):
    ab=d[rand()%sizeof(d)/4];
    break;
   case('E'):
    ab=E[rand()%sizeof(E)/4];
    break;
   case('e'):
    ab=e[rand()%sizeof(e)/4];
    break;
   case('F'):
    ab=F[rand()%sizeof(F)/4];
    break;
   case('f'):
    ab=f[rand()%sizeof(f)/4];
    break;
   case('G'):
    ab=G[rand()%sizeof(G)/4];
    break;
   case('g'):
    ab=g[rand()%sizeof(g)/4];
    break;
   case('H'):
    ab=H[rand()%sizeof(H)/4];
    break;
   case('h'):
    ab=h[rand()%sizeof(h)/4];
    break;
   case('I'):
    ab=I[rand()%sizeof(I)/4];
    break;
   case('i'):
    ab=i[rand()%sizeof(i)/4];
    break;
   case('J'):
    ab=J[rand()%sizeof(J)/4];
    break;
   case('j'):
    ab=j[rand()%sizeof(j)/4];
    break;
   case('K'):
    ab=K[rand()%sizeof(K)/4];
    break;
   case('k'):
    ab=k[rand()%sizeof(k)/4];
    break;
   case('L'):
    ab=L[rand()%sizeof(L)/4];
    break;
   case('l'):
    ab=l[rand()%sizeof(l)/4];
    break;
   case('M'):
    ab=M[rand()%sizeof(M)/4];
    break;
   case('m'):
    ab=m[rand()%sizeof(m)/4];
    break;
   case('N'):
    ab=N[rand()%sizeof(N)/4];
    break;
   case('n'):
    ab=n[rand()%sizeof(n)/4];
    break;
   case('O'):
    ab=O[rand()%sizeof(O)/4];
    break;
   case('o'):
    ab=o[rand()%sizeof(o)/4];
    break;
   case('P'):
    ab=P[rand()%sizeof(P)/4];
    break;
   case('p'):
    ab=p[rand()%sizeof(p)/4];
    break;
   case('Q'):
    ab=Q[rand()%sizeof(Q)/4];
    break;
   case('q'):
    ab=q[rand()%sizeof(q)/4];
    break;
   case('R'):
    ab=R[rand()%sizeof(R)/4];
    break;
   case('r'):
    ab=r[rand()%sizeof(r)/4];
    break;
   case('S'):
    ab=S[rand()%sizeof(S)/4];
    break;
   case('s'):
    ab=s[rand()%sizeof(s)/4];
    break;
   case('T'):
    ab=T[rand()%sizeof(T)/4];
    break;
   case('t'):
    ab=t[rand()%sizeof(t)/4];
    break;
   case('U'):
    ab=U[rand()%sizeof(U)/4];
    break;
   case('u'):
    ab=u[rand()%sizeof(u)/4];
    break;
   case('V'):
    ab=V[rand()%sizeof(V)/4];
    break;
   case('v'):
    ab=v[rand()%sizeof(v)/4];
    break;
   case('W'):
    ab=W[rand()%sizeof(W)/4];
    break;
   case('w'):
    ab=w[rand()%sizeof(w)/4];
    break;
   case('X'):
    ab=X[rand()%sizeof(X)/4];
    break;
   case('x'):
    ab=x[rand()%sizeof(x)/4];
    break;
   case('Y'):
    ab=Y[rand()%sizeof(Y)/4];
    break;
   case('y'):
    ab=y[rand()%sizeof(y)/4];
    break;
   case('Z'):
    ab=Z[rand()%sizeof(Z)/4];
    break;
   case('z'):
    ab=z[rand()%sizeof(z)/4];
    break;
   }
  return ab;
}

int main(int argc, char **argv)
{
  ios_base::sync_with_stdio(false);
  locale loc("C.UTF-8");
  wcin.imbue(loc);
  wcout.imbue(loc);
  srand(stoull(tget()));
  string str0("");
  vector<wchar_t> vec0{};
  for(int $a=1; $a<argc; $a++){str0+=argv[$a];str0+=' ';};
  for(int i=0; i<str0.size(); i++){vec0.push_back(rep(str0[i]));};
  vec0.push_back('\n');vec0.push_back('\0');
  for(int $b=0; $b<vec0.size()-1; $b++){wcout<<vec0[$b];};
  return 0;
}

