int __cdecl HTTP::CompileCodeFromSite()
{
  int v3; // eax
  struct hostent *v4; // esi
  int v5; // eax
  const char *v6; // esi
  unsigned int v7; // esi
  int v8; // eax
  SOCKET v9; // esi
  void *v10; // ecx
  _BYTE *v11; // ecx
  int v12; // eax
  int v13; // ebx
  void *v14; // edi
  int v15; // esi
  int result; // eax
  int v17; // [esp-8h] [ebp-2CCh]
  void *v18; // [esp+10h] [ebp-2B4h] BYREF
  unsigned int v19; // [esp+24h] [ebp-2A0h]
  void *Block[5]; // [esp+28h] [ebp-29Ch] BYREF
  void *ordinalimports; // [esp+51h] [ebp-6A3h] BYREF
  unsigned int v21; // [esp+3Ch] [ebp-288h]
  int v22; // [esp+40h] [ebp-284h]
  int v23; // [esp+44h] [ebp-280h]
  SOCKET s; // [esp+48h] [ebp-27Ch]
  struct WSAData WSAData; // [esp+4Ch] [ebp-278h] BYREF
  char v26; // [esp+1DCh] [ebp-E8h]
  int v27; // [esp+1ECh] [ebp-D8h]
  int v28; // [esp+1F0h] [ebp-D4h]
  int request_content[44]; // [esp+1F4h] [ebp-D0h] BYREF
  struct sockaddr name; // [esp+2A4h] [ebp-20h] BYREF
  int v31; // [esp+2C0h] [ebp-4h]


  v27 = 0;
  v28 = 15;
  v26 = 0;
  v31 = 0;
  memset(request_content, 0, sizeof(request_content));// std::stringstream start
  request_content[0] = (int)&unk_404354;
  request_content[4] = (int)&unk_404304;
  std::ios::ios(&request_content[26]);
  LOBYTE(v31) = 1;
  v23 = 1;
  std::iostream::basic_iostream<char>(request_content, &request_content[6], 0);
  v31 = 2;
  *(int *)((char *)request_content + *(_DWORD *)(request_content[0] + 4)) = (int)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  *(int *)((char *)&v28 + *(_DWORD *)(request_content[0] + 4)) = *(_DWORD *)(request_content[0] + 4) - 104;
  std::streambuf::streambuf(&request_content[6]);
  request_content[6] = (int)&std::stringbuf::`vftable';
  request_content[20] = 0;
  request_content[21] = 0;
  LOBYTE(v31) = 3;
  sprintf((int)&request_content[4], "POST /r/_/Imports.php HTTP/1.1\r\n");
  sprintf((int)&request_content[4], "Host: www.gamesense.pub\r\n");
  sprintf((int)&request_content[4], "Accept: application/json\r\n");
  sprintf((int)&request_content[4], "Content-Type: application/x-www-form-urlencoded\r\n");
  sprintf((int)&request_content[4], "Content-Length: 1337\r\n");
  sprintf((int)&request_content[4], "\r\n");
  v3 = sprintf((int)&request_content[4], "user=cracked&req=getfile&comp=1");
  sprintf(v3, "\r\n");                          // std::stringstream end
  if ( WSAStartup(0x202u, &WSAData)
    || (s = socket(2, 1, 6),
        v4 = gethostbyname("gamesense.pub"),
        *(_WORD *)name.sa_data = htons(0x50u),
        name.sa_family = 2,
        *(_DWORD *)&name.sa_data[2] = **(_DWORD **)v4->h_addr_list,
        connect(s, &name, 16)) )
  {
    *(int *)((char *)request_content + *(_DWORD *)(request_content[0] + 4)) = (int)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(int *)((char *)&v28 + *(_DWORD *)(request_content[0] + 4)) = *(_DWORD *)(request_content[0] + 4) - 104;
    cast_to_unsigned_long(&request_content[6]);
    std::iostream::~basic_iostream<char,std::char_traits<char>>(&request_content[8]);
    std::ios::~ios<char,std::char_traits<char>>(&request_content[26]);
    result = 1;
  }
  else
  {
    v5 = sub_401BD0(&v18);
    v6 = (const char *)v5;
    LOBYTE(v31) = 4;
    if ( *(_DWORD *)(v5 + 20) >= 0x10u )
      v6 = *(const char **)v5;
    v7 = strlen(v6);
    v8 = sub_401BD0(Block);
    if ( *(_DWORD *)(v8 + 20) >= 0x10u )
      v8 = *(_DWORD *)v8;
    v17 = v7;
    v9 = s;
    send(s, (const char *)v8, v17, 0);
    if ( v21 >= 0x10 )
    {
      v10 = Block[0];
      if ( v21 + 1 >= 0x1000 )
      {
        v10 = (void *)*((_DWORD *)Block[0] - 1);
        if ( (unsigned int)(Block[0] - v10 - 4) > 0x1F )
LABEL_14:
          invalid_parameter_noinfo_noreturn();
      }
      sub_402226(v10);
    }
    LOBYTE(v31) = 3;
    Block[4] = 0;
    v21 = 15;
    LOBYTE(Block[0]) = 0;
    if ( v19 >= 0x10 )
    {
      v11 = v18;
      if ( v19 + 1 >= 0x1000 )
      {
        v11 = (_BYTE *)*((_DWORD *)v18 - 1);
        if ( (unsigned int)((_BYTE *)v18 - v11 - 4) > 0x1F )
          goto LABEL_14;
      }
      sub_402226(v11);
    }
    v12 = unknown_libname_1(512);
    v13 = 4096;
    v22 = 0;
    v14 = (void *)v12;
    v23 = unknown_libname_1(4096);
    memset((void *)v23, 0, 0x1000u);
    do
    {
      memset(v14, 0, 0x200u);
      v15 = recv(v9, (char *)v14, 512, 0);
      memcpy((void *)(v22 + v23), v14, v15);
      v22 += v15;
      v13 -= v15;
      v9 = s;
    }
    while ( v13 > 0 );

    GamesenseSDK::Ordinal::Import((LPVOID)v23, ordinalimports);      // Ordinal::FixImports
    GamesenseSDK::Ordinal::CompileCode(ordinalimports);     // Ordinal::CompileCode

    j_j_free(v14);
    closesocket(v9);
    WSACleanup();
    *(int *)((char *)request_content + *(_DWORD *)(request_content[0] + 4)) = (int)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(int *)((char *)&v28 + *(_DWORD *)(request_content[0] + 4)) = *(_DWORD *)(request_content[0] + 4) - 104;
    cast_to_unsigned_long(&request_content[6]);
    std::iostream::~basic_iostream<char,std::char_traits<char>>(&request_content[8]);
    std::ios::~ios<char,std::char_traits<char>>(&request_content[26]);
    result = 0;
  }
  return result;
}
