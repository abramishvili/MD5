public static string Hash(string text)
{
byte[] data = System.Security.Cryptography.MD5.Create().ComputeHash(System.Text.Encoding.UTF8.GetBytes(text));
string md5 = "";
for (int i = 0; i < data.Length; i++)
{
md5 += data[i].ToString("x2");
}
return md5;
//hghuv
    }
