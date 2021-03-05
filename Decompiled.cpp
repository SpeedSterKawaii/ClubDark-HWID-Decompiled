int sub_401170()
{
  unsigned int v0; // esi@1
  void **v1; // eax@2
  void *v2; // ecx@6
  int v3; // edx@7
  void **v4; // eax@9
  bool v5; // cf@9
  void **v6; // edi@9
  void **v7; // ecx@9
  void **v8; // esi@11
  void **v9; // eax@14
  void **v10; // eax@16
  void **v11; // eax@18
  void **v12; // eax@20
  void **v13; // eax@22
  int v14; // ST00_4@26
  int v15; // eax@26
  int v16; // eax@26
  void *Memory; // [sp+Ch] [bp-D0h]@2
  int v19; // [sp+1Ch] [bp-C0h]@2
  unsigned int v20; // [sp+20h] [bp-BCh]@2
  void **v21; // [sp+24h] [bp-B8h]@16
  void **v22; // [sp+28h] [bp-B4h]@20
  void **v23; // [sp+2Ch] [bp-B0h]@11
  void **v24; // [sp+30h] [bp-ACh]@18
  void **v25; // [sp+34h] [bp-A8h]@3
  struct tagHW_PROFILE_INFOA HwProfileInfo; // [sp+38h] [bp-A4h]@1
  void *v27[4]; // [sp+B4h] [bp-28h]@1
  __int64 v28; // [sp+C4h] [bp-18h]@1
  int v29; // [sp+D8h] [bp-4h]@1

  v0 = 15;
  v28 = 64424509440i64;
  LOBYTE(v27[0]) = 0;
  v29 = 0;
  SetConsoleTitleA("Club Dark HWID Checker");
  sub_401670(std::cout, "Hello, welcome to club dark's HWID checker! \n\n");
  if ( GetCurrentHwProfileA(&HwProfileInfo) )
  {
    v19 = 0;
    v20 = 15;
    LOBYTE(Memory) = 0;
    sub_4014E0(&Memory, HwProfileInfo.szHwProfileGuid, strlen(HwProfileInfo.szHwProfileGuid));
    v1 = &Memory;
  }
  else
  {
    v1 = v25;
    if ( v27 == v25 )
      goto LABEL_5;
  }
  *(_OWORD *)v27 = *(_OWORD *)v1;
  _mm_storel_epi64((__m128i *)&v28, _mm_loadl_epi64((const __m128i *)v1 + 1));
  v0 = HIDWORD(v28);
  v1[4] = 0;
  v1[5] = (void *)15;
  *(_BYTE *)v1 = 0;
LABEL_5:
  if ( v20 >= 0x10 )
  {
    v2 = Memory;
    if ( v20 + 1 >= 0x1000 )
    {
      v2 = (void *)*((_DWORD *)Memory - 1);
      v3 = v20 + 36;
      if ( (unsigned int)((_BYTE *)Memory - (_BYTE *)v2 - 4) > 0x1F )
      {
LABEL_29:
        invalid_parameter_noinfo_noreturn(v2, v3);
LABEL_30:
        sub_401920(v2);
        return 0;
      }
    }
    sub_401920(v2);
  }
  v4 = v27;
  v5 = v0 < 0x10;
  v6 = v27;
  v7 = v27;
  if ( v0 >= 0x10 )
    v4 = (void **)v27[0];
  v8 = v27;
  v23 = v4;
  if ( !v5 )
  {
    v7 = (void **)v27[0];
    if ( !v5 )
      v6 = (void **)v27[0];
  }
  v9 = v27;
  if ( !v5 )
    v9 = (void **)v27[0];
  v21 = v9;
  v10 = v27;
  if ( !v5 )
    v10 = (void **)v27[0];
  v24 = v10;
  v11 = v27;
  if ( !v5 )
    v11 = (void **)v27[0];
  v22 = v11;
  v12 = v27;
  if ( !v5 )
    v12 = (void **)v27[0];
  v25 = v12;
  v13 = v27;
  if ( HIDWORD(v28) >= 0x10 )
    v13 = (void **)v27[0];
  if ( HIDWORD(v28) >= 0x10 )
    v8 = (void **)v27[0];
  v14 = 32 * *((_BYTE *)v25 + 2)
      + 35 * *((_BYTE *)v21 + 1)
      + 91 * *((_BYTE *)v8 + 11)
      + 52 * *((_BYTE *)v7 + 10)
      + 81 * *((_BYTE *)v24 + 7)
      + 78 * *((_BYTE *)v13 + 12)
      - 29 * *((_BYTE *)v6 + 8)
      + 28 * *((_BYTE *)v23 + 3)
      - 38 * *((_BYTE *)v22 + 4);
  v15 = sub_401670(std::cout, "Your hwid (protected) is ");
  v16 = std::basic_ostream<char,std::char_traits<char>>::operator<<(v15, v14, sub_4018B0);
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v16);
  sub_401670(std::cout, "Please copy it and join my discord to send your buyer number to Superskater911. \n\n");
  sub_401670(std::cout, "Check https://clubdark.net/discord for my latest discord server. \n\n");
  sub_401670(std::cout, "You must have send me your email and this number to me for your purchased sk8r. \n\n");
  system("pause");
  if ( HIDWORD(v28) >= 0x10 )
  {
    v2 = v27[0];
    if ( (unsigned int)(HIDWORD(v28) + 1) < 0x1000 )
      goto LABEL_30;
    v2 = (void *)*((_DWORD *)v27[0] - 1);
    v3 = HIDWORD(v28) + 36;
    if ( (unsigned int)(v27[0] - v2 - 4) <= 0x1F )
      goto LABEL_30;
    goto LABEL_29;
  }
  return 0;
}
