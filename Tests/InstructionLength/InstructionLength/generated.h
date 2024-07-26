TEST_CASE("0_sub rsp, 38h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x38");
}

TEST_CASE("1_mov r9, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x48\x10");
}

TEST_CASE("2_mov rax, [rcx+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x00\x02\x00\x00");
}

TEST_CASE("3_mov r9d, [r9+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\x49\x28");
}

TEST_CASE("4_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x2f\x50\x00\x00");
}

TEST_CASE("5_add rsp, 38h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x38");
}

TEST_CASE("6_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("7_mov rax, rsp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc4");
}

TEST_CASE("8_mov [rax+8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x58\x08");
}

TEST_CASE("9_mov [rax+10h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x68\x10");
}

TEST_CASE("10_mov [rax+18h], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x70\x18");
}

TEST_CASE("11_mov [rax+20h], rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x78\x20");
}

TEST_CASE("12_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("13_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("14_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("15_mov rsi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf0");
}

TEST_CASE("16_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("17_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("18_jz short loc_140001059", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("19_mov dl, 0Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0b");
}

TEST_CASE("20_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("21_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xef\x32\x00\x00");
}

TEST_CASE("22_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("23_js loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x95\x01\x00\x00");
}

TEST_CASE("24_movsxd rdx, dword ptr [rdi+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x57\x0c");
}

TEST_CASE("25_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("26_jz short loc_1400010D2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x71");
}

TEST_CASE("27_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("28_jnz loc_14000116A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x00\x01\x00\x00");
}

TEST_CASE("29_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("30_lea r14, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x73\x10");
}

TEST_CASE("31_mov r9b, [rdi+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4f\x49");
}

TEST_CASE("32_mov bpl, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x04");
}

TEST_CASE("33_imul rcx, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("34_movzx edx, word ptr [rax+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x50\x28");
}

TEST_CASE("35_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("36_mov rax, [rcx+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x39\xa8\x00\x00\x00");
}

TEST_CASE("37_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("38_mov rax, [rcx+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x39\x50");
}

TEST_CASE("39_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("40_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("41_mov al, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x47\x48");
}

TEST_CASE("42_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("43_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x1f\x38\x00\x00");
}

TEST_CASE("44_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("45_js loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x39\x01\x00\x00");
}

TEST_CASE("46_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("47_jz short loc_140001107", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4d");
}

TEST_CASE("48_lea rdx, unk_14005801C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x5b\x6f\x05\x00");
}

TEST_CASE("49_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("50_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xeb\x32\x00\x00");
}

TEST_CASE("51_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("52_jns short loc_140001133", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x66");
}

TEST_CASE("53_jmp loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x1c\x01\x00\x00");
}

TEST_CASE("54_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("55_lea r14, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x73\x10");
}

TEST_CASE("56_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("57_movzx edx, word ptr [rax+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x50\x28");
}

TEST_CASE("58_mov bpl, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x04");
}

TEST_CASE("59_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("60_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("61_mov rax, [r9+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x39\xa8\x00\x00\x00");
}

TEST_CASE("62_mov r9, [r9+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x39\x50");
}

TEST_CASE("63_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("64_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x6f\x35\x00\x00");
}

TEST_CASE("65_jmp short loc_1400010AD", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xa6");
}

TEST_CASE("66_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("67_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("68_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("69_jbe short loc_14000111F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("70_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("71_jmp loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xcf\x00\x00\x00");
}

TEST_CASE("72_movzx eax, cs:word_1400745E8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xc2\x34\x07\x00");
}

TEST_CASE("73_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("74_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("75_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("76_mov rax, [rsi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x06");
}

TEST_CASE("77_mov cl, [rax+16h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x48\x16");
}

TEST_CASE("78_cmp cl, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xf9\x10");
}

TEST_CASE("79_jz short loc_140001146", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x08");
}

TEST_CASE("80_cmp cl, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xf9\x20");
}

TEST_CASE("81_jnz short loc_14000116A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x27");
}

TEST_CASE("82_mov bpl, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x08");
}

TEST_CASE("83_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("84_jz short loc_14000115D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("85_mov dl, 0Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0b");
}

TEST_CASE("86_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("87_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xeb\x31\x00\x00");
}

TEST_CASE("88_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("89_js loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x91\x00\x00\x00");
}

TEST_CASE("90_movsxd rdx, dword ptr [rdi+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x57\x0c");
}

TEST_CASE("91_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("92_jz short loc_1400011B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x52");
}

TEST_CASE("93_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("94_jz short loc_140001171", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("95_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("96_jmp short loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x7d");
}

TEST_CASE("97_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("98_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("99_mov r9b, [rdi+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4f\x49");
}

TEST_CASE("100_imul rcx, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("101_mov edx, [rax+2Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x50\x2c");
}

TEST_CASE("102_mov rax, [rcx+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x39\xa8\x00\x00\x00");
}

TEST_CASE("103_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("104_mov rax, [rcx+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x39\x50");
}

TEST_CASE("105_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("106_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("107_mov al, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x47\x48");
}

TEST_CASE("108_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("109_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x20\x37\x00\x00");
}

TEST_CASE("110_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("111_js short loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x3e");
}

TEST_CASE("112_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("113_jmp short loc_1400011EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x37");
}

TEST_CASE("114_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("115_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("116_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("117_mov edx, [rax+2Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x50\x2c");
}

TEST_CASE("118_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("119_mov rax, [r9+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x39\xa8\x00\x00\x00");
}

TEST_CASE("120_mov r9, [r9+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x39\x50");
}

TEST_CASE("121_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("122_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x92\x34\x00\x00");
}

TEST_CASE("123_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("124_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("125_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("126_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("127_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("128_mov rbp, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x58");
}

TEST_CASE("129_mov rsi, [rsp+48h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x60");
}

TEST_CASE("130_mov rdi, [rsp+48h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x7c\x24\x68");
}

TEST_CASE("131_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("132_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("133_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("134_mov rax, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x10");
}

TEST_CASE("135_cmp byte ptr [rax+29h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x78\x29\x00");
}

TEST_CASE("136_jz short loc_140001239", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x1f");
}

TEST_CASE("137_cmp byte ptr [rcx+7], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x79\x07\x00");
}

TEST_CASE("138_jnz short loc_140001230", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x10");
}

TEST_CASE("139_cmp qword ptr [r8+18h], 0FFFFFFFFFFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\x78\x18\xff");
}

TEST_CASE("140_jz short loc_140001230", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x09");
}

TEST_CASE("141_mov rax, [rcx+208h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x08\x02\x00\x00");
}

TEST_CASE("142_jmp short loc_140001240", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x10");
}

TEST_CASE("143_mov rax, [rcx+210h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x10\x02\x00\x00");
}

TEST_CASE("144_jmp short loc_140001240", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x07");
}

TEST_CASE("145_mov rax, [rcx+220h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x20\x02\x00\x00");
}

TEST_CASE("146_jmp cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x25\x01\x4e\x00\x00");
}

TEST_CASE("147_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("148_mov [rsp+arg_8], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x10");
}

TEST_CASE("149_push rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x56");
}

TEST_CASE("150_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("151_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("152_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("153_mov rbp, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x28");
}

TEST_CASE("154_lea r9, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x4c\x24\x70");
}

TEST_CASE("155_mov rax, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc0");
}

TEST_CASE("156_mov r14, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xf2");
}

TEST_CASE("157_mov r8, [r8+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x40\x18");
}

TEST_CASE("158_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("159_mov rcx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcd");
}

TEST_CASE("160_mov rdx, [rax+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x50\x10");
}

TEST_CASE("161_call sub_140004248", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xc5\x2f\x00\x00");
}

TEST_CASE("162_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("163_js loc_140001370", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xe5\x00\x00\x00");
}

TEST_CASE("164_cmp dword ptr [rsi+14h], 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7e\x14\xff");
}

TEST_CASE("165_lea rbx, [rsi+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x5e\x0c");
}

TEST_CASE("166_jnz short loc_1400012C5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x30");
}

TEST_CASE("167_xor dil, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x32\xff");
}

TEST_CASE("168_cmp dword ptr [rbx], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x3b\x01");
}

TEST_CASE("169_jnz short loc_1400012C9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x2c");
}

TEST_CASE("170_mov al, [rbp+17h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x45\x17");
}

TEST_CASE("171_mov dil, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb7\x10");
}

TEST_CASE("172_cmp al, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x3a\xc7");
}

TEST_CASE("173_jz short loc_1400012BB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x13");
}

TEST_CASE("174_cmp al, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x20");
}

TEST_CASE("175_jz short loc_1400012B2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x06");
}

TEST_CASE("176_cmp al, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x40");
}

TEST_CASE("177_jnz short loc_1400012F2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x42");
}

TEST_CASE("178_jmp short loc_1400012C9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x17");
}

TEST_CASE("179_mov ebp, dword ptr [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x6c\x24\x70");
}

TEST_CASE("180_mov dil, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb7\x08");
}

TEST_CASE("181_jmp short loc_1400012CE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x13");
}

TEST_CASE("182_movzx ebp, word ptr [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x6c\x24\x70");
}

TEST_CASE("183_mov dil, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb7\x04");
}

TEST_CASE("184_jmp short loc_1400012CE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x09");
}

TEST_CASE("185_mov dil, [rsi+14h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\x7e\x14");
}

TEST_CASE("186_mov rbp, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x70");
}

TEST_CASE("187_cmp byte ptr [r14], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\x3e\x00");
}

TEST_CASE("188_jz short loc_1400012E6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("189_mov dl, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x08");
}

TEST_CASE("190_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("191_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x62\x30\x00\x00");
}

TEST_CASE("192_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("193_js loc_140001370", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x8a\x00\x00\x00");
}

TEST_CASE("194_movsxd rdx, dword ptr [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x13");
}

TEST_CASE("195_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("196_jz short loc_14000133C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4f");
}

TEST_CASE("197_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("198_jz short loc_1400012F9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("199_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("200_jmp short loc_140001370", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x77");
}

TEST_CASE("201_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("202_lea rcx, [r14+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x4e\x10");
}

TEST_CASE("203_mov r8b, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc7");
}

TEST_CASE("204_mov rdx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd5");
}

TEST_CASE("205_mov rax, [r9+rsi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x31\xa8\x00\x00\x00");
}

TEST_CASE("206_mov [rsp+58h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("207_mov rax, [r9+rsi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x31\x50");
}

TEST_CASE("208_mov r9b, [rsi+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4e\x49");
}

TEST_CASE("209_mov [rsp+58h+var_30], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("210_mov al, [rsi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x46\x48");
}

TEST_CASE("211_mov byte ptr [rsp+58h+var_38], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("212_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x9b\x35\x00\x00");
}

TEST_CASE("213_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("214_js short loc_140001370", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x3b");
}

TEST_CASE("215_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("216_jmp short loc_140001370", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x34");
}

TEST_CASE("217_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("218_lea rcx, [r14+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x4e\x10");
}

TEST_CASE("219_mov r8b, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc7");
}

TEST_CASE("220_mov rdx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd5");
}

TEST_CASE("221_mov rax, [r9+rsi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x31\xa8\x00\x00\x00");
}

TEST_CASE("222_mov r9, [r9+rsi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x31\x50");
}

TEST_CASE("223_mov [rsp+58h+var_38], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("224_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x10\x33\x00\x00");
}

TEST_CASE("225_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("226_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("227_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("228_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("229_mov rbx, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x60");
}

TEST_CASE("230_mov rbp, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x68");
}

TEST_CASE("231_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("232_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("233_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("234_pop rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5e");
}

TEST_CASE("235_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("236_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("237_mov [rsp+arg_8], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x10");
}

TEST_CASE("238_push rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x56");
}

TEST_CASE("239_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("240_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("241_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("242_mov r14, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x30");
}

TEST_CASE("243_lea r9, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x4c\x24\x70");
}

TEST_CASE("244_mov rax, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc0");
}

TEST_CASE("245_mov rsi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf2");
}

TEST_CASE("246_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("247_xor r8d, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc0");
}

TEST_CASE("248_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("249_mov rdx, [rax+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x50\x10");
}

TEST_CASE("250_call sub_140004248", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x86\x2e\x00\x00");
}

TEST_CASE("251_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("252_js loc_140001587", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xbd\x01\x00\x00");
}

TEST_CASE("253_cmp dword ptr [rbx+18h], 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7b\x18\xff");
}

TEST_CASE("254_lea rdi, [rbx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x7b\x0c");
}

TEST_CASE("255_jnz short loc_14000140B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x37");
}

TEST_CASE("256_xor bpl, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x32\xed");
}

TEST_CASE("257_cmp dword ptr [rdi], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x3f\x01");
}

TEST_CASE("258_jnz short loc_14000140F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x33");
}

TEST_CASE("259_mov al, [r14+17h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\x46\x17");
}

TEST_CASE("260_mov bpl, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x10");
}

TEST_CASE("261_cmp al, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x3a\xc5");
}

TEST_CASE("262_jz short loc_140001400", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("263_cmp al, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x20");
}

TEST_CASE("264_jz short loc_1400013F6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("265_cmp al, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x40");
}

TEST_CASE("266_jnz loc_140001505", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x11\x01\x00\x00");
}

TEST_CASE("267_jmp short loc_14000140F", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x19");
}

TEST_CASE("268_mov r14d, dword ptr [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x74\x24\x70");
}

TEST_CASE("269_mov bpl, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x08");
}

TEST_CASE("270_jmp short loc_140001414", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("271_movzx r14d, word ptr [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb7\x74\x24\x70");
}

TEST_CASE("272_mov bpl, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x04");
}

TEST_CASE("273_jmp short loc_140001414", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x09");
}

TEST_CASE("274_mov bpl, [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\x6b\x18");
}

TEST_CASE("275_mov r14, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x74\x24\x70");
}

TEST_CASE("276_cmp byte ptr [rsi], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3e\x00");
}

TEST_CASE("277_jz short loc_14000142B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("278_mov dl, 9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x09");
}

TEST_CASE("279_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("280_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x1d\x2f\x00\x00");
}

TEST_CASE("281_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("282_js loc_140001587", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x5c\x01\x00\x00");
}

TEST_CASE("283_mov ecx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x4b\x10");
}

TEST_CASE("284_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("285_jz loc_1400014F9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xc3\x00\x00\x00");
}

TEST_CASE("286_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("287_jz loc_1400014F9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xba\x00\x00\x00");
}

TEST_CASE("288_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("289_jnz loc_140001505", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xbd\x00\x00\x00");
}

TEST_CASE("290_mov rdx, [rsi+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x28");
}

TEST_CASE("291_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("292_cmp rax, [rsi+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x46\x30");
}

TEST_CASE("293_jbe short loc_140001460", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("294_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("295_jmp loc_140001587", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x27\x01\x00\x00");
}

TEST_CASE("296_movzx eax, cs:word_140074454", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xed\x2f\x07\x00");
}

TEST_CASE("297_mov rcx, [rsi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4e\x48");
}

TEST_CASE("298_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("299_inc qword ptr [rsi+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x46\x28");
}

TEST_CASE("300_movsxd rdx, dword ptr [rbx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x53\x0c");
}

TEST_CASE("301_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("302_jz short loc_1400014BF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x43");
}

TEST_CASE("303_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("304_jnz loc_140001505", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x80\x00\x00\x00");
}

TEST_CASE("305_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("306_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("307_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("308_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("309_mov rax, [r9+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x19\xa8\x00\x00\x00");
}

TEST_CASE("310_mov [rsp+58h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("311_mov rax, [r9+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x19\x50");
}

TEST_CASE("312_mov r9b, [rbx+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4b\x49");
}

TEST_CASE("313_mov [rsp+58h+var_30], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("314_mov al, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x43\x48");
}

TEST_CASE("315_mov byte ptr [rsp+58h+var_38], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("316_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x0f\x34\x00\x00");
}

TEST_CASE("317_jmp short loc_1400014E7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x28");
}

TEST_CASE("318_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("319_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("320_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("321_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("322_mov rax, [r9+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x19\xa8\x00\x00\x00");
}

TEST_CASE("323_mov r9, [r9+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x19\x50");
}

TEST_CASE("324_mov [rsp+58h+var_38], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("325_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x8d\x31\x00\x00");
}

TEST_CASE("326_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("327_js loc_140001587", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x98\x00\x00\x00");
}

TEST_CASE("328_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("329_jmp loc_140001587", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x8e\x00\x00\x00");
}

TEST_CASE("330_movsxd rdx, dword ptr [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x17");
}

TEST_CASE("331_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("332_jz short loc_14000154B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4b");
}

TEST_CASE("333_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("334_jz short loc_14000150C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("335_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("336_jmp short loc_140001587", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x7b");
}

TEST_CASE("337_mov r9b, [rbx+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4b\x49");
}

TEST_CASE("338_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("339_imul rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x69\xd2\xb0\x00\x00\x00");
}

TEST_CASE("340_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("341_mov rax, [rdx+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x1a\xa8\x00\x00\x00");
}

TEST_CASE("342_mov [rsp+58h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x38");
}

TEST_CASE("343_mov rax, [rdx+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x1a\x50");
}

TEST_CASE("344_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("345_mov [rsp+58h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("346_mov al, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x43\x48");
}

TEST_CASE("347_mov byte ptr [rsp+58h+var_30], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x24\x28\x01");
}

TEST_CASE("348_mov byte ptr [rsp+58h+var_38], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("349_call sub_1400047B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x6f\x32\x00\x00");
}

TEST_CASE("350_jmp short loc_1400014E7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x9c");
}

TEST_CASE("351_imul rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x69\xd2\xb0\x00\x00\x00");
}

TEST_CASE("352_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("353_mov r9b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb1\x01");
}

TEST_CASE("354_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("355_mov rax, [rdx+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x1a\xa8\x00\x00\x00");
}

TEST_CASE("356_mov [rsp+58h+var_30], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("357_mov rax, [rdx+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x1a\x50");
}

TEST_CASE("358_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("359_mov [rsp+58h+var_38], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("360_call sub_1400045A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x25\x30\x00\x00");
}

TEST_CASE("361_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("362_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("363_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("364_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("365_mov rbx, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x60");
}

TEST_CASE("366_mov rbp, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x68");
}

TEST_CASE("367_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("368_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("369_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("370_pop rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5e");
}

TEST_CASE("371_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("372_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("373_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("374_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("375_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("376_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("377_mov rdi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf8");
}

TEST_CASE("378_mov rsi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf2");
}

TEST_CASE("379_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("380_jz short loc_1400015CF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("381_mov dl, 0Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0b");
}

TEST_CASE("382_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("383_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x79\x2d\x00\x00");
}

TEST_CASE("384_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("385_js loc_1400017A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xd4\x01\x00\x00");
}

TEST_CASE("386_mov eax, [rbx+2Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x43\x2c");
}

TEST_CASE("387_cmp eax, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x01");
}

TEST_CASE("388_jz short loc_1400015ED", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x16");
}

TEST_CASE("389_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("390_jnz loc_140001694", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xb5\x00\x00\x00");
}

TEST_CASE("391_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("392_cmp byte ptr [rax+28h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x78\x28\x00");
}

TEST_CASE("393_jz loc_140001694", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa7\x00\x00\x00");
}

TEST_CASE("394_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("395_mov r10, [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x50\x30");
}

TEST_CASE("396_test r10, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xd2");
}

TEST_CASE("397_jns loc_140001694", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x96\x00\x00\x00");
}

TEST_CASE("398_movsxd r8, dword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x63\x43\x28");
}

TEST_CASE("399_test r8d, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xc0");
}

TEST_CASE("400_jz short loc_140001651", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4a");
}

TEST_CASE("401_cmp r8d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf8\x01");
}

TEST_CASE("402_jnz loc_140001731", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x20\x01\x00\x00");
}

TEST_CASE("403_mov r9b, [rbx+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4b\x49");
}

TEST_CASE("404_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("405_imul r8, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x69\xc0\xb0\x00\x00\x00");
}

TEST_CASE("406_mov rdx, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd2");
}

TEST_CASE("407_mov rax, [r8+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x18\xa8\x00\x00\x00");
}

TEST_CASE("408_mov [rsp+48h+var_10], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x38");
}

TEST_CASE("409_mov rax, [r8+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x18\x50");
}

TEST_CASE("410_mov r8b, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x43\x30");
}

TEST_CASE("411_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("412_mov al, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x43\x48");
}

TEST_CASE("413_mov byte ptr [rsp+48h+var_20], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x24\x28\x00");
}

TEST_CASE("414_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("415_call sub_1400047B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x69\x31\x00\x00");
}

TEST_CASE("416_jmp short loc_140001682", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x31");
}

TEST_CASE("417_imul rdx, r8, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x69\xd0\xb0\x00\x00\x00");
}

TEST_CASE("418_mov r8b, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x43\x30");
}

TEST_CASE("419_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("420_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("421_mov rax, [rdx+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x1a\xa8\x00\x00\x00");
}

TEST_CASE("422_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("423_mov rax, [rdx+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x1a\x50");
}

TEST_CASE("424_mov rdx, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd2");
}

TEST_CASE("425_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("426_call sub_1400045A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x1e\x2f\x00\x00");
}

TEST_CASE("427_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("428_js loc_1400017A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x19\x01\x00\x00");
}

TEST_CASE("429_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("430_jmp loc_1400017A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x0f\x01\x00\x00");
}

TEST_CASE("431_mov r9d, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x4b\x30");
}

TEST_CASE("432_cmp r9d, 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf9\xff");
}

TEST_CASE("433_jnz short loc_1400016A2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x04");
}

TEST_CASE("434_xor cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x32\xc9");
}

TEST_CASE("435_jmp short loc_1400016A5", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x03");
}

TEST_CASE("436_mov cl, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x4b\x30");
}

TEST_CASE("437_mov rax, [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x07");
}

TEST_CASE("438_mov r8d, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb8\x08\x00\x00\x00");
}

TEST_CASE("439_mov dl, [rax+16h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x50\x16");
}

TEST_CASE("440_cmp dl, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x3a\xd0");
}

TEST_CASE("441_jz short loc_14000170A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x54");
}

TEST_CASE("442_lea eax, [r8+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8d\x40\x08");
}

TEST_CASE("443_cmp dl, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3a\xd0");
}

TEST_CASE("444_jz short loc_1400016F6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x38");
}

TEST_CASE("445_cmp dl, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xfa\x20");
}

TEST_CASE("446_jz short loc_1400016DE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x1b");
}

TEST_CASE("447_cmp dl, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xfa\x40");
}

TEST_CASE("448_jnz short loc_140001731", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x69");
}

TEST_CASE("449_cmp r9d, 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf9\xff");
}

TEST_CASE("450_movzx r8d, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\xc1");
}

TEST_CASE("451_cmovz r8d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\x44\xc0");
}

TEST_CASE("452_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("453_mov r10, [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x50\x30");
}

TEST_CASE("454_jmp short loc_140001724", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x46");
}

TEST_CASE("455_movzx eax, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xc1");
}

TEST_CASE("456_cmp r9d, 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf9\xff");
}

TEST_CASE("457_cmovz eax, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x44\xc0");
}

TEST_CASE("458_mov r8b, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc0");
}

TEST_CASE("459_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("460_mov r10d, [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x50\x30");
}

TEST_CASE("461_jmp short loc_140001724", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2e");
}

TEST_CASE("462_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("463_movzx r8d, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\xc1");
}

TEST_CASE("464_mov ecx, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x04\x00\x00\x00");
}

TEST_CASE("465_movzx r10d, word ptr [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb7\x50\x30");
}

TEST_CASE("466_jmp short loc_14000171C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x12");
}

TEST_CASE("467_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("468_movzx r8d, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\xc1");
}

TEST_CASE("469_mov ecx, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x02\x00\x00\x00");
}

TEST_CASE("470_movzx r10d, byte ptr [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\x50\x30");
}

TEST_CASE("471_cmp r9d, 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf9\xff");
}

TEST_CASE("472_cmovz r8d, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\x44\xc1");
}

TEST_CASE("473_movsxd rdx, dword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x53\x28");
}

TEST_CASE("474_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("475_jz short loc_140001772", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x46");
}

TEST_CASE("476_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("477_jz short loc_140001738", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("478_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("479_jmp short loc_1400017A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x6b");
}

TEST_CASE("480_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("481_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("482_mov rdx, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd2");
}

TEST_CASE("483_mov rax, [r9+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x19\xa8\x00\x00\x00");
}

TEST_CASE("484_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("485_mov rax, [r9+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x19\x50");
}

TEST_CASE("486_mov r9b, [rbx+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4b\x49");
}

TEST_CASE("487_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("488_mov al, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x43\x48");
}

TEST_CASE("489_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("490_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x5f\x31\x00\x00");
}

TEST_CASE("491_jmp loc_140001682", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x10\xff\xff\xff");
}

TEST_CASE("492_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("493_lea rcx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4e\x10");
}

TEST_CASE("494_mov rdx, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd2");
}

TEST_CASE("495_mov rax, [r9+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x19\xa8\x00\x00\x00");
}

TEST_CASE("496_mov r9, [r9+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x19\x50");
}

TEST_CASE("497_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("498_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xdd\x2e\x00\x00");
}

TEST_CASE("499_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("500_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("501_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("502_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("503_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("504_mov rsi, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x58");
}

TEST_CASE("505_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("506_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("507_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("508_push rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x53");
}

TEST_CASE("509_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("510_mov rax, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x10");
}

TEST_CASE("511_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("512_mov edx, [rax+2Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x50\x2c");
}

TEST_CASE("513_mov r9d, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xca");
}

TEST_CASE("514_sub r9d, 0C6h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x81\xe9\xc6\x00\x00\x00");
}

TEST_CASE("515_jz short loc_140001829", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4d");
}

TEST_CASE("516_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("517_jz short loc_140001829", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x47");
}

TEST_CASE("518_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("519_jz short loc_140001818", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x30");
}

TEST_CASE("520_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("521_jz short loc_1400017FF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x11");
}

TEST_CASE("522_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("523_jz short loc_140001829", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x35");
}

TEST_CASE("524_cmp r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf9\x01");
}

TEST_CASE("525_jz short loc_140001829", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2f");
}

TEST_CASE("526_jmp loc_140001883", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x84\x00\x00\x00");
}

TEST_CASE("527_cmp byte ptr [rcx+5], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x79\x05\x00");
}

TEST_CASE("528_jnz short loc_140001810", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0b");
}

TEST_CASE("529_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("530_bt qword ptr [rax+20h], 27h ; '''", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\x60\x20\x27");
}

TEST_CASE("531_jnb short loc_140001883", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x73");
}

TEST_CASE("532_mov r9d, 0C9h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\xc9\x00\x00\x00");
}

TEST_CASE("533_jmp short loc_14000182C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("534_cmp byte ptr [rcx+5], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x79\x05\x00");
}

TEST_CASE("535_jnz short loc_140001829", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0b");
}

TEST_CASE("536_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("537_bt qword ptr [rax+20h], 26h ; '&'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\x60\x20\x26");
}

TEST_CASE("538_jnb short loc_140001883", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x5a");
}

TEST_CASE("539_mov r9d, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xca");
}

TEST_CASE("540_mov rax, [rcx+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x00\x02\x00\x00");
}

TEST_CASE("541_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("542_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x0c\x48\x00\x00");
}

TEST_CASE("543_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("544_js short loc_140001888", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x48");
}

TEST_CASE("545_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("546_jz short loc_14000185A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("547_lea rdx, unk_14005801C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd0\x67\x05\x00");
}

TEST_CASE("548_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("549_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x60\x2b\x00\x00");
}

TEST_CASE("550_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("551_jns short loc_140001883", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("552_jmp short loc_140001888", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2e");
}

TEST_CASE("553_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("554_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("555_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("556_jbe short loc_14000186F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("557_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("558_jmp short loc_140001888", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x19");
}

TEST_CASE("559_movzx eax, cs:word_1400745E8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x72\x2d\x07\x00");
}

TEST_CASE("560_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("561_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("562_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("563_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("564_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("565_pop rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5b");
}

TEST_CASE("566_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("567_mov [rsp+arg_8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x10");
}

TEST_CASE("568_mov [rsp+arg_10], r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x89\x44\x24\x18");
}

TEST_CASE("569_push rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x55");
}

TEST_CASE("570_push rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x56");
}

TEST_CASE("571_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("572_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("573_push r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x55");
}

TEST_CASE("574_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("575_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("576_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("577_xor r12d, r12d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xe4");
}

TEST_CASE("578_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("579_mov r14, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xf0");
}

TEST_CASE("580_mov rdx, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x10");
}

TEST_CASE("581_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("582_cmp [rcx+0Ah], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x61\x0a");
}

TEST_CASE("583_jz loc_140001DC3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x01\x05\x00\x00");
}

TEST_CASE("584_mov r15b, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8a\xfc");
}

TEST_CASE("585_mov [rsp+68h+arg_18], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\xa4\x24\x88\x00\x00\x00");
}

TEST_CASE("586_cmp [rdx+70h], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x62\x70");
}

TEST_CASE("587_jbe loc_140001D9B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x86\xc4\x04\x00\x00");
}

TEST_CASE("588_mov ebp, 80000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xbd\x00\x00\x00\x80");
}

TEST_CASE("589_lea r11, cs:140000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x1d\x1d\xe7\xff\xff");
}

TEST_CASE("590_mov r10, 200000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xba\x00\x00\x00\x00\x02\x00\x00\x00");
}

TEST_CASE("591_mov r9, 100000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xb9\x00\x00\x00\x00\x01\x00\x00\x00");
}

TEST_CASE("592_movzx ecx, r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb6\xcf");
}

TEST_CASE("593_mov r8d, [rdx+rcx*8+74h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x44\xca\x74");
}

TEST_CASE("594_movzx esi, byte ptr [rdx+rcx*8+78h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x74\xca\x78");
}

TEST_CASE("595_test r8d, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xc0");
}

TEST_CASE("596_jz short loc_14000191A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x10");
}

TEST_CASE("597_sub r8d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe8\x01");
}

TEST_CASE("598_jz short loc_140001944", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x34");
}

TEST_CASE("599_cmp r8d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf8\x01");
}

TEST_CASE("600_jnz loc_140001DB5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x9b\x04\x00\x00");
}

TEST_CASE("601_mov dl, [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x13");
}

TEST_CASE("602_mov al, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\xc6");
}

TEST_CASE("603_and al, 0F0h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x24\xf0");
}

TEST_CASE("604_cmp al, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x40");
}

TEST_CASE("605_jnz loc_140001ADE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xb5\x01\x00\x00");
}

TEST_CASE("606_mov rax, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc6");
}

TEST_CASE("607_and eax, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe0\x0f");
}

TEST_CASE("608_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("609_jz loc_140001AD1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x9a\x01\x00\x00");
}

TEST_CASE("610_mov rdx, ds:rva off_140073C20[r11+rax*8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x94\xc3\x20\x3c\x07\x00");
}

TEST_CASE("611_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb4\x00\x00\x00");
}

TEST_CASE("612_mov ecx, esi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xce");
}

TEST_CASE("613_sub ecx, 0F0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x81\xe9\xf0\x00\x00\x00");
}

TEST_CASE("614_jz loc_140001AB4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x62\x01\x00\x00");
}

TEST_CASE("615_sub ecx, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x02");
}

TEST_CASE("616_jz loc_140001A11", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xb6\x00\x00\x00");
}

TEST_CASE("617_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("618_jnz loc_140001D83", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x1f\x04\x00\x00");
}

TEST_CASE("619_test [rdx+20h], r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x85\x52\x20");
}

TEST_CASE("620_jz short loc_14000199C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x32");
}

TEST_CASE("621_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("622_jz short loc_140001980", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x11");
}

TEST_CASE("623_lea rdx, unk_1400584C8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x52\x6b\x05\x00");
}

TEST_CASE("624_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("625_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x36\x2a\x00\x00");
}

TEST_CASE("626_jmp short loc_140001994", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("627_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("628_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("629_lea rdx, off_1400584B8; \"xrelease \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x29\x6b\x05\x00");
}

TEST_CASE("630_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x6c\x31\x00\x00");
}

TEST_CASE("631_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("632_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x04\x04\x00\x00");
}

TEST_CASE("633_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("634_mov ecx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x20");
}

TEST_CASE("635_bt rcx, 1Ch", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1c");
}

TEST_CASE("636_jnb short loc_1400019DB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x32");
}

TEST_CASE("637_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("638_jz short loc_1400019BF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x11");
}

TEST_CASE("639_lea rdx, unk_140058178", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc3\x67\x05\x00");
}

TEST_CASE("640_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("641_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf7\x29\x00\x00");
}

TEST_CASE("642_jmp short loc_1400019D3", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("643_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("644_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("645_lea rdx, off_140058168; \"rep \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x9a\x67\x05\x00");
}

TEST_CASE("646_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x2d\x31\x00\x00");
}

TEST_CASE("647_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("648_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xc5\x03\x00\x00");
}

TEST_CASE("649_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("650_mov ecx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x20");
}

TEST_CASE("651_bt rcx, 1Dh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1d");
}

TEST_CASE("652_jnb loc_140001D68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x83\x7c\x03\x00\x00");
}

TEST_CASE("653_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("654_jz short loc_140001A05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x14");
}

TEST_CASE("655_lea rdx, unk_140058198", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xa0\x67\x05\x00");
}

TEST_CASE("656_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("657_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xb4\x29\x00\x00");
}

TEST_CASE("658_jmp loc_140001D64", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x5f\x03\x00\x00");
}

TEST_CASE("659_lea rdx, off_140058188; \"repe \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7c\x67\x05\x00");
}

TEST_CASE("660_jmp loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x46\x03\x00\x00");
}

TEST_CASE("661_test [rdx+20h], r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x85\x4a\x20");
}

TEST_CASE("662_jz short loc_140001A49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x32");
}

TEST_CASE("663_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("664_jz short loc_140001A2D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x11");
}

TEST_CASE("665_lea rdx, unk_1400584A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7d\x6a\x05\x00");
}

TEST_CASE("666_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("667_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x89\x29\x00\x00");
}

TEST_CASE("668_jmp short loc_140001A41", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("669_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("670_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("671_lea rdx, off_140058490; \"xacquire \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x54\x6a\x05\x00");
}

TEST_CASE("672_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xbf\x30\x00\x00");
}

TEST_CASE("673_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("674_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x57\x03\x00\x00");
}

TEST_CASE("675_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("676_mov ecx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x20");
}

TEST_CASE("677_bt rcx, 1Eh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1e");
}

TEST_CASE("678_jnb short loc_140001A88", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x32");
}

TEST_CASE("679_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("680_jz short loc_140001A6C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x11");
}

TEST_CASE("681_lea rdx, unk_1400581B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x56\x67\x05\x00");
}

TEST_CASE("682_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("683_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x4a\x29\x00\x00");
}

TEST_CASE("684_jmp short loc_140001A80", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("685_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("686_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("687_lea rdx, off_1400581A8; \"repne \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x2d\x67\x05\x00");
}

TEST_CASE("688_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x80\x30\x00\x00");
}

TEST_CASE("689_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("690_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x18\x03\x00\x00");
}

TEST_CASE("691_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("692_mov ecx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x20");
}

TEST_CASE("693_test rbp, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xcd");
}

TEST_CASE("694_jz loc_140001D68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xd1\x02\x00\x00");
}

TEST_CASE("695_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("696_jz short loc_140001AA8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("697_lea rdx, unk_140058138", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x95\x66\x05\x00");
}

TEST_CASE("698_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x50\xff\xff\xff");
}

TEST_CASE("699_lea rdx, off_140058128; \"bnd \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x79\x66\x05\x00");
}

TEST_CASE("700_jmp loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa3\x02\x00\x00");
}

TEST_CASE("701_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("702_jz short loc_140001AC5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("703_lea rdx, unk_140058158", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x98\x66\x05\x00");
}

TEST_CASE("704_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x33\xff\xff\xff");
}

TEST_CASE("705_lea rdx, off_140058148; \"lock \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7c\x66\x05\x00");
}

TEST_CASE("706_jmp loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x86\x02\x00\x00");
}

TEST_CASE("707_mov rdx, ds:rva off_140073BA0[r11+rax*8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x94\xc3\xa0\x3b\x07\x00");
}

TEST_CASE("708_jmp loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x79\x02\x00\x00");
}

TEST_CASE("709_mov ecx, esi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xce");
}

TEST_CASE("710_sub ecx, 26h ; '&'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x26");
}

TEST_CASE("711_jz loc_140001D40", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x57\x02\x00\x00");
}

TEST_CASE("712_sub ecx, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x08");
}

TEST_CASE("713_jz loc_140001D27", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x35\x02\x00\x00");
}

TEST_CASE("714_sub ecx, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x08");
}

TEST_CASE("715_jz loc_140001D0E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x13\x02\x00\x00");
}

TEST_CASE("716_sub ecx, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x08");
}

TEST_CASE("717_jz loc_140001CF5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xf1\x01\x00\x00");
}

TEST_CASE("718_sub ecx, 26h ; '&'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x26");
}

TEST_CASE("719_jz loc_140001CDC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xcf\x01\x00\x00");
}

TEST_CASE("720_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("721_jz loc_140001CC3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xad\x01\x00\x00");
}

TEST_CASE("722_cmp ecx, 8Bh ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x81\xf9\x8b\x00\x00\x00");
}

TEST_CASE("723_jz loc_140001CBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x9a\x01\x00\x00");
}

TEST_CASE("724_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("725_jz short loc_140001B38", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("726_mov dl, 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x05");
}

TEST_CASE("727_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("728_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x10\x28\x00\x00");
}

TEST_CASE("729_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("730_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x68\x02\x00\x00");
}

TEST_CASE("731_mov al, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x47\x48");
}

TEST_CASE("732_mov r13, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x6b\x28");
}

TEST_CASE("733_mov r12, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x63\x30");
}

TEST_CASE("734_mov dl, [rdi+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x57\x49");
}

TEST_CASE("735_sub r12, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x2b\xe5");
}

TEST_CASE("736_mov [rsp+68h+var_48], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("737_mov rax, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc6");
}

TEST_CASE("738_mov [rsp+68h+var_40], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("739_mov [rsp+68h+arg_0], dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x54\x24\x70");
}

TEST_CASE("740_test sil, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x84\xf6");
}

TEST_CASE("741_jnz short loc_140001B8B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x2d");
}

TEST_CASE("742_cmp r12, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xfc\x01");
}

TEST_CASE("743_jb loc_140001DBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x82\x54\x02\x00\x00");
}

TEST_CASE("744_mov rax, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x43\x48");
}

TEST_CASE("745_lea rcx, [r13+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x4d\x01");
}

TEST_CASE("746_xor r12d, r12d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xe4");
}

TEST_CASE("747_mov byte ptr [rax+r13-1], 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\xc6\x44\x28\xff\x30");
}

TEST_CASE("748_mov rax, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x43\x48");
}

TEST_CASE("749_mov [rbx+28h], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x4b\x28");
}

TEST_CASE("750_mov [rcx+rax-1], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x64\x01\xff");
}

TEST_CASE("751_jmp loc_140001C7A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xef\x00\x00\x00");
}

TEST_CASE("752_xor sil, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x32\xf6");
}

TEST_CASE("753_mov bpl, 7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x07");
}

TEST_CASE("754_xor r14d, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xf6");
}

TEST_CASE("755_movsx ecx, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x0f\xbe\xcd");
}

TEST_CASE("756_mov r15, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xf8");
}

TEST_CASE("757_shl ecx, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc1\xe1\x02");
}

TEST_CASE("758_shr r15, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xd3\xef");
}

TEST_CASE("759_and r15b, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xe7\x0f");
}

TEST_CASE("760_test sil, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x84\xf6");
}

TEST_CASE("761_jnz short loc_140001C10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x66");
}

TEST_CASE("762_test r15b, r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xff");
}

TEST_CASE("763_jz loc_140001C44", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x91\x00\x00\x00");
}

TEST_CASE("764_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("765_jz short loc_140001BC6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0f");
}

TEST_CASE("766_cmp r15b, 9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xff\x09");
}

TEST_CASE("767_jbe short loc_140001BC6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x09");
}

TEST_CASE("768_test bpl, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x84\xed");
}

TEST_CASE("769_js short loc_140001BC6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x04");
}

TEST_CASE("770_mov dl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x01");
}

TEST_CASE("771_jmp short loc_140001BC8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x02");
}

TEST_CASE("772_xor dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x32\xd2");
}

TEST_CASE("773_movzx ecx, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xca");
}

TEST_CASE("774_movsx rax, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xbe\xc5");
}

TEST_CASE("775_add rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc8");
}

TEST_CASE("776_cmp r12, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xe1");
}

TEST_CASE("777_jbe loc_140001DBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x86\xe1\x01\x00\x00");
}

TEST_CASE("778_mov r14, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x73\x48");
}

TEST_CASE("779_dec r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xce");
}

TEST_CASE("780_add r14, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x03\xf5");
}

TEST_CASE("781_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("782_jz short loc_140001BF0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("783_mov byte ptr [r14], 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xc6\x06\x30");
}

TEST_CASE("784_mov sil, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb6\x01");
}

TEST_CASE("785_test bpl, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x84\xed");
}

TEST_CASE("786_jns short loc_140001C0C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x17");
}

TEST_CASE("787_mov sil, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\xf5");
}

TEST_CASE("788_mov edx, 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\xba\x30\x00\x00\x00");
}

TEST_CASE("789_not sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xf6\xd6");
}

TEST_CASE("790_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("791_movzx r8d, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\xc6");
}

TEST_CASE("792_call sub_140005440", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x34\x38\x00\x00");
}

TEST_CASE("793_mov dl, [rsp+68h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x54\x24\x70");
}

TEST_CASE("794_movzx ecx, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x0f\xb6\xce");
}

TEST_CASE("795_lea r8, cs:140000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xe5\xe3\xff\xff");
}

TEST_CASE("796_inc sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xfe\xc6");
}

TEST_CASE("797_movzx eax, r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb6\xc7");
}

TEST_CASE("798_cmp [rsp+68h+var_48], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x7c\x24\x20\x00");
}

TEST_CASE("799_jz short loc_140001C33", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("800_mov al, [rax+r8+5650h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x8a\x84\x00\x50\x56\x00\x00");
}

TEST_CASE("801_jmp short loc_140001C3B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x08");
}

TEST_CASE("802_mov al, [rax+r8+5670h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x8a\x84\x00\x70\x56\x00\x00");
}

TEST_CASE("803_mov [rcx+r14], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x88\x04\x31");
}

TEST_CASE("804_mov rax, [rsp+68h+var_40]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x24\x28");
}

TEST_CASE("805_sub bpl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x80\xed\x01");
}

TEST_CASE("806_jns loc_140001B94", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x46\xff\xff\xff");
}

TEST_CASE("807_mov rax, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x43\x48");
}

TEST_CASE("808_mov ebp, 80000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xbd\x00\x00\x00\x80");
}

TEST_CASE("809_mov r14, [rsp+68h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xb4\x24\x80\x00\x00\x00");
}

TEST_CASE("810_mov r15b, [rsp+68h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xbc\x24\x88\x00\x00\x00");
}

TEST_CASE("811_movzx ecx, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x0f\xb6\xce");
}

TEST_CASE("812_add rcx, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xcd");
}

TEST_CASE("813_xor r12d, r12d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xe4");
}

TEST_CASE("814_mov [rbx+28h], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x4b\x28");
}

TEST_CASE("815_mov [rax+rcx-1], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x64\x08\xff");
}

TEST_CASE("816_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("817_jz short loc_140001C91", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("818_mov dl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x01");
}

TEST_CASE("819_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("820_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xb7\x26\x00\x00");
}

TEST_CASE("821_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("822_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x0f\x01\x00\x00");
}

TEST_CASE("823_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("824_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("825_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("826_ja loc_140001DBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x19\x01\x00\x00");
}

TEST_CASE("827_movzx eax, cs:word_1400745E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x36\x29\x07\x00");
}

TEST_CASE("828_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("829_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("830_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("831_jmp loc_140001D68", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xac\x00\x00\x00");
}

TEST_CASE("832_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("833_jmp loc_140001AB7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf4\xfd\xff\xff");
}

TEST_CASE("834_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("835_jz short loc_140001CD3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("836_lea rdx, unk_140058460", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x92\x67\x05\x00");
}

TEST_CASE("837_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x25\xfd\xff\xff");
}

TEST_CASE("838_lea rdx, off_140058450; \"gs \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x76\x67\x05\x00");
}

TEST_CASE("839_jmp short loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x7b");
}

TEST_CASE("840_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("841_jz short loc_140001CEC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("842_lea rdx, unk_140058440", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x59\x67\x05\x00");
}

TEST_CASE("843_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x0c\xfd\xff\xff");
}

TEST_CASE("844_lea rdx, off_140058430; \"fs \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x3d\x67\x05\x00");
}

TEST_CASE("845_jmp short loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x62");
}

TEST_CASE("846_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("847_jz short loc_140001D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("848_lea rdx, unk_140058400", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x00\x67\x05\x00");
}

TEST_CASE("849_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf3\xfc\xff\xff");
}

TEST_CASE("850_lea rdx, off_1400583F0; \"ds \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xe4\x66\x05\x00");
}

TEST_CASE("851_jmp short loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x49");
}

TEST_CASE("852_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("853_jz short loc_140001D1E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("854_lea rdx, unk_140058480", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x67\x67\x05\x00");
}

TEST_CASE("855_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xda\xfc\xff\xff");
}

TEST_CASE("856_lea rdx, off_140058470; \"ss \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x4b\x67\x05\x00");
}

TEST_CASE("857_jmp short loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x30");
}

TEST_CASE("858_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("859_jz short loc_140001D37", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("860_lea rdx, unk_1400583E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xae\x66\x05\x00");
}

TEST_CASE("861_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc1\xfc\xff\xff");
}

TEST_CASE("862_lea rdx, off_1400583D0; \"cs \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x92\x66\x05\x00");
}

TEST_CASE("863_jmp short loc_140001D57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x17");
}

TEST_CASE("864_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("865_jz short loc_140001D50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("866_lea rdx, unk_140058420", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd5\x66\x05\x00");
}

TEST_CASE("867_jmp loc_1400019F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa8\xfc\xff\xff");
}

TEST_CASE("868_lea rdx, off_140058410; \"es \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xb9\x66\x05\x00");
}

TEST_CASE("869_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("870_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("871_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x9c\x2d\x00\x00");
}

TEST_CASE("872_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("873_js short loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x38");
}

TEST_CASE("874_lea r11, cs:140000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x1d\x91\xe2\xff\xff");
}

TEST_CASE("875_mov r10, 200000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xba\x00\x00\x00\x00\x02\x00\x00\x00");
}

TEST_CASE("876_mov r9, 100000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xb9\x00\x00\x00\x00\x01\x00\x00\x00");
}

TEST_CASE("877_mov rdx, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x16");
}

TEST_CASE("878_inc r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xfe\xc7");
}

TEST_CASE("879_mov [rsp+68h+arg_18], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\xbc\x24\x88\x00\x00\x00");
}

TEST_CASE("880_cmp r15b, [rdx+70h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x3a\x7a\x70");
}

TEST_CASE("881_jb loc_1400018F7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x82\x5c\xfb\xff\xff");
}

TEST_CASE("882_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("883_mov rbx, [rsp+68h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x78");
}

TEST_CASE("884_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("885_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("886_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("887_pop r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5d");
}

TEST_CASE("888_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("889_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("890_pop rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5e");
}

TEST_CASE("891_pop rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5d");
}

TEST_CASE("892_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("893_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("894_jmp short loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xe4");
}

TEST_CASE("895_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("896_jmp short loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xdd");
}

TEST_CASE("897_bt qword ptr [rdx+20h], 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\x62\x20\x20");
}

TEST_CASE("898_jnb short loc_140001DE7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x1c");
}

TEST_CASE("899_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("900_jz loc_140001ECA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xf6\x00\x00\x00");
}

TEST_CASE("901_lea rdx, unk_1400584A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc5\x66\x05\x00");
}

TEST_CASE("902_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("903_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xd1\x25\x00\x00");
}

TEST_CASE("904_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("905_js short loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\xb9");
}

TEST_CASE("906_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("907_bt qword ptr [rax+20h], 21h ; '!'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\x60\x20\x21");
}

TEST_CASE("908_jnb short loc_140001E0E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x1c");
}

TEST_CASE("909_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("910_jz loc_140001EE3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xe8\x00\x00\x00");
}

TEST_CASE("911_lea rdx, unk_1400584C8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc6\x66\x05\x00");
}

TEST_CASE("912_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("913_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xaa\x25\x00\x00");
}

TEST_CASE("914_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("915_js short loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x92");
}

TEST_CASE("916_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("917_mov ecx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x20");
}

TEST_CASE("918_bt rcx, 1Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1b");
}

TEST_CASE("919_jnb short loc_140001E3B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x20");
}

TEST_CASE("920_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("921_jz loc_140001EFC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xd8\x00\x00\x00");
}

TEST_CASE("922_lea rdx, unk_140058158", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x2d\x63\x05\x00");
}

TEST_CASE("923_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("924_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x81\x25\x00\x00");
}

TEST_CASE("925_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("926_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x65\xff\xff\xff");
}

TEST_CASE("927_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("928_mov ecx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x20");
}

TEST_CASE("929_bt rcx, 1Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1f");
}

TEST_CASE("930_jnb short loc_140001E68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x20");
}

TEST_CASE("931_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("932_jz loc_140001F15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xc4\x00\x00\x00");
}

TEST_CASE("933_lea rdx, unk_140058138", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xe0\x62\x05\x00");
}

TEST_CASE("934_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("935_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x54\x25\x00\x00");
}

TEST_CASE("936_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("937_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x38\xff\xff\xff");
}

TEST_CASE("938_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("939_bt qword ptr [rax+20h], 24h ; '$'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\x60\x20\x24");
}

TEST_CASE("940_jnb short loc_140001E93", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x20");
}

TEST_CASE("941_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("942_jz loc_140001F2E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xb2\x00\x00\x00");
}

TEST_CASE("943_lea rdx, unk_1400584F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x6d\x66\x05\x00");
}

TEST_CASE("944_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("945_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x29\x25\x00\x00");
}

TEST_CASE("946_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("947_js loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x0d\xff\xff\xff");
}

TEST_CASE("948_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("949_mov rcx, [rax+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x48\x20");
}

TEST_CASE("950_bt rcx, 1Ch", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1c");
}

TEST_CASE("951_jnb loc_140001F50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x83\xab\x00\x00\x00");
}

TEST_CASE("952_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("953_jz loc_140001F47", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x99\x00\x00\x00");
}

TEST_CASE("954_lea rdx, unk_140058178", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc3\x62\x05\x00");
}

TEST_CASE("955_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("956_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf7\x24\x00\x00");
}

TEST_CASE("957_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("958_jns loc_140001D9B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\xd6\xfe\xff\xff");
}

TEST_CASE("959_jmp loc_140001DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xd6\xfe\xff\xff");
}

TEST_CASE("960_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("961_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("962_lea rdx, off_140058490; \"xacquire \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xb7\x65\x05\x00");
}

TEST_CASE("963_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x22\x2c\x00\x00");
}

TEST_CASE("964_jmp loc_140001DE3", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x00\xff\xff\xff");
}

TEST_CASE("965_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("966_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("967_lea rdx, off_1400584B8; \"xrelease \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc6\x65\x05\x00");
}

TEST_CASE("968_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x09\x2c\x00\x00");
}

TEST_CASE("969_jmp loc_140001E0A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x0e\xff\xff\xff");
}

TEST_CASE("970_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("971_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("972_lea rdx, off_140058148; \"lock \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x3d\x62\x05\x00");
}

TEST_CASE("973_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf0\x2b\x00\x00");
}

TEST_CASE("974_jmp loc_140001E33", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x1e\xff\xff\xff");
}

TEST_CASE("975_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("976_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("977_lea rdx, off_140058128; \"bnd \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x04\x62\x05\x00");
}

TEST_CASE("978_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xd7\x2b\x00\x00");
}

TEST_CASE("979_jmp loc_140001E60", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x32\xff\xff\xff");
}

TEST_CASE("980_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("981_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("982_lea rdx, off_1400584E0; \"notrack \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xa3\x65\x05\x00");
}

TEST_CASE("983_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xbe\x2b\x00\x00");
}

TEST_CASE("984_jmp loc_140001E8B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x44\xff\xff\xff");
}

TEST_CASE("985_lea rdx, off_140058168; \"rep \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x1a\x62\x05\x00");
}

TEST_CASE("986_jmp short loc_140001F94", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x44");
}

TEST_CASE("987_bt rcx, 1Dh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1d");
}

TEST_CASE("988_jnb short loc_140001F71", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x1a");
}

TEST_CASE("989_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("990_jz short loc_140001F68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("991_lea rdx, unk_140058198", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x35\x62\x05\x00");
}

TEST_CASE("992_jmp loc_140001EB5", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x4d\xff\xff\xff");
}

TEST_CASE("993_lea rdx, off_140058188; \"repe \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x19\x62\x05\x00");
}

TEST_CASE("994_jmp short loc_140001F94", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x23");
}

TEST_CASE("995_bt rcx, 1Eh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xba\xe1\x1e");
}

TEST_CASE("996_jnb loc_140001D9B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x83\x1f\xfe\xff\xff");
}

TEST_CASE("997_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("998_jz short loc_140001F8D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("999_lea rdx, unk_1400581B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x30\x62\x05\x00");
}

TEST_CASE("1000_jmp loc_140001EB5", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x28\xff\xff\xff");
}

TEST_CASE("1001_lea rdx, off_1400581A8; \"repne \"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x14\x62\x05\x00");
}

TEST_CASE("1002_mov r8d, [rdi+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x34");
}

TEST_CASE("1003_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("1004_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x5f\x2b\x00\x00");
}

TEST_CASE("1005_jmp loc_140001EBD", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x17\xff\xff\xff");
}

TEST_CASE("1006_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("1007_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("1008_mov [rsp+arg_10], rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x7c\x24\x18");
}

TEST_CASE("1009_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("1010_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("1011_mov r14, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xf0");
}

TEST_CASE("1012_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("1013_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("1014_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("1015_jz loc_140002541", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x69\x05\x00\x00");
}

TEST_CASE("1016_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("1017_jz loc_1400023C3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xe1\x03\x00\x00");
}

TEST_CASE("1018_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("1019_jz loc_140002272", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x86\x02\x00\x00");
}

TEST_CASE("1020_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("1021_jz loc_14000223B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x45\x02\x00\x00");
}

TEST_CASE("1022_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("1023_jz loc_14000210F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x0f\x01\x00\x00");
}

TEST_CASE("1024_sub r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xe9\x01");
}

TEST_CASE("1025_jz short loc_14000203E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x38");
}

TEST_CASE("1026_cmp r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\xf9\x01");
}

TEST_CASE("1027_jnz loc_1400024B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xa7\x04\x00\x00");
}

TEST_CASE("1028_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("1029_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1030_cmp [rax+59h], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x58\x59");
}

TEST_CASE("1031_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x43\x06\x00\x00");
}

TEST_CASE("1032_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1033_jz short loc_14000202E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1034_lea rdx, unk_140057D38", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0f\x5d\x05\x00");
}

TEST_CASE("1035_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x27\x06\x00\x00");
}

TEST_CASE("1036_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1037_lea rdx, off_140057D28; \" {eh}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xef\x5c\x05\x00");
}

TEST_CASE("1038_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x48\x06\x00\x00");
}

TEST_CASE("1039_mov rcx, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x08");
}

TEST_CASE("1040_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1041_mov edx, [rcx+54h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x51\x54");
}

TEST_CASE("1042_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("1043_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x13\x06\x00\x00");
}

TEST_CASE("1044_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1045_jz loc_1400020EF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x98\x00\x00\x00");
}

TEST_CASE("1046_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1047_jz short loc_1400020CF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x73");
}

TEST_CASE("1048_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1049_jz short loc_1400020AF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4e");
}

TEST_CASE("1050_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1051_jz short loc_14000208F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x29");
}

TEST_CASE("1052_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("1053_jnz loc_1400024B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x48\x04\x00\x00");
}

TEST_CASE("1054_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1055_jz short loc_14000207F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1056_lea rdx, unk_140057F80", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x06\x5f\x05\x00");
}

TEST_CASE("1057_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xd6\x05\x00\x00");
}

TEST_CASE("1058_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1059_lea rdx, off_140057F70; \" {uint16}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xe6\x5e\x05\x00");
}

TEST_CASE("1060_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf7\x05\x00\x00");
}

TEST_CASE("1061_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1062_jz short loc_14000209F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1063_lea rdx, unk_140057F30", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x96\x5e\x05\x00");
}

TEST_CASE("1064_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb6\x05\x00\x00");
}

TEST_CASE("1065_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1066_lea rdx, off_140057F20; \" {sint16}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x76\x5e\x05\x00");
}

TEST_CASE("1067_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xd7\x05\x00\x00");
}

TEST_CASE("1068_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1069_jz short loc_1400020BF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1070_lea rdx, unk_140057F58", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x9e\x5e\x05\x00");
}

TEST_CASE("1071_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x96\x05\x00\x00");
}

TEST_CASE("1072_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1073_lea rdx, off_140057F48; \" {uint8}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7e\x5e\x05\x00");
}

TEST_CASE("1074_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb7\x05\x00\x00");
}

TEST_CASE("1075_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1076_jz short loc_1400020DF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1077_lea rdx, unk_140057F08", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x2e\x5e\x05\x00");
}

TEST_CASE("1078_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x76\x05\x00\x00");
}

TEST_CASE("1079_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1080_lea rdx, off_140057EF8; \" {sint8}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0e\x5e\x05\x00");
}

TEST_CASE("1081_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x97\x05\x00\x00");
}

TEST_CASE("1082_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1083_jz short loc_1400020FF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1084_lea rdx, unk_140057D78", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7e\x5c\x05\x00");
}

TEST_CASE("1085_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x56\x05\x00\x00");
}

TEST_CASE("1086_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1087_lea rdx, off_140057D68; \" {float16}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x5e\x5c\x05\x00");
}

TEST_CASE("1088_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x77\x05\x00\x00");
}

TEST_CASE("1089_mov rcx, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x08");
}

TEST_CASE("1090_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1091_mov edx, [rcx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x51\x50");
}

TEST_CASE("1092_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("1093_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x42\x05\x00\x00");
}

TEST_CASE("1094_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1095_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x39\x05\x00\x00");
}

TEST_CASE("1096_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1097_jz loc_14000221B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xea\x00\x00\x00");
}

TEST_CASE("1098_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1099_jz loc_1400021FB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xc1\x00\x00\x00");
}

TEST_CASE("1100_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1101_jz loc_1400021DB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x98\x00\x00\x00");
}

TEST_CASE("1102_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1103_jz short loc_1400021BB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x73");
}

TEST_CASE("1104_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1105_jz short loc_14000219B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4e");
}

TEST_CASE("1106_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("1107_jz short loc_14000217B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x29");
}

TEST_CASE("1108_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("1109_jnz loc_1400024B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x5c\x03\x00\x00");
}

TEST_CASE("1110_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1111_jz short loc_14000216B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1112_lea rdx, unk_140057D10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xaa\x5b\x05\x00");
}

TEST_CASE("1113_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xea\x04\x00\x00");
}

TEST_CASE("1114_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1115_lea rdx, off_140057D00; \" {dddd}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x8a\x5b\x05\x00");
}

TEST_CASE("1116_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x0b\x05\x00\x00");
}

TEST_CASE("1117_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1118_jz short loc_14000218B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1119_lea rdx, unk_140057C98", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x12\x5b\x05\x00");
}

TEST_CASE("1120_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xca\x04\x00\x00");
}

TEST_CASE("1121_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1122_lea rdx, off_140057C88; \" {cccc}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xf2\x5a\x05\x00");
}

TEST_CASE("1123_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xeb\x04\x00\x00");
}

TEST_CASE("1124_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1125_jz short loc_1400021AB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1126_lea rdx, unk_140057C50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xaa\x5a\x05\x00");
}

TEST_CASE("1127_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xaa\x04\x00\x00");
}

TEST_CASE("1128_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1129_lea rdx, off_140057C40; \" {bbbb}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x8a\x5a\x05\x00");
}

TEST_CASE("1130_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xcb\x04\x00\x00");
}

TEST_CASE("1131_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1132_jz short loc_1400021CB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1133_lea rdx, unk_140057C00", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x3a\x5a\x05\x00");
}

TEST_CASE("1134_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x8a\x04\x00\x00");
}

TEST_CASE("1135_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1136_lea rdx, off_140057BF0; \" {aaaa}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x1a\x5a\x05\x00");
}

TEST_CASE("1137_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xab\x04\x00\x00");
}

TEST_CASE("1138_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1139_jz short loc_1400021EB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1140_lea rdx, unk_140057CE8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x02\x5b\x05\x00");
}

TEST_CASE("1141_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x6a\x04\x00\x00");
}

TEST_CASE("1142_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1143_lea rdx, off_140057CD8; \" {dacb}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xe2\x5a\x05\x00");
}

TEST_CASE("1144_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x8b\x04\x00\x00");
}

TEST_CASE("1145_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1146_jz short loc_14000220B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1147_lea rdx, unk_140057C28", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x22\x5a\x05\x00");
}

TEST_CASE("1148_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x4a\x04\x00\x00");
}

TEST_CASE("1149_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1150_lea rdx, off_140057C18; \" {badc}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x02\x5a\x05\x00");
}

TEST_CASE("1151_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x6b\x04\x00\x00");
}

TEST_CASE("1152_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1153_jz short loc_14000222B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1154_lea rdx, unk_140057CC0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x9a\x5a\x05\x00");
}

TEST_CASE("1155_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x2a\x04\x00\x00");
}

TEST_CASE("1156_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("1157_lea rdx, off_140057CB0; \" {cdab}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7a\x5a\x05\x00");
}

TEST_CASE("1158_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x4b\x04\x00\x00");
}

TEST_CASE("1159_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("1160_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1161_cmp [rax+58h], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x58\x58");
}

TEST_CASE("1162_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x18\x04\x00\x00");
}

TEST_CASE("1163_cmp [rax+4Ch], ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x39\x58\x4c");
}

TEST_CASE("1164_jnz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x0f\x04\x00\x00");
}

TEST_CASE("1165_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1166_jz short loc_140002262", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1167_lea rdx, unk_140057EE0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x83\x5c\x05\x00");
}

TEST_CASE("1168_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf3\x03\x00\x00");
}

TEST_CASE("1169_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1170_lea rdx, off_140057ED0; \" {sae}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x63\x5c\x05\x00");
}

TEST_CASE("1171_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x14\x04\x00\x00");
}

TEST_CASE("1172_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("1173_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1174_mov ecx, [rax+4Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x4c");
}

TEST_CASE("1175_cmp [rax+58h], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x58\x58");
}

TEST_CASE("1176_jz loc_140002323", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa0\x00\x00\x00");
}

TEST_CASE("1177_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("1178_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xd6\x03\x00\x00");
}

TEST_CASE("1179_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1180_jz short loc_140002303", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x73");
}

TEST_CASE("1181_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1182_jz short loc_1400022E3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4e");
}

TEST_CASE("1183_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1184_jz short loc_1400022C3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x29");
}

TEST_CASE("1185_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("1186_jnz loc_1400024B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x14\x02\x00\x00");
}

TEST_CASE("1187_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1188_jz short loc_1400022B3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1189_lea rdx, unk_140057EB8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0a\x5c\x05\x00");
}

TEST_CASE("1190_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa2\x03\x00\x00");
}

TEST_CASE("1191_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1192_lea rdx, off_140057EA8; \" {rz-sae}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xea\x5b\x05\x00");
}

TEST_CASE("1193_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc3\x03\x00\x00");
}

TEST_CASE("1194_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1195_jz short loc_1400022D3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1196_lea rdx, unk_140057E68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x9a\x5b\x05\x00");
}

TEST_CASE("1197_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x82\x03\x00\x00");
}

TEST_CASE("1198_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1199_lea rdx, off_140057E58; \" {ru-sae}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7a\x5b\x05\x00");
}

TEST_CASE("1200_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa3\x03\x00\x00");
}

TEST_CASE("1201_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1202_jz short loc_1400022F3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1203_lea rdx, unk_140057DC8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xda\x5a\x05\x00");
}

TEST_CASE("1204_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x62\x03\x00\x00");
}

TEST_CASE("1205_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1206_lea rdx, off_140057DB8; \" {rd-sae}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xba\x5a\x05\x00");
}

TEST_CASE("1207_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x83\x03\x00\x00");
}

TEST_CASE("1208_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1209_jz short loc_140002313", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1210_lea rdx, unk_140057E18", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0a\x5b\x05\x00");
}

TEST_CASE("1211_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x42\x03\x00\x00");
}

TEST_CASE("1212_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1213_lea rdx, off_140057E08; \" {rn-sae}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xea\x5a\x05\x00");
}

TEST_CASE("1214_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x63\x03\x00\x00");
}

TEST_CASE("1215_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("1216_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x36\x03\x00\x00");
}

TEST_CASE("1217_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1218_jz short loc_1400023A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x73");
}

TEST_CASE("1219_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1220_jz short loc_140002383", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4e");
}

TEST_CASE("1221_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1222_jz short loc_140002363", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x29");
}

TEST_CASE("1223_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("1224_jnz loc_1400024B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x74\x01\x00\x00");
}

TEST_CASE("1225_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1226_jz short loc_140002353", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1227_lea rdx, unk_140057E90", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x42\x5b\x05\x00");
}

TEST_CASE("1228_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x02\x03\x00\x00");
}

TEST_CASE("1229_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1230_lea rdx, off_140057E80; \" {rz}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x22\x5b\x05\x00");
}

TEST_CASE("1231_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x23\x03\x00\x00");
}

TEST_CASE("1232_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1233_jz short loc_140002373", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1234_lea rdx, unk_140057E40", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd2\x5a\x05\x00");
}

TEST_CASE("1235_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xe2\x02\x00\x00");
}

TEST_CASE("1236_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1237_lea rdx, off_140057E30; \" {ru}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xb2\x5a\x05\x00");
}

TEST_CASE("1238_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x03\x03\x00\x00");
}

TEST_CASE("1239_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1240_jz short loc_140002393", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1241_lea rdx, unk_140057DA0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x12\x5a\x05\x00");
}

TEST_CASE("1242_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc2\x02\x00\x00");
}

TEST_CASE("1243_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1244_lea rdx, off_140057D90; \" {rd}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xf2\x59\x05\x00");
}

TEST_CASE("1245_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xe3\x02\x00\x00");
}

TEST_CASE("1246_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1247_jz short loc_1400023B3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1248_lea rdx, unk_140057DF0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x42\x5a\x05\x00");
}

TEST_CASE("1249_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa2\x02\x00\x00");
}

TEST_CASE("1250_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1251_lea rdx, off_140057DE0; \" {rn}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x22\x5a\x05\x00");
}

TEST_CASE("1252_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc3\x02\x00\x00");
}

TEST_CASE("1253_mov rcx, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x08");
}

TEST_CASE("1254_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1255_cmp [rcx+44h], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x59\x44");
}

TEST_CASE("1256_jnz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x90\x02\x00\x00");
}

TEST_CASE("1257_mov ecx, [rcx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x49\x48");
}

TEST_CASE("1258_cmp ecx, 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x05");
}

TEST_CASE("1259_jg loc_1400024A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x8f\xc6\x00\x00\x00");
}

TEST_CASE("1260_jz loc_140002483", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa0\x00\x00\x00");
}

TEST_CASE("1261_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("1262_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x76\x02\x00\x00");
}

TEST_CASE("1263_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1264_jz short loc_140002463", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x73");
}

TEST_CASE("1265_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1266_jz short loc_140002443", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4e");
}

TEST_CASE("1267_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1268_jz short loc_140002423", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x29");
}

TEST_CASE("1269_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("1270_jnz loc_1400024B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xb4\x00\x00\x00");
}

TEST_CASE("1271_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1272_jz short loc_140002413", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1273_lea rdx, unk_140057B10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x02\x57\x05\x00");
}

TEST_CASE("1274_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x42\x02\x00\x00");
}

TEST_CASE("1275_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1276_lea rdx, off_140057B00; \" {1to16}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xe2\x56\x05\x00");
}

TEST_CASE("1277_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x63\x02\x00\x00");
}

TEST_CASE("1278_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1279_jz short loc_140002433", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1280_lea rdx, unk_140057AE8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xba\x56\x05\x00");
}

TEST_CASE("1281_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x22\x02\x00\x00");
}

TEST_CASE("1282_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1283_lea rdx, off_140057AD8; \" {1to8}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x9a\x56\x05\x00");
}

TEST_CASE("1284_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x43\x02\x00\x00");
}

TEST_CASE("1285_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1286_jz short loc_140002453", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1287_lea rdx, unk_140057AC0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x72\x56\x05\x00");
}

TEST_CASE("1288_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x02\x02\x00\x00");
}

TEST_CASE("1289_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1290_lea rdx, off_140057AB0; \" {1to4}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x52\x56\x05\x00");
}

TEST_CASE("1291_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x23\x02\x00\x00");
}

TEST_CASE("1292_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1293_jz short loc_140002473", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1294_lea rdx, unk_140057A98", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x2a\x56\x05\x00");
}

TEST_CASE("1295_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xe2\x01\x00\x00");
}

TEST_CASE("1296_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1297_lea rdx, off_140057A88; \" {1to2}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0a\x56\x05\x00");
}

TEST_CASE("1298_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x03\x02\x00\x00");
}

TEST_CASE("1299_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1300_jz short loc_140002493", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1301_lea rdx, unk_140057B38", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xaa\x56\x05\x00");
}

TEST_CASE("1302_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc2\x01\x00\x00");
}

TEST_CASE("1303_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1304_lea rdx, off_140057B28; \" {1to32}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x8a\x56\x05\x00");
}

TEST_CASE("1305_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xe3\x01\x00\x00");
}

TEST_CASE("1306_sub ecx, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x06");
}

TEST_CASE("1307_jz short loc_140002521", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x79");
}

TEST_CASE("1308_sub ecx, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x04");
}

TEST_CASE("1309_jz short loc_140002501", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x54");
}

TEST_CASE("1310_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1311_jz short loc_1400024E1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2f");
}

TEST_CASE("1312_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("1313_jz short loc_1400024C1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("1314_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("1315_jmp loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa5\x01\x00\x00");
}

TEST_CASE("1316_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1317_jz short loc_1400024D1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1318_lea rdx, unk_140057BD8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0c\x57\x05\x00");
}

TEST_CASE("1319_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x84\x01\x00\x00");
}

TEST_CASE("1320_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1321_lea rdx, off_140057BC8; \" {8to16}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xec\x56\x05\x00");
}

TEST_CASE("1322_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa5\x01\x00\x00");
}

TEST_CASE("1323_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1324_jz short loc_1400024F1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1325_lea rdx, unk_140057BB0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc4\x56\x05\x00");
}

TEST_CASE("1326_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x64\x01\x00\x00");
}

TEST_CASE("1327_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1328_lea rdx, off_140057BA0; \" {4to16}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xa4\x56\x05\x00");
}

TEST_CASE("1329_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x85\x01\x00\x00");
}

TEST_CASE("1330_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1331_jz short loc_140002511", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1332_lea rdx, unk_140057B88", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7c\x56\x05\x00");
}

TEST_CASE("1333_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x44\x01\x00\x00");
}

TEST_CASE("1334_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1335_lea rdx, off_140057B78; \" {4to8}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x5c\x56\x05\x00");
}

TEST_CASE("1336_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x65\x01\x00\x00");
}

TEST_CASE("1337_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1338_jz short loc_140002531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("1339_lea rdx, unk_140057B60", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x34\x56\x05\x00");
}

TEST_CASE("1340_jmp loc_140002655", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x24\x01\x00\x00");
}

TEST_CASE("1341_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("1342_lea rdx, off_140057B50; \" {1to64}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x14\x56\x05\x00");
}

TEST_CASE("1343_jmp loc_140002686", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x45\x01\x00\x00");
}

TEST_CASE("1344_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("1345_cmp dword ptr [rax+40h], 0F8h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x81\x78\x40\xf8\x00\x00\x00");
}

TEST_CASE("1346_jz loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x10\x01\x00\x00");
}

TEST_CASE("1347_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("1348_cmp [rdx], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1a");
}

TEST_CASE("1349_jz short loc_1400025AF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x58");
}

TEST_CASE("1350_lea rdx, unk_140057C78", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x1a\x57\x05\x00");
}

TEST_CASE("1351_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1352_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x4e\x1e\x00\x00");
}

TEST_CASE("1353_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1354_js loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xf8\x00\x00\x00");
}

TEST_CASE("1355_mov r9, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x0e");
}

TEST_CASE("1356_mov r8, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xc6");
}

TEST_CASE("1357_mov rax, [rsi+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x00\x02\x00\x00");
}

TEST_CASE("1358_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("1359_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("1360_mov r9d, [r9+40h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\x49\x40");
}

TEST_CASE("1361_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xbd\x3a\x00\x00");
}

TEST_CASE("1362_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1363_js loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xd3\x00\x00\x00");
}

TEST_CASE("1364_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1365_jz short loc_140002604", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x6d");
}

TEST_CASE("1366_lea rdx, unk_140057D5C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xbe\x57\x05\x00");
}

TEST_CASE("1367_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1368_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x0e\x1e\x00\x00");
}

TEST_CASE("1369_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1370_jns short loc_140002626", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x7c");
}

TEST_CASE("1371_jmp loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb7\x00\x00\x00");
}

TEST_CASE("1372_mov rdx, [rdx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x28");
}

TEST_CASE("1373_lea rax, [rdx+2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x02");
}

TEST_CASE("1374_cmp rax, [rdi+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x47\x30");
}

TEST_CASE("1375_jbe short loc_1400025C7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("1376_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("1377_jmp loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x9f\x00\x00\x00");
}

TEST_CASE("1378_movzx eax, cs:word_1400744E8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x1a\x1f\x07\x00");
}

TEST_CASE("1379_mov rcx, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4f\x48");
}

TEST_CASE("1380_mov [rdx+rcx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x0a\xff");
}

TEST_CASE("1381_mov al, cs:byte_1400744EA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x0d\x1f\x07\x00");
}

TEST_CASE("1382_mov [rdx+rcx+1], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x0a\x01");
}

TEST_CASE("1383_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("1384_add qword ptr [rdi+28h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x47\x28\x02");
}

TEST_CASE("1385_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("1386_mov r9, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x08");
}

TEST_CASE("1387_mov rax, [rsi+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x00\x02\x00\x00");
}

TEST_CASE("1388_mov r9d, [r9+40h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\x49\x40");
}

TEST_CASE("1389_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x48\x3a\x00\x00");
}

TEST_CASE("1390_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1391_js short loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x62");
}

TEST_CASE("1392_mov rdx, [rdi+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x57\x28");
}

TEST_CASE("1393_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1394_cmp rax, [rdi+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x47\x30");
}

TEST_CASE("1395_ja short loc_1400025BD", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\xab");
}

TEST_CASE("1396_mov rcx, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4f\x48");
}

TEST_CASE("1397_movzx eax, cs:word_140074518", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xfb\x1e\x07\x00");
}

TEST_CASE("1398_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("1399_inc qword ptr [rdi+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x47\x28");
}

TEST_CASE("1400_mov eax, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x10\x00\x00\x00");
}

TEST_CASE("1401_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1402_lea r9, [rax+rcx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x0c\x08");
}

TEST_CASE("1403_mov rcx, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x0e");
}

TEST_CASE("1404_mov eax, [rcx+3Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x41\x3c");
}

TEST_CASE("1405_sub eax, 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x03");
}

TEST_CASE("1406_test eax, 0FFFFFFFDh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xa9\xfd\xff\xff\xff");
}

TEST_CASE("1407_jnz short loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x1f");
}

TEST_CASE("1408_cmp [rcx+0F8h], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x99\xf8\x00\x00\x00");
}

TEST_CASE("1409_jz short loc_140002661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x17");
}

TEST_CASE("1410_cmp [rdi], bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x38\x1f");
}

TEST_CASE("1411_jz short loc_14000267C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2e");
}

TEST_CASE("1412_lea rdx, unk_140057FA8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x53\x59\x05\x00");
}

TEST_CASE("1413_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1414_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x57\x1d\x00\x00");
}

TEST_CASE("1415_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1416_js short loc_140002666", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x05");
}

TEST_CASE("1417_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("1418_mov rbx, [rsp+38h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x40");
}

TEST_CASE("1419_mov rsi, [rsp+38h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x48");
}

TEST_CASE("1420_mov rdi, [rsp+38h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x7c\x24\x50");
}

TEST_CASE("1421_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("1422_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("1423_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("1424_lea rdx, off_140057F98; \" {z}\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x15\x59\x05\x00");
}

TEST_CASE("1425_mov rcx, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc9");
}

TEST_CASE("1426_mov r8d, [rsi+44h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x44");
}

TEST_CASE("1427_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x71\x24\x00\x00");
}

TEST_CASE("1428_jmp short loc_14000265D", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xcc");
}

TEST_CASE("1429_mov [rsp+arg_8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x10");
}

TEST_CASE("1430_mov [rsp+arg_10], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x18");
}

TEST_CASE("1431_mov [rsp+arg_18], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x20");
}

TEST_CASE("1432_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("1433_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("1434_push r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x55");
}

TEST_CASE("1435_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("1436_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("1437_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("1438_mov rax, [rcx+238h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x38\x02\x00\x00");
}

TEST_CASE("1439_mov rsi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf0");
}

TEST_CASE("1440_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("1441_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("1442_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x76\x39\x00\x00");
}

TEST_CASE("1443_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1444_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x4b\x03\x00\x00");
}

TEST_CASE("1445_mov rax, [rdi+1F8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xf8\x01\x00\x00");
}

TEST_CASE("1446_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1447_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1448_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1449_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x58\x39\x00\x00");
}

TEST_CASE("1450_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1451_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x2d\x03\x00\x00");
}

TEST_CASE("1452_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("1453_lea r13, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x6b\x48");
}

TEST_CASE("1454_lea r15, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x7b\x28");
}

TEST_CASE("1455_jz short loc_14000270B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x06");
}

TEST_CASE("1456_mov rdx, [r13+0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x55\x00");
}

TEST_CASE("1457_jmp short loc_14000270E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x03");
}

TEST_CASE("1458_mov rdx, [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x17");
}

TEST_CASE("1459_mov rax, [rsi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x06");
}

TEST_CASE("1460_mov [rsp+58h+arg_0], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x54\x24\x60");
}

TEST_CASE("1461_mov r12b, [rax+19h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x60\x19");
}

TEST_CASE("1462_sub r12b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xec\x01");
}

TEST_CASE("1463_js loc_140002A20", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xfc\x02\x00\x00");
}

TEST_CASE("1464_movsx rax, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\xbe\xc4");
}

TEST_CASE("1465_lea rbp, [rax+rax*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x2c\x80");
}

TEST_CASE("1466_shl rbp, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xc1\xe5\x04");
}

TEST_CASE("1467_add rbp, [rsi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\x6e\x08");
}

TEST_CASE("1468_cmp r12b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xfc\x01");
}

TEST_CASE("1469_jnz short loc_14000274A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x10");
}

TEST_CASE("1470_cmp dword ptr [rbp+20h], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7d\x20\x01");
}

TEST_CASE("1471_jnz short loc_14000274A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0a");
}

TEST_CASE("1472_cmp dword ptr [rbp+0Ch], 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7d\x0c\x06");
}

TEST_CASE("1473_jz loc_140002A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xb8\x02\x00\x00");
}

TEST_CASE("1474_mov cl, [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x0b");
}

TEST_CASE("1475_mov rax, r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc7");
}

TEST_CASE("1476_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("1477_cmovnz rax, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\x45\xc5");
}

TEST_CASE("1478_mov r14, [rax]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x30");
}

TEST_CASE("1479_cmp r14, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xf2");
}

TEST_CASE("1480_jz short loc_14000279B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x3e");
}

TEST_CASE("1481_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("1482_jz short loc_14000276A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x09");
}

TEST_CASE("1483_lea rdx, unk_140058000", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x98\x58\x05\x00");
}

TEST_CASE("1484_jmp short loc_1400027A6", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x3c");
}

TEST_CASE("1485_mov rdx, [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x17");
}

TEST_CASE("1486_lea rax, [rdx+2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x02");
}

TEST_CASE("1487_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1488_ja loc_140002A12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x97\x02\x00\x00");
}

TEST_CASE("1489_movzx eax, cs:word_1400745E4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x62\x1e\x07\x00");
}

TEST_CASE("1490_mov rcx, [r13+0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x4d\x00");
}

TEST_CASE("1491_mov [rdx+rcx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x0a\xff");
}

TEST_CASE("1492_mov al, cs:byte_1400745E6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x55\x1e\x07\x00");
}

TEST_CASE("1493_mov [rdx+rcx+1], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x0a\x01");
}

TEST_CASE("1494_add qword ptr [r15], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\x07\x02");
}

TEST_CASE("1495_jmp short loc_1400027DC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x41");
}

TEST_CASE("1496_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("1497_jz short loc_1400027B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x19");
}

TEST_CASE("1498_lea rdx, unk_140057FE4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x3e\x58\x05\x00");
}

TEST_CASE("1499_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1500_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x06\x1c\x00\x00");
}

TEST_CASE("1501_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1502_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x6f\x02\x00\x00");
}

TEST_CASE("1503_jmp short loc_1400027DC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x24");
}

TEST_CASE("1504_mov rdx, [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x17");
}

TEST_CASE("1505_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1506_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1507_ja loc_140002A12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x49\x02\x00\x00");
}

TEST_CASE("1508_movzx eax, cs:word_1400745E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x10\x1e\x07\x00");
}

TEST_CASE("1509_mov rcx, [r13+0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x4d\x00");
}

TEST_CASE("1510_mov [rdx+rcx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x0a\xff");
}

TEST_CASE("1511_inc qword ptr [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\x07");
}

TEST_CASE("1512_mov [rsi+10h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6e\x10");
}

TEST_CASE("1513_mov rax, [rdi+1C8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xc8\x01\x00\x00");
}

TEST_CASE("1514_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("1515_jz short loc_14000281A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2e");
}

TEST_CASE("1516_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1517_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1518_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1519_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x4d\x38\x00\x00");
}

TEST_CASE("1520_cmp eax, 20000Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x0b\x00\x20\x00");
}

TEST_CASE("1521_jnz short loc_140002812", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x10");
}

TEST_CASE("1522_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("1523_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1524_call sub_140004448", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x3b\x1c\x00\x00");
}

TEST_CASE("1525_jmp loc_1400029FE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xec\x01\x00\x00");
}

TEST_CASE("1526_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1527_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x0b\x02\x00\x00");
}

TEST_CASE("1528_mov ecx, [rbp+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x4d\x20");
}

TEST_CASE("1529_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1530_jz short loc_140002850", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2e");
}

TEST_CASE("1531_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1532_jz short loc_140002847", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x20");
}

TEST_CASE("1533_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("1534_jz short loc_14000283E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("1535_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("1536_jnz loc_140002A19", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xe4\x01\x00\x00");
}

TEST_CASE("1537_mov rax, [rdi+1F0h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xf0\x01\x00\x00");
}

TEST_CASE("1538_jmp short loc_140002857", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x19");
}

TEST_CASE("1539_mov rax, [rdi+1E8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xe8\x01\x00\x00");
}

TEST_CASE("1540_jmp short loc_140002857", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x10");
}

TEST_CASE("1541_mov rax, [rdi+1E0h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xe0\x01\x00\x00");
}

TEST_CASE("1542_jmp short loc_140002857", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x07");
}

TEST_CASE("1543_mov rax, [rdi+1D8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xd8\x01\x00\x00");
}

TEST_CASE("1544_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1545_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1546_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1547_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xe2\x37\x00\x00");
}

TEST_CASE("1548_cmp eax, 20000Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x0b\x00\x20\x00");
}

TEST_CASE("1549_jz short loc_140002802", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x95");
}

TEST_CASE("1550_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1551_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xb0\x01\x00\x00");
}

TEST_CASE("1552_mov rax, [rdi+1D0h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\xd0\x01\x00\x00");
}

TEST_CASE("1553_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("1554_jz short loc_1400028A3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x22");
}

TEST_CASE("1555_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1556_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1557_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1558_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xb8\x37\x00\x00");
}

TEST_CASE("1559_cmp eax, 20000Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x0b\x00\x20\x00");
}

TEST_CASE("1560_jz loc_140002802", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x67\xff\xff\xff");
}

TEST_CASE("1561_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1562_jns loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x82\x01\x00\x00");
}

TEST_CASE("1563_mov rcx, [rsi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x0e");
}

TEST_CASE("1564_mov eax, [rcx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x41\x0c");
}

TEST_CASE("1565_sub eax, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x04");
}

TEST_CASE("1566_cmp eax, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x01");
}

TEST_CASE("1567_ja loc_140002A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x4d\x01\x00\x00");
}

TEST_CASE("1568_test r12b, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xe4");
}

TEST_CASE("1569_jnz short loc_1400028EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x34");
}

TEST_CASE("1570_cmp byte ptr [rcx+19h], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x79\x19\x01");
}

TEST_CASE("1571_jbe short loc_1400028EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x2e");
}

TEST_CASE("1572_mov rax, [rsi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x08");
}

TEST_CASE("1573_cmp dword ptr [rax+5Ch], 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x5c\x06");
}

TEST_CASE("1574_jnz short loc_1400028EE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x24");
}

TEST_CASE("1575_mov rax, [rdi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x40\x02\x00\x00");
}

TEST_CASE("1576_mov r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x01\x00\x00\x00");
}

TEST_CASE("1577_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1578_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1579_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1580_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x62\x37\x00\x00");
}

TEST_CASE("1581_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1582_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x37\x01\x00\x00");
}

TEST_CASE("1583_mov edx, [rbp+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x55\x20");
}

TEST_CASE("1584_cmp edx, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x02");
}

TEST_CASE("1585_jnz short loc_140002953", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x5d");
}

TEST_CASE("1586_mov rax, [rdi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x40\x02\x00\x00");
}

TEST_CASE("1587_mov r9d, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xca");
}

TEST_CASE("1588_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1589_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1590_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1591_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x39\x37\x00\x00");
}

TEST_CASE("1592_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1593_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x0e\x01\x00\x00");
}

TEST_CASE("1594_mov rax, [rsi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x06");
}

TEST_CASE("1595_cmp dword ptr [rax+0Ch], 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x0c\x05");
}

TEST_CASE("1596_jnz loc_140002A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xde\x00\x00\x00");
}

TEST_CASE("1597_mov rax, [rdi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x40\x02\x00\x00");
}

TEST_CASE("1598_mov r9d, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x06\x00\x00\x00");
}

TEST_CASE("1599_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1600_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1601_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1602_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x08\x37\x00\x00");
}

TEST_CASE("1603_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1604_js loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xdd\x00\x00\x00");
}

TEST_CASE("1605_mov r9d, 7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x07\x00\x00\x00");
}

TEST_CASE("1606_jmp loc_1400029E8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x95\x00\x00\x00");
}

TEST_CASE("1607_mov r9, [rsi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x0e");
}

TEST_CASE("1608_movsx rcx, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\xbe\xcc");
}

TEST_CASE("1609_movzx r8d, byte ptr [r9+19h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x0f\xb6\x41\x19");
}

TEST_CASE("1610_lea eax, [r8-1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8d\x40\xff");
}

TEST_CASE("1611_cmp ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3b\xc8");
}

TEST_CASE("1612_jnz short loc_140002972", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0b");
}

TEST_CASE("1613_cmp edx, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x04");
}

TEST_CASE("1614_jz loc_140002A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x92\x00\x00\x00");
}

TEST_CASE("1615_jmp short loc_14000299B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x29");
}

TEST_CASE("1616_lea eax, [rcx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8d\x41\x01");
}

TEST_CASE("1617_cmp r8d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x3b\xc0");
}

TEST_CASE("1618_jle loc_140002A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x8e\x84\x00\x00\x00");
}

TEST_CASE("1619_lea rax, [rcx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x41\x01");
}

TEST_CASE("1620_lea rcx, [rax+rax*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x0c\x80");
}

TEST_CASE("1621_mov rax, [rsi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x08");
}

TEST_CASE("1622_add rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc9");
}

TEST_CASE("1623_cmp dword ptr [rax+rcx*8+20h], 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7c\xc8\x20\x04");
}

TEST_CASE("1624_jz short loc_14000299B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("1625_cmp dword ptr [rax+rcx*8+4], 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7c\xc8\x04\x03");
}

TEST_CASE("1626_jnz short loc_140002A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x67");
}

TEST_CASE("1627_cmp dword ptr [r9+0Ch], 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\x79\x0c\x05");
}

TEST_CASE("1628_jnz short loc_1400029C2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x20");
}

TEST_CASE("1629_mov rax, [rdi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x40\x02\x00\x00");
}

TEST_CASE("1630_mov r9d, 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x05\x00\x00\x00");
}

TEST_CASE("1631_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1632_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1633_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1634_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x8a\x36\x00\x00");
}

TEST_CASE("1635_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1636_js short loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x63");
}

TEST_CASE("1637_mov rax, [rdi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x40\x02\x00\x00");
}

TEST_CASE("1638_mov r9d, 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x03\x00\x00\x00");
}

TEST_CASE("1639_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1640_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1641_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1642_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x6a\x36\x00\x00");
}

TEST_CASE("1643_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1644_js short loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x43");
}

TEST_CASE("1645_mov r9d, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x04\x00\x00\x00");
}

TEST_CASE("1646_mov rax, [rdi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x40\x02\x00\x00");
}

TEST_CASE("1647_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1648_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1649_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1650_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x4a\x36\x00\x00");
}

TEST_CASE("1651_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1652_js short loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x23");
}

TEST_CASE("1653_sub r12b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xec\x01");
}

TEST_CASE("1654_js short loc_140002A20", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x18");
}

TEST_CASE("1655_mov rdx, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x54\x24\x60");
}

TEST_CASE("1656_jmp loc_140002724", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x12\xfd\xff\xff");
}

TEST_CASE("1657_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("1658_jmp short loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x0c");
}

TEST_CASE("1659_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("1660_jmp short loc_140002A25", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x05");
}

TEST_CASE("1661_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("1662_mov rbx, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x68");
}

TEST_CASE("1663_mov rbp, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x70");
}

TEST_CASE("1664_mov rsi, [rsp+58h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x78");
}

TEST_CASE("1665_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("1666_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("1667_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("1668_pop r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5d");
}

TEST_CASE("1669_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("1670_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("1671_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("1672_mov rax, rsp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc4");
}

TEST_CASE("1673_mov [rax+8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x58\x08");
}

TEST_CASE("1674_mov [rax+10h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x68\x10");
}

TEST_CASE("1675_mov [rax+18h], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x70\x18");
}

TEST_CASE("1676_mov [rax+20h], rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x78\x20");
}

TEST_CASE("1677_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("1678_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("1679_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("1680_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("1681_mov rax, [rcx+230h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x30\x02\x00\x00");
}

TEST_CASE("1682_mov rsi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf0");
}

TEST_CASE("1683_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("1684_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("1685_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xc5\x35\x00\x00");
}

TEST_CASE("1686_xor r12d, r12d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xe4");
}

TEST_CASE("1687_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1688_js loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x77\x02\x00\x00");
}

TEST_CASE("1689_cmp [rdi+8], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x67\x08");
}

TEST_CASE("1690_jnz short loc_140002AEB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x57");
}

TEST_CASE("1691_cmp qword ptr [rsi+18h], 0FFFFFFFFFFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x7e\x18\xff");
}

TEST_CASE("1692_jz short loc_140002AEB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x50");
}

TEST_CASE("1693_lea rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x46\x10");
}

TEST_CASE("1694_mov rcx, [rax]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x08");
}

TEST_CASE("1695_mov r14, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xf0");
}

TEST_CASE("1696_cmp [rcx+40h], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x61\x40");
}

TEST_CASE("1697_jz short loc_140002AEF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x44");
}

TEST_CASE("1698_cmp [rcx+34h], r12d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x39\x61\x34");
}

TEST_CASE("1699_jnz short loc_140002AEF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x3e");
}

TEST_CASE("1700_mov ecx, [rcx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x49\x30");
}

TEST_CASE("1701_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("1702_jz short loc_140002AC8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x10");
}

TEST_CASE("1703_cmp ecx, 0C4h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x81\xf9\xc4\x00\x00\x00");
}

TEST_CASE("1704_jz short loc_140002AC8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x08");
}

TEST_CASE("1705_cmp ecx, 0C5h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x81\xf9\xc5\x00\x00\x00");
}

TEST_CASE("1706_jnz short loc_140002AEF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x27");
}

TEST_CASE("1707_mov rax, [rdi+208h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x08\x02\x00\x00");
}

TEST_CASE("1708_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1709_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1710_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1711_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x6a\x35\x00\x00");
}

TEST_CASE("1712_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1713_jns loc_140002D00", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x1a\x02\x00\x00");
}

TEST_CASE("1714_jmp loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x1a\x02\x00\x00");
}

TEST_CASE("1715_lea r14, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x76\x10");
}

TEST_CASE("1716_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("1717_mov ebp, [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x68\x30");
}

TEST_CASE("1718_mov r15d, [rax+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x78\x34");
}

TEST_CASE("1719_test ebp, ebp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xed");
}

TEST_CASE("1720_jnz short loc_140002B02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x05");
}

TEST_CASE("1721_test r15d, r15d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xff");
}

TEST_CASE("1722_jz short loc_140002AC8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\xc6");
}

TEST_CASE("1723_cmp [rax+40h], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x60\x40");
}

TEST_CASE("1724_jz short loc_140002B2C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x24");
}

TEST_CASE("1725_cmp [rax+48h], r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x39\x60\x48");
}

TEST_CASE("1726_jz short loc_140002B2C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x1e");
}

TEST_CASE("1727_mov rax, [rdi+218h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x18\x02\x00\x00");
}

TEST_CASE("1728_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1729_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1730_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1731_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x24\x35\x00\x00");
}

TEST_CASE("1732_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1733_js loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xd9\x01\x00\x00");
}

TEST_CASE("1734_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("1735_jz short loc_140002B49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("1736_lea rdx, unk_1400580AC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x74\x55\x05\x00");
}

TEST_CASE("1737_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1738_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x74\x18\x00\x00");
}

TEST_CASE("1739_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1740_jns short loc_140002B75", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x31");
}

TEST_CASE("1741_jmp loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xbc\x01\x00\x00");
}

TEST_CASE("1742_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1743_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1744_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1745_jbe short loc_140002B61", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("1746_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("1747_jmp loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xa4\x01\x00\x00");
}

TEST_CASE("1748_movzx eax, cs:word_140074600", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x98\x1a\x07\x00");
}

TEST_CASE("1749_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("1750_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("1751_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("1752_test ebp, ebp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xed");
}

TEST_CASE("1753_jz short loc_140002B9E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x25");
}

TEST_CASE("1754_mov r9, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x0e");
}

TEST_CASE("1755_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1756_mov rax, [rdi+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x00\x02\x00\x00");
}

TEST_CASE("1757_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1758_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1759_mov r9d, [r9+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\x49\x30");
}

TEST_CASE("1760_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xb2\x34\x00\x00");
}

TEST_CASE("1761_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1762_js loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x67\x01\x00\x00");
}

TEST_CASE("1763_test r15d, r15d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xff");
}

TEST_CASE("1764_jz loc_140002CC1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x1a\x01\x00\x00");
}

TEST_CASE("1765_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("1766_jz short loc_140002BC4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("1767_lea rdx, unk_140057FCC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x19\x54\x05\x00");
}

TEST_CASE("1768_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1769_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf9\x17\x00\x00");
}

TEST_CASE("1770_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1771_jns short loc_140002BE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x27");
}

TEST_CASE("1772_jmp loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x41\x01\x00\x00");
}

TEST_CASE("1773_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1774_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1775_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1776_ja short loc_140002B57", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x85");
}

TEST_CASE("1777_movzx eax, cs:word_1400745DC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x03\x1a\x07\x00");
}

TEST_CASE("1778_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("1779_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("1780_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("1781_mov r9, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x4e\x10");
}

TEST_CASE("1782_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("1783_mov rax, [rdi+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x00\x02\x00\x00");
}

TEST_CASE("1784_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("1785_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("1786_mov r9d, [r9+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\x49\x34");
}

TEST_CASE("1787_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x44\x34\x00\x00");
}

TEST_CASE("1788_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1789_js loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xf9\x00\x00\x00");
}

TEST_CASE("1790_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("1791_mov cl, [rax+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x48\x38");
}

TEST_CASE("1792_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("1793_jz loc_140002CC1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa6\x00\x00\x00");
}

TEST_CASE("1794_cmp dword ptr [rax+28h], 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x28\x03");
}

TEST_CASE("1795_jz loc_140002CC1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x9c\x00\x00\x00");
}

TEST_CASE("1796_cmp cl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xf9\x01");
}

TEST_CASE("1797_ja short loc_140002C34", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x0a");
}

TEST_CASE("1798_cmp [rdi+6], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x67\x06");
}

TEST_CASE("1799_jz loc_140002CC1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x8d\x00\x00\x00");
}

TEST_CASE("1800_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("1801_jz short loc_140002C68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2f");
}

TEST_CASE("1802_mov dl, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x02");
}

TEST_CASE("1803_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1804_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xfd\x16\x00\x00");
}

TEST_CASE("1805_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1806_js loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xba\x00\x00\x00");
}

TEST_CASE("1807_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("1808_jz short loc_140002C68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("1809_lea rdx, unk_140057FCC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x75\x53\x05\x00");
}

TEST_CASE("1810_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1811_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x55\x17\x00\x00");
}

TEST_CASE("1812_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1813_jns short loc_140002C8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("1814_jmp loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x9d\x00\x00\x00");
}

TEST_CASE("1815_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1816_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1817_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1818_ja loc_140002B57", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xdd\xfe\xff\xff");
}

TEST_CASE("1819_movzx eax, cs:word_1400745DC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x5b\x19\x07\x00");
}

TEST_CASE("1820_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("1821_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("1822_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("1823_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("1824_jz short loc_140002CA1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0e");
}

TEST_CASE("1825_mov dl, 0Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0b");
}

TEST_CASE("1826_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1827_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xa3\x16\x00\x00");
}

TEST_CASE("1828_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1829_js short loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x64");
}

TEST_CASE("1830_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("1831_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("1832_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("1833_mov [rsp+48h+var_28], r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x89\x64\x24\x20");
}

TEST_CASE("1834_xor r8d, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc0");
}

TEST_CASE("1835_movzx edx, byte ptr [rax+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x50\x38");
}

TEST_CASE("1836_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xb7\x19\x00\x00");
}

TEST_CASE("1837_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1838_js short loc_140002D05", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x44");
}

TEST_CASE("1839_cmp [rbx], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x23");
}

TEST_CASE("1840_jz short loc_140002CDA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x14");
}

TEST_CASE("1841_lea rdx, unk_1400580DC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x0f\x54\x05\x00");
}

TEST_CASE("1842_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1843_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xdf\x16\x00\x00");
}

TEST_CASE("1844_jmp loc_140002ADE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x04\xfe\xff\xff");
}

TEST_CASE("1845_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1846_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1847_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1848_ja loc_140002B57", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x6b\xfe\xff\xff");
}

TEST_CASE("1849_movzx eax, cs:word_140074608", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x15\x19\x07\x00");
}

TEST_CASE("1850_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("1851_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("1852_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("1853_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("1854_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("1855_mov rbp, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x58");
}

TEST_CASE("1856_mov rsi, [rsp+48h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x60");
}

TEST_CASE("1857_mov rdi, [rsp+48h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x7c\x24\x68");
}

TEST_CASE("1858_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("1859_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("1860_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("1861_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("1862_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("1863_mov rax, rsp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc4");
}

TEST_CASE("1864_mov [rax+8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x58\x08");
}

TEST_CASE("1865_mov [rax+10h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x68\x10");
}

TEST_CASE("1866_mov [rax+18h], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x70\x18");
}

TEST_CASE("1867_mov [rax+20h], rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x78\x20");
}

TEST_CASE("1868_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("1869_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("1870_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("1871_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("1872_mov r14, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xf0");
}

TEST_CASE("1873_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("1874_movsxd rdx, dword ptr [rax+4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x50\x04");
}

TEST_CASE("1875_cmp rdx, 701h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x81\xfa\x01\x07\x00\x00");
}

TEST_CASE("1876_jb short loc_140002D66", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x04");
}

TEST_CASE("1877_mov al, [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x03");
}

TEST_CASE("1878_jmp short loc_140002D78", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x12");
}

TEST_CASE("1879_lea rax, off_140058730; \"invalid\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x05\xc3\x59\x05\x00");
}

TEST_CASE("1880_lea rdi, [rdx+rdx*8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x3c\xd2");
}

TEST_CASE("1881_add rdi, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xf8");
}

TEST_CASE("1882_mov al, [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x03");
}

TEST_CASE("1883_jnz short loc_140002DC5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x4d");
}

TEST_CASE("1884_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("1885_jz short loc_140002DAF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x33");
}

TEST_CASE("1886_lea rdx, unk_140058070", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xed\x52\x05\x00");
}

TEST_CASE("1887_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1888_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x29\x16\x00\x00");
}

TEST_CASE("1889_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1890_js short loc_140002D94", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x05");
}

TEST_CASE("1891_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("1892_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("1893_mov rbp, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x38");
}

TEST_CASE("1894_mov rsi, [rsp+28h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x40");
}

TEST_CASE("1895_mov rdi, [rsp+28h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x7c\x24\x48");
}

TEST_CASE("1896_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("1897_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("1898_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("1899_mov r8d, [rsi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x38");
}

TEST_CASE("1900_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("1901_lea rdx, off_140058060; \"invalid\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xa2\x52\x05\x00");
}

TEST_CASE("1902_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x3d\x1d\x00\x00");
}

TEST_CASE("1903_jmp short loc_140002D8B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xc6");
}

TEST_CASE("1904_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("1905_jz short loc_140002DD7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0e");
}

TEST_CASE("1906_mov dl, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x06");
}

TEST_CASE("1907_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("1908_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x6d\x15\x00\x00");
}

TEST_CASE("1909_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1910_js short loc_140002D94", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\xbd");
}

TEST_CASE("1911_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("1912_lea rbp, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x6b\x10");
}

TEST_CASE("1913_cmp dword ptr [rax+68h], 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x68\x03");
}

TEST_CASE("1914_jnz short loc_140002DFB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x17");
}

TEST_CASE("1915_mov r8d, [rsi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x38");
}

TEST_CASE("1916_lea rdx, off_140058038", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x49\x52\x05\x00");
}

TEST_CASE("1917_mov rcx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcd");
}

TEST_CASE("1918_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x09\x1d\x00\x00");
}

TEST_CASE("1919_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1920_js short loc_140002D94", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x99");
}

TEST_CASE("1921_mov r8d, [rsi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x38");
}

TEST_CASE("1922_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("1923_mov rcx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcd");
}

TEST_CASE("1924_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf6\x1c\x00\x00");
}

TEST_CASE("1925_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("1926_js short loc_140002D94", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x86");
}

TEST_CASE("1927_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("1928_xor cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x32\xc9");
}

TEST_CASE("1929_mov dl, [rax+19h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x50\x19");
}

TEST_CASE("1930_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("1931_jz loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x2b\x01\x00\x00");
}

TEST_CASE("1932_mov r9, [r14+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4e\x08");
}

TEST_CASE("1933_movzx eax, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xc1");
}

TEST_CASE("1934_lea r8, [rax+rax*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x04\x80");
}

TEST_CASE("1935_shl r8, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe0\x04");
}

TEST_CASE("1936_add r8, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x03\xc1");
}

TEST_CASE("1937_cmp dword ptr [r8+20h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\x78\x20\x02");
}

TEST_CASE("1938_jnz short loc_140002E45", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0e");
}

TEST_CASE("1939_mov eax, [r8+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\x40\x28");
}

TEST_CASE("1940_cmp eax, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x01");
}

TEST_CASE("1941_jz short loc_140002E50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x10");
}

TEST_CASE("1942_cmp eax, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x04");
}

TEST_CASE("1943_jz short loc_140002E50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0b");
}

TEST_CASE("1944_inc cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\xfe\xc1");
}

TEST_CASE("1945_cmp cl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3a\xca");
}

TEST_CASE("1946_jb short loc_140002E22", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\xd7");
}

TEST_CASE("1947_jmp loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf9\x00\x00\x00");
}

TEST_CASE("1948_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("1949_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("1950_call sub_1400044A4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x49\x16\x00\x00");
}

TEST_CASE("1951_sub eax, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x08");
}

TEST_CASE("1952_jz loc_140002F27", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xc3\x00\x00\x00");
}

TEST_CASE("1953_sub eax, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x08");
}

TEST_CASE("1954_jz loc_140002F10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa3\x00\x00\x00");
}

TEST_CASE("1955_sub eax, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x10");
}

TEST_CASE("1956_jz loc_140002EF9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x83\x00\x00\x00");
}

TEST_CASE("1957_sub eax, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x20");
}

TEST_CASE("1958_jz short loc_140002EE2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x67");
}

TEST_CASE("1959_sub eax, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x40");
}

TEST_CASE("1960_jz short loc_140002ECB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4b");
}

TEST_CASE("1961_sub eax, 80h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x2d\x80\x00\x00\x00");
}

TEST_CASE("1962_jz short loc_140002EB0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x29");
}

TEST_CASE("1963_cmp eax, 100h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x00\x01\x00\x00");
}

TEST_CASE("1964_jnz loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xb7\x00\x00\x00");
}

TEST_CASE("1965_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1966_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1967_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1968_ja loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xa5\x00\x00\x00");
}

TEST_CASE("1969_movzx eax, cs:word_1400747D0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x25\x19\x07\x00");
}

TEST_CASE("1970_jmp loc_140002F3C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x8c\x00\x00\x00");
}

TEST_CASE("1971_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1972_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1973_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1974_ja loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x87\x00\x00\x00");
}

TEST_CASE("1975_movzx eax, cs:word_1400747B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xef\x18\x07\x00");
}

TEST_CASE("1976_jmp short loc_140002F3C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x71");
}

TEST_CASE("1977_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1978_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1979_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1980_ja short loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x70");
}

TEST_CASE("1981_movzx eax, cs:word_1400747A4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xc4\x18\x07\x00");
}

TEST_CASE("1982_jmp short loc_140002F3C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x5a");
}

TEST_CASE("1983_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1984_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1985_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1986_ja short loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x59");
}

TEST_CASE("1987_movzx eax, cs:word_140074784", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x8d\x18\x07\x00");
}

TEST_CASE("1988_jmp short loc_140002F3C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x43");
}

TEST_CASE("1989_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1990_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1991_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1992_ja short loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x42");
}

TEST_CASE("1993_movzx eax, cs:word_1400745F4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xe6\x16\x07\x00");
}

TEST_CASE("1994_jmp short loc_140002F3C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2c");
}

TEST_CASE("1995_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("1996_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("1997_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("1998_ja short loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x2b");
}

TEST_CASE("1999_movzx eax, cs:word_140074754", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x2f\x18\x07\x00");
}

TEST_CASE("2000_jmp short loc_140002F3C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x15");
}

TEST_CASE("2001_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2002_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2003_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2004_ja short loc_140002F49", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x14");
}

TEST_CASE("2005_movzx eax, cs:word_140074740", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x04\x18\x07\x00");
}

TEST_CASE("2006_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2007_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2008_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2009_cmp byte ptr [rsi+9], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x7e\x09\x00");
}

TEST_CASE("2010_jz loc_140002D8F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x3c\xfe\xff\xff");
}

TEST_CASE("2011_mov rcx, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x0e");
}

TEST_CASE("2012_mov edx, [rcx+68h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x51\x68");
}

TEST_CASE("2013_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("2014_jz loc_140002D8F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x2e\xfe\xff\xff");
}

TEST_CASE("2015_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("2016_jz short loc_140002F7E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2017_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("2018_jz short loc_140002F75", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("2019_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("2020_jmp loc_140002D94", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x1f\xfe\xff\xff");
}

TEST_CASE("2021_lea rdx, off_140058118; \" near\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x9c\x51\x05\x00");
}

TEST_CASE("2022_jmp short loc_140002F85", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x07");
}

TEST_CASE("2023_lea rdx, off_140058518; \" short\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x93\x55\x05\x00");
}

TEST_CASE("2024_mov r8d, [rsi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x38");
}

TEST_CASE("2025_mov rcx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcd");
}

TEST_CASE("2026_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x6f\x1b\x00\x00");
}

TEST_CASE("2027_jmp loc_140002D94", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xfe\xfd\xff\xff");
}

TEST_CASE("2028_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2029_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2030_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2031_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("2032_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("2033_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2034_movsxd rdi, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x63\xf9");
}

TEST_CASE("2035_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("2036_jz short loc_140002FD2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("2037_lea rdx, unk_14005850C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x48\x55\x05\x00");
}

TEST_CASE("2038_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2039_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xe8\x13\x00\x00");
}

TEST_CASE("2040_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2041_jns short loc_140002FFB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("2042_jmp short loc_14000302F", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x5d");
}

TEST_CASE("2043_mov rdx, [rdx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x28");
}

TEST_CASE("2044_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2045_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2046_jbe short loc_140002FE7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("2047_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("2048_jmp short loc_14000302F", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x48");
}

TEST_CASE("2049_movzx eax, cs:word_140074734", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x46\x17\x07\x00");
}

TEST_CASE("2050_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2051_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2052_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2053_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("2054_cmp rdi, 10Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x81\xff\x0a\x01\x00\x00");
}

TEST_CASE("2055_jb short loc_14000300C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x04");
}

TEST_CASE("2056_xor edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("2057_jmp short loc_14000301A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x0e");
}

TEST_CASE("2058_lea rax, [rdi+rdi*8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x04\xff");
}

TEST_CASE("2059_lea rdx, off_140006A20; \"none\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x09\x3a\x00\x00");
}

TEST_CASE("2060_add rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xd0");
}

TEST_CASE("2061_mov r8d, [rsi+3Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x3c");
}

TEST_CASE("2062_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("2063_jnz short loc_14000302A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x07");
}

TEST_CASE("2064_lea rdx, off_140058080; \"invalid\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x56\x50\x05\x00");
}

TEST_CASE("2065_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xd1\x1a\x00\x00");
}

TEST_CASE("2066_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("2067_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("2068_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("2069_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2070_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2071_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2072_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2073_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2074_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("2075_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("2076_mov rdi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf8");
}

TEST_CASE("2077_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2078_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("2079_cmp dword ptr [rax+68h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x68\x00");
}

TEST_CASE("2080_jz short loc_1400030AE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4d");
}

TEST_CASE("2081_mov rax, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x10");
}

TEST_CASE("2082_cmp dword ptr [rax+20h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x20\x02");
}

TEST_CASE("2083_jnz short loc_1400030AE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x43");
}

TEST_CASE("2084_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("2085_jz short loc_140003085", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("2086_lea rdx, unk_14005810C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x95\x50\x05\x00");
}

TEST_CASE("2087_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2088_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x35\x13\x00\x00");
}

TEST_CASE("2089_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2090_jns short loc_1400030AE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("2091_jmp short loc_1400030BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x37");
}

TEST_CASE("2092_mov rdx, [rdx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x28");
}

TEST_CASE("2093_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2094_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2095_jbe short loc_14000309A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("2096_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("2097_jmp short loc_1400030BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x22");
}

TEST_CASE("2098_movzx eax, cs:word_140074610", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x6f\x15\x07\x00");
}

TEST_CASE("2099_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2100_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2101_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2102_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2103_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2104_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2105_call sub_140001250", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x94\xe1\xff\xff");
}

TEST_CASE("2106_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("2107_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("2108_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("2109_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2110_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2111_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2112_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2113_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2114_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("2115_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("2116_mov rsi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf0");
}

TEST_CASE("2117_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("2118_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("2119_jz short loc_1400030FF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("2120_mov dl, 0Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0a");
}

TEST_CASE("2121_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("2122_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x49\x12\x00\x00");
}

TEST_CASE("2123_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2124_js loc_14000324A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x4b\x01\x00\x00");
}

TEST_CASE("2125_mov ecx, [rbx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x4b\x20");
}

TEST_CASE("2126_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("2127_jz loc_1400031AC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa2\x00\x00\x00");
}

TEST_CASE("2128_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("2129_jz loc_1400031AC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x99\x00\x00\x00");
}

TEST_CASE("2130_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("2131_jnz loc_1400031B9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x9d\x00\x00\x00");
}

TEST_CASE("2132_movsxd rdx, dword ptr [rbx+1Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x53\x1c");
}

TEST_CASE("2133_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("2134_jz short loc_14000316C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x48");
}

TEST_CASE("2135_cmp edx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3b\xd1");
}

TEST_CASE("2136_jnz loc_1400031B9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x8d\x00\x00\x00");
}

TEST_CASE("2137_mov r9b, [rbx+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4b\x49");
}

TEST_CASE("2138_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("2139_imul r8, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xc2\xb0\x00\x00\x00");
}

TEST_CASE("2140_mov rdx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x10");
}

TEST_CASE("2141_mov rax, [r8+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x18\xa8\x00\x00\x00");
}

TEST_CASE("2142_mov rdx, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x48");
}

TEST_CASE("2143_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("2144_mov rax, [r8+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x18\x50");
}

TEST_CASE("2145_mov r8b, [rbx+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x43\x24");
}

TEST_CASE("2146_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("2147_mov al, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x43\x48");
}

TEST_CASE("2148_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("2149_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x62\x17\x00\x00");
}

TEST_CASE("2150_jmp short loc_14000319A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2e");
}

TEST_CASE("2151_mov r8b, [rbx+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x43\x24");
}

TEST_CASE("2152_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("2153_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("2154_mov rdx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x10");
}

TEST_CASE("2155_mov rax, [r9+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x19\xa8\x00\x00\x00");
}

TEST_CASE("2156_mov r9, [r9+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x19\x50");
}

TEST_CASE("2157_mov rdx, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x48");
}

TEST_CASE("2158_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("2159_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xda\x14\x00\x00");
}

TEST_CASE("2160_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2161_js loc_14000324A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xa8\x00\x00\x00");
}

TEST_CASE("2162_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("2163_jmp loc_14000324A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x9e\x00\x00\x00");
}

TEST_CASE("2164_movsxd rdx, dword ptr [rbx+1Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x53\x1c");
}

TEST_CASE("2165_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("2166_jz short loc_140003208", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x54");
}

TEST_CASE("2167_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("2168_jz short loc_1400031C3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("2169_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("2170_jmp loc_14000324A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x87\x00\x00\x00");
}

TEST_CASE("2171_mov r9b, [rbx+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4b\x49");
}

TEST_CASE("2172_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("2173_imul r8, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xc2\xb0\x00\x00\x00");
}

TEST_CASE("2174_mov rdx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x10");
}

TEST_CASE("2175_mov rax, [r8+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x18\xa8\x00\x00\x00");
}

TEST_CASE("2176_mov rdx, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x48");
}

TEST_CASE("2177_mov [rsp+48h+var_10], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x38");
}

TEST_CASE("2178_mov rax, [r8+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x18\x50");
}

TEST_CASE("2179_mov r8b, [rbx+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x43\x24");
}

TEST_CASE("2180_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("2181_mov al, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x43\x48");
}

TEST_CASE("2182_mov byte ptr [rsp+48h+var_20], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x24\x28\x00");
}

TEST_CASE("2183_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("2184_call sub_1400047B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xb2\x15\x00\x00");
}

TEST_CASE("2185_jmp short loc_14000319A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x92");
}

TEST_CASE("2186_imul r8, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xc2\xb0\x00\x00\x00");
}

TEST_CASE("2187_mov rdx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x10");
}

TEST_CASE("2188_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("2189_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("2190_mov rax, [r8+rbx+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x18\xa8\x00\x00\x00");
}

TEST_CASE("2191_mov rdx, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x48");
}

TEST_CASE("2192_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("2193_mov rax, [r8+rbx+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x18\x50");
}

TEST_CASE("2194_mov r8b, [rbx+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x43\x24");
}

TEST_CASE("2195_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("2196_call sub_1400045A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x62\x13\x00\x00");
}

TEST_CASE("2197_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2198_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("2199_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("2200_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("2201_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("2202_mov rsi, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x58");
}

TEST_CASE("2203_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("2204_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2205_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2206_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2207_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2208_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2209_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("2210_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("2211_mov rdi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf8");
}

TEST_CASE("2212_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2213_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("2214_jz short loc_140003292", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("2215_lea rdx, unk_140058054", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd0\x4d\x05\x00");
}

TEST_CASE("2216_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2217_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x28\x11\x00\x00");
}

TEST_CASE("2218_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2219_jns short loc_1400032BB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("2220_jmp short loc_1400032C9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x37");
}

TEST_CASE("2221_mov rdx, [rdx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x28");
}

TEST_CASE("2222_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2223_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2224_jbe short loc_1400032A7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("2225_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("2226_jmp short loc_1400032C9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x22");
}

TEST_CASE("2227_movzx eax, cs:word_140074458", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xaa\x11\x07\x00");
}

TEST_CASE("2228_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2229_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2230_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2231_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2232_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2233_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2234_call sub_1400015A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xd7\xe2\xff\xff");
}

TEST_CASE("2235_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("2236_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("2237_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("2238_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2239_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2240_mov [rsp+arg_8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x10");
}

TEST_CASE("2241_mov [rsp+arg_10], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x18");
}

TEST_CASE("2242_mov [rsp+arg_18], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x20");
}

TEST_CASE("2243_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2244_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("2245_push r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x55");
}

TEST_CASE("2246_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("2247_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("2248_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("2249_mov rax, [rcx+238h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x81\x38\x02\x00\x00");
}

TEST_CASE("2250_mov rdi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf8");
}

TEST_CASE("2251_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2252_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("2253_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x36\x2d\x00\x00");
}

TEST_CASE("2254_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2255_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x50\x03\x00\x00");
}

TEST_CASE("2256_mov rax, [rsi+1F8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xf8\x01\x00\x00");
}

TEST_CASE("2257_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2258_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2259_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2260_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x18\x2d\x00\x00");
}

TEST_CASE("2261_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2262_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x32\x03\x00\x00");
}

TEST_CASE("2263_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("2264_lea r13, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x6b\x48");
}

TEST_CASE("2265_lea r15, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x7b\x28");
}

TEST_CASE("2266_jz short loc_14000334B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x06");
}

TEST_CASE("2267_mov rdx, [r13+0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x55\x00");
}

TEST_CASE("2268_jmp short loc_14000334E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x03");
}

TEST_CASE("2269_mov rdx, [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x17");
}

TEST_CASE("2270_mov rax, [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x07");
}

TEST_CASE("2271_xor r12b, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x32\xe4");
}

TEST_CASE("2272_mov [rsp+58h+arg_0], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x54\x24\x60");
}

TEST_CASE("2273_cmp [rax+19h], r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x60\x19");
}

TEST_CASE("2274_jbe loc_140003665", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x86\x02\x03\x00\x00");
}

TEST_CASE("2275_movzx eax, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb6\xc4");
}

TEST_CASE("2276_lea rbp, [rax+rax*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x2c\x80");
}

TEST_CASE("2277_shl rbp, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xc1\xe5\x04");
}

TEST_CASE("2278_add rbp, [rdi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\x6f\x08");
}

TEST_CASE("2279_cmp r12b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xfc\x01");
}

TEST_CASE("2280_jnz short loc_140003389", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x10");
}

TEST_CASE("2281_cmp dword ptr [rbp+20h], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7d\x20\x01");
}

TEST_CASE("2282_jnz short loc_140003389", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0a");
}

TEST_CASE("2283_cmp dword ptr [rbp+0Ch], 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7d\x0c\x06");
}

TEST_CASE("2284_jz loc_140003641", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xb8\x02\x00\x00");
}

TEST_CASE("2285_mov cl, [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x0b");
}

TEST_CASE("2286_mov rax, r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc7");
}

TEST_CASE("2287_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("2288_cmovnz rax, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\x45\xc5");
}

TEST_CASE("2289_mov r14, [rax]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x30");
}

TEST_CASE("2290_cmp r14, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xf2");
}

TEST_CASE("2291_jz short loc_1400033DA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x3e");
}

TEST_CASE("2292_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("2293_jz short loc_1400033A9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x09");
}

TEST_CASE("2294_lea rdx, unk_140058000", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x59\x4c\x05\x00");
}

TEST_CASE("2295_jmp short loc_1400033E5", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x3c");
}

TEST_CASE("2296_mov rdx, [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x17");
}

TEST_CASE("2297_lea rax, [rdx+2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x02");
}

TEST_CASE("2298_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2299_ja loc_140003657", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x9d\x02\x00\x00");
}

TEST_CASE("2300_movzx eax, cs:word_1400745E4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x23\x12\x07\x00");
}

TEST_CASE("2301_mov rcx, [r13+0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x4d\x00");
}

TEST_CASE("2302_mov [rdx+rcx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x0a\xff");
}

TEST_CASE("2303_mov al, cs:byte_1400745E6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x16\x12\x07\x00");
}

TEST_CASE("2304_mov [rdx+rcx+1], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x0a\x01");
}

TEST_CASE("2305_add qword ptr [r15], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\x07\x02");
}

TEST_CASE("2306_jmp short loc_14000341B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x41");
}

TEST_CASE("2307_test cl, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc9");
}

TEST_CASE("2308_jz short loc_1400033F7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x19");
}

TEST_CASE("2309_lea rdx, unk_140057FE4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xff\x4b\x05\x00");
}

TEST_CASE("2310_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2311_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xc7\x0f\x00\x00");
}

TEST_CASE("2312_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2313_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x75\x02\x00\x00");
}

TEST_CASE("2314_jmp short loc_14000341B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x24");
}

TEST_CASE("2315_mov rdx, [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x17");
}

TEST_CASE("2316_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2317_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2318_ja loc_140003657", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x4f\x02\x00\x00");
}

TEST_CASE("2319_movzx eax, cs:word_1400745E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xd1\x11\x07\x00");
}

TEST_CASE("2320_mov rcx, [r13+0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x4d\x00");
}

TEST_CASE("2321_mov [rdx+rcx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x0a\xff");
}

TEST_CASE("2322_inc qword ptr [r15]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\x07");
}

TEST_CASE("2323_mov [rdi+10h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6f\x10");
}

TEST_CASE("2324_mov rax, [rsi+1C8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xc8\x01\x00\x00");
}

TEST_CASE("2325_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("2326_jz short loc_140003459", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2e");
}

TEST_CASE("2327_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2328_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2329_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2330_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x0e\x2c\x00\x00");
}

TEST_CASE("2331_cmp eax, 20000Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x0b\x00\x20\x00");
}

TEST_CASE("2332_jnz short loc_140003451", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x10");
}

TEST_CASE("2333_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("2334_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2335_call sub_140004448", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xfc\x0f\x00\x00");
}

TEST_CASE("2336_jmp loc_14000363D", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xec\x01\x00\x00");
}

TEST_CASE("2337_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2338_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x11\x02\x00\x00");
}

TEST_CASE("2339_mov ecx, [rbp+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x4d\x20");
}

TEST_CASE("2340_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("2341_jz short loc_14000348F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2e");
}

TEST_CASE("2342_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("2343_jz short loc_140003486", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x20");
}

TEST_CASE("2344_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("2345_jz short loc_14000347D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("2346_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("2347_jnz loc_14000365E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xea\x01\x00\x00");
}

TEST_CASE("2348_mov rax, [rsi+1F0h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xf0\x01\x00\x00");
}

TEST_CASE("2349_jmp short loc_140003496", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x19");
}

TEST_CASE("2350_mov rax, [rsi+1E8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xe8\x01\x00\x00");
}

TEST_CASE("2351_jmp short loc_140003496", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x10");
}

TEST_CASE("2352_mov rax, [rsi+1E0h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xe0\x01\x00\x00");
}

TEST_CASE("2353_jmp short loc_140003496", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x07");
}

TEST_CASE("2354_mov rax, [rsi+1D8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xd8\x01\x00\x00");
}

TEST_CASE("2355_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2356_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2357_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2358_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xa3\x2b\x00\x00");
}

TEST_CASE("2359_cmp eax, 20000Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x0b\x00\x20\x00");
}

TEST_CASE("2360_jz short loc_140003441", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x95");
}

TEST_CASE("2361_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2362_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xb6\x01\x00\x00");
}

TEST_CASE("2363_mov rax, [rsi+1D0h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\xd0\x01\x00\x00");
}

TEST_CASE("2364_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("2365_jz short loc_1400034E2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x22");
}

TEST_CASE("2366_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2367_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2368_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2369_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x79\x2b\x00\x00");
}

TEST_CASE("2370_cmp eax, 20000Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x0b\x00\x20\x00");
}

TEST_CASE("2371_jz loc_140003441", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x67\xff\xff\xff");
}

TEST_CASE("2372_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2373_jns loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x88\x01\x00\x00");
}

TEST_CASE("2374_mov rcx, [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x0f");
}

TEST_CASE("2375_mov eax, [rcx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x41\x0c");
}

TEST_CASE("2376_sub eax, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x04");
}

TEST_CASE("2377_cmp eax, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x01");
}

TEST_CASE("2378_ja loc_140003641", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x4d\x01\x00\x00");
}

TEST_CASE("2379_test r12b, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xe4");
}

TEST_CASE("2380_jnz short loc_14000352D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x34");
}

TEST_CASE("2381_cmp byte ptr [rcx+19h], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x79\x19\x01");
}

TEST_CASE("2382_jbe short loc_14000352D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x2e");
}

TEST_CASE("2383_mov rax, [rdi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x08");
}

TEST_CASE("2384_cmp dword ptr [rax+5Ch], 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x5c\x06");
}

TEST_CASE("2385_jnz short loc_14000352D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x24");
}

TEST_CASE("2386_mov rax, [rsi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x40\x02\x00\x00");
}

TEST_CASE("2387_mov r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x01\x00\x00\x00");
}

TEST_CASE("2388_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2389_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2390_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2391_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x23\x2b\x00\x00");
}

TEST_CASE("2392_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2393_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x3d\x01\x00\x00");
}

TEST_CASE("2394_mov edx, [rbp+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x55\x20");
}

TEST_CASE("2395_cmp edx, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x02");
}

TEST_CASE("2396_jnz short loc_140003592", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x5d");
}

TEST_CASE("2397_mov rax, [rsi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x40\x02\x00\x00");
}

TEST_CASE("2398_mov r9d, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xca");
}

TEST_CASE("2399_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2400_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2401_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2402_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xfa\x2a\x00\x00");
}

TEST_CASE("2403_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2404_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x14\x01\x00\x00");
}

TEST_CASE("2405_mov rax, [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x07");
}

TEST_CASE("2406_cmp dword ptr [rax+0Ch], 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x0c\x05");
}

TEST_CASE("2407_jnz loc_140003641", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xde\x00\x00\x00");
}

TEST_CASE("2408_mov rax, [rsi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x40\x02\x00\x00");
}

TEST_CASE("2409_mov r9d, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x06\x00\x00\x00");
}

TEST_CASE("2410_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2411_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2412_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2413_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xc9\x2a\x00\x00");
}

TEST_CASE("2414_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2415_js loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xe3\x00\x00\x00");
}

TEST_CASE("2416_mov r9d, 7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x07\x00\x00\x00");
}

TEST_CASE("2417_jmp loc_140003627", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x95\x00\x00\x00");
}

TEST_CASE("2418_mov r9, [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x0f");
}

TEST_CASE("2419_movzx ecx, r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb6\xcc");
}

TEST_CASE("2420_movzx r8d, byte ptr [r9+19h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x0f\xb6\x41\x19");
}

TEST_CASE("2421_lea eax, [r8-1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8d\x40\xff");
}

TEST_CASE("2422_cmp ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3b\xc8");
}

TEST_CASE("2423_jnz short loc_1400035B1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0b");
}

TEST_CASE("2424_cmp edx, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x04");
}

TEST_CASE("2425_jz loc_140003641", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x92\x00\x00\x00");
}

TEST_CASE("2426_jmp short loc_1400035DA", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x29");
}

TEST_CASE("2427_lea eax, [rcx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8d\x41\x01");
}

TEST_CASE("2428_cmp r8d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x3b\xc0");
}

TEST_CASE("2429_jbe loc_140003641", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x86\x84\x00\x00\x00");
}

TEST_CASE("2430_lea rax, [rcx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x41\x01");
}

TEST_CASE("2431_lea rcx, [rax+rax*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x0c\x80");
}

TEST_CASE("2432_mov rax, [rdi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x08");
}

TEST_CASE("2433_add rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc9");
}

TEST_CASE("2434_cmp dword ptr [rax+rcx*8+20h], 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7c\xc8\x20\x04");
}

TEST_CASE("2435_jz short loc_1400035DA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("2436_cmp dword ptr [rax+rcx*8+4], 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7c\xc8\x04\x03");
}

TEST_CASE("2437_jnz short loc_140003641", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x67");
}

TEST_CASE("2438_cmp dword ptr [r9+0Ch], 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\x79\x0c\x05");
}

TEST_CASE("2439_jnz short loc_140003601", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x20");
}

TEST_CASE("2440_mov rax, [rsi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x40\x02\x00\x00");
}

TEST_CASE("2441_mov r9d, 5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x05\x00\x00\x00");
}

TEST_CASE("2442_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2443_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2444_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2445_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x4b\x2a\x00\x00");
}

TEST_CASE("2446_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2447_js short loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x69");
}

TEST_CASE("2448_mov rax, [rsi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x40\x02\x00\x00");
}

TEST_CASE("2449_mov r9d, 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x03\x00\x00\x00");
}

TEST_CASE("2450_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2451_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2452_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2453_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x2b\x2a\x00\x00");
}

TEST_CASE("2454_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2455_js short loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x49");
}

TEST_CASE("2456_mov r9d, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x04\x00\x00\x00");
}

TEST_CASE("2457_mov rax, [rsi+240h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x40\x02\x00\x00");
}

TEST_CASE("2458_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2459_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2460_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2461_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x0b\x2a\x00\x00");
}

TEST_CASE("2462_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2463_js short loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x29");
}

TEST_CASE("2464_mov rax, [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x07");
}

TEST_CASE("2465_inc r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xfe\xc4");
}

TEST_CASE("2466_cmp r12b, [rax+19h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x3a\x60\x19");
}

TEST_CASE("2467_jnb short loc_140003665", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x18");
}

TEST_CASE("2468_mov rdx, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x54\x24\x60");
}

TEST_CASE("2469_jmp loc_140003363", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x0c\xfd\xff\xff");
}

TEST_CASE("2470_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("2471_jmp short loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x0c");
}

TEST_CASE("2472_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("2473_jmp short loc_14000366A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x05");
}

TEST_CASE("2474_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("2475_mov rbx, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x68");
}

TEST_CASE("2476_mov rbp, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x70");
}

TEST_CASE("2477_mov rsi, [rsp+58h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x78");
}

TEST_CASE("2478_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("2479_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("2480_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("2481_pop r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5d");
}

TEST_CASE("2482_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("2483_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2484_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2485_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2486_mov [rsp+arg_8], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x10");
}

TEST_CASE("2487_mov [rsp+arg_10], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x18");
}

TEST_CASE("2488_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2489_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("2490_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("2491_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("2492_mov rax, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x10");
}

TEST_CASE("2493_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("2494_xor r15d, r15d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xff");
}

TEST_CASE("2495_mov rdi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf8");
}

TEST_CASE("2496_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2497_mov ecx, [rax+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x48\x28");
}

TEST_CASE("2498_lea eax, [rcx-1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8d\x41\xff");
}

TEST_CASE("2499_test eax, 0FFFFFFFCh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xa9\xfc\xff\xff\xff");
}

TEST_CASE("2500_jnz short loc_1400036E2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x1d");
}

TEST_CASE("2501_cmp ecx, 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x03");
}

TEST_CASE("2502_jz short loc_1400036E2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2503_mov rax, [rsi+228h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x28\x02\x00\x00");
}

TEST_CASE("2504_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2505_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x6e\x29\x00\x00");
}

TEST_CASE("2506_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2507_js loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x86\x02\x00\x00");
}

TEST_CASE("2508_mov rax, [rsi+230h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x30\x02\x00\x00");
}

TEST_CASE("2509_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2510_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2511_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2512_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x50\x29\x00\x00");
}

TEST_CASE("2513_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2514_js loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x68\x02\x00\x00");
}

TEST_CASE("2515_cmp [rbx], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x3b");
}

TEST_CASE("2516_jz short loc_14000371D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2517_lea rdx, unk_1400580C4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xb8\x49\x05\x00");
}

TEST_CASE("2518_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2519_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xa0\x0c\x00\x00");
}

TEST_CASE("2520_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2521_jns short loc_140003749", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x31");
}

TEST_CASE("2522_jmp loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x4b\x02\x00\x00");
}

TEST_CASE("2523_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2524_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2525_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2526_jbe short loc_140003735", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("2527_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("2528_jmp loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x33\x02\x00\x00");
}

TEST_CASE("2529_movzx eax, cs:word_140074604", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xc8\x0e\x07\x00");
}

TEST_CASE("2530_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2531_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2532_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2533_cmp [rsi+8], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x7e\x08");
}

TEST_CASE("2534_jnz short loc_1400037BA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x6b");
}

TEST_CASE("2535_cmp qword ptr [rdi+18h], 0FFFFFFFFFFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x7f\x18\xff");
}

TEST_CASE("2536_jz short loc_1400037BA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x64");
}

TEST_CASE("2537_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("2538_cmp [rax+40h], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x78\x40");
}

TEST_CASE("2539_jz short loc_1400037BA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x5a");
}

TEST_CASE("2540_cmp [rax+34h], r15d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x39\x78\x34");
}

TEST_CASE("2541_jnz short loc_1400037BA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x54");
}

TEST_CASE("2542_mov eax, [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x40\x30");
}

TEST_CASE("2543_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2544_jz short loc_140003777", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("2545_add eax, 0FFFFFF3Ch", "[single-file]")
{
    TEST_INSTRUCTIONS("\x05\x3c\xff\xff\xff");
}

TEST_CASE("2546_cmp eax, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x01");
}

TEST_CASE("2547_ja short loc_1400037BA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x43");
}

TEST_CASE("2548_mov rax, [rsi+208h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x08\x02\x00\x00");
}

TEST_CASE("2549_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2550_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2551_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2552_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xbb\x28\x00\x00");
}

TEST_CASE("2553_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2554_js loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xd3\x01\x00\x00");
}

TEST_CASE("2555_cmp [rbx], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x3b");
}

TEST_CASE("2556_jz loc_14000393D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x9f\x01\x00\x00");
}

TEST_CASE("2557_lea rdx, unk_1400580F4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x4f\x49\x05\x00");
}

TEST_CASE("2558_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2559_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x07\x0c\x00\x00");
}

TEST_CASE("2560_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2561_jns loc_140003963", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\xae\x01\x00\x00");
}

TEST_CASE("2562_jmp loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xae\x01\x00\x00");
}

TEST_CASE("2563_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("2564_mov r9d, [rax+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x48\x30");
}

TEST_CASE("2565_mov r14d, [rax+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x70\x34");
}

TEST_CASE("2566_test r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xc9");
}

TEST_CASE("2567_jnz short loc_1400037D5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0a");
}

TEST_CASE("2568_test r14d, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xf6");
}

TEST_CASE("2569_jnz short loc_1400037D5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x05");
}

TEST_CASE("2570_mov bpl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb5\x01");
}

TEST_CASE("2571_jmp short loc_1400037FB", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x26");
}

TEST_CASE("2572_mov bpl, r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xef");
}

TEST_CASE("2573_test r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xc9");
}

TEST_CASE("2574_jz short loc_1400037FB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x1e");
}

TEST_CASE("2575_mov rax, [rsi+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x00\x02\x00\x00");
}

TEST_CASE("2576_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2577_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2578_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2579_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x55\x28\x00\x00");
}

TEST_CASE("2580_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2581_js loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x6d\x01\x00\x00");
}

TEST_CASE("2582_test r14d, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xf6");
}

TEST_CASE("2583_jz loc_140003910", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x0c\x01\x00\x00");
}

TEST_CASE("2584_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("2585_cmp [rax+30h], r15d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x39\x78\x30");
}

TEST_CASE("2586_jz short loc_140003851", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x43");
}

TEST_CASE("2587_cmp [rbx], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x3b");
}

TEST_CASE("2588_jz short loc_14000382B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2589_lea rdx, unk_140057A64", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x4a\x42\x05\x00");
}

TEST_CASE("2590_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2591_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x92\x0b\x00\x00");
}

TEST_CASE("2592_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2593_jns short loc_140003851", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("2594_jmp loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x3d\x01\x00\x00");
}

TEST_CASE("2595_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2596_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2597_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2598_ja loc_14000372B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xee\xfe\xff\xff");
}

TEST_CASE("2599_movzx eax, cs:word_140074454", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x10\x0c\x07\x00");
}

TEST_CASE("2600_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2601_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2602_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2603_mov r9, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x4f\x10");
}

TEST_CASE("2604_mov r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc7");
}

TEST_CASE("2605_mov rax, [rsi+200h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x00\x02\x00\x00");
}

TEST_CASE("2606_mov rdx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd3");
}

TEST_CASE("2607_mov rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xce");
}

TEST_CASE("2608_mov r9d, [r9+34h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\x49\x34");
}

TEST_CASE("2609_call cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xd9\x27\x00\x00");
}

TEST_CASE("2610_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2611_js loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xf1\x00\x00\x00");
}

TEST_CASE("2612_mov rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4f\x10");
}

TEST_CASE("2613_mov al, [rcx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x41\x38");
}

TEST_CASE("2614_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("2615_jz loc_140003910", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x8a\x00\x00\x00");
}

TEST_CASE("2616_cmp dword ptr [rcx+28h], 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x79\x28\x03");
}

TEST_CASE("2617_jz loc_140003910", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x80\x00\x00\x00");
}

TEST_CASE("2618_cmp al, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x01");
}

TEST_CASE("2619_ja short loc_14000389A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x06");
}

TEST_CASE("2620_cmp [rsi+6], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x7e\x06");
}

TEST_CASE("2621_jz short loc_140003910", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x76");
}

TEST_CASE("2622_cmp [rbx], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x3b");
}

TEST_CASE("2623_jz short loc_1400038B7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2624_lea rdx, unk_14005810C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x66\x48\x05\x00");
}

TEST_CASE("2625_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2626_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x06\x0b\x00\x00");
}

TEST_CASE("2627_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2628_jns short loc_1400038DD", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x2b");
}

TEST_CASE("2629_jmp loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb1\x00\x00\x00");
}

TEST_CASE("2630_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2631_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2632_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2633_ja loc_14000372B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x62\xfe\xff\xff");
}

TEST_CASE("2634_movzx eax, cs:word_140074610", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x40\x0d\x07\x00");
}

TEST_CASE("2635_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2636_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2637_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2638_cmp [rbx], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x3b");
}

TEST_CASE("2639_jz short loc_1400038F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0e");
}

TEST_CASE("2640_mov dl, 0Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0b");
}

TEST_CASE("2641_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2642_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x54\x0a\x00\x00");
}

TEST_CASE("2643_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2644_js short loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x78");
}

TEST_CASE("2645_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("2646_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("2647_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("2648_mov [rsp+48h+var_28], r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x89\x7c\x24\x20");
}

TEST_CASE("2649_xor r8d, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc0");
}

TEST_CASE("2650_movzx edx, byte ptr [rax+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x50\x38");
}

TEST_CASE("2651_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x68\x0d\x00\x00");
}

TEST_CASE("2652_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2653_js short loc_140003968", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x58");
}

TEST_CASE("2654_test bpl, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x84\xed");
}

TEST_CASE("2655_jnz loc_140003777", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x5e\xfe\xff\xff");
}

TEST_CASE("2656_mov rax, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x10");
}

TEST_CASE("2657_cmp [rax+40h], r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x78\x40");
}

TEST_CASE("2658_jz loc_140003795", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x6e\xfe\xff\xff");
}

TEST_CASE("2659_cmp [rax+48h], r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x39\x78\x48");
}

TEST_CASE("2660_jz loc_140003795", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x64\xfe\xff\xff");
}

TEST_CASE("2661_mov rax, [rsi+218h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x86\x18\x02\x00\x00");
}

TEST_CASE("2662_jmp loc_14000377E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x41\xfe\xff\xff");
}

TEST_CASE("2663_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2664_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2665_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2666_ja loc_14000372B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xdc\xfd\xff\xff");
}

TEST_CASE("2667_movzx eax, cs:word_14007460C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xb6\x0c\x07\x00");
}

TEST_CASE("2668_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2669_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2670_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2671_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("2672_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("2673_mov rbp, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x58");
}

TEST_CASE("2674_mov rsi, [rsp+48h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x60");
}

TEST_CASE("2675_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("2676_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("2677_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("2678_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2679_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2680_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2681_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2682_mov [rsp+arg_10], rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x7c\x24\x18");
}

TEST_CASE("2683_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("2684_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("2685_mov rax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x00");
}

TEST_CASE("2686_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("2687_mov r14, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xf0");
}

TEST_CASE("2688_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2689_movsxd rcx, dword ptr [rax+4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x48\x04");
}

TEST_CASE("2690_cmp rcx, 701h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x81\xf9\x01\x07\x00\x00");
}

TEST_CASE("2691_jb short loc_1400039C2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x04");
}

TEST_CASE("2692_mov al, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x02");
}

TEST_CASE("2693_jmp short loc_1400039D4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x12");
}

TEST_CASE("2694_lea rax, off_140058730; \"invalid\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x05\x67\x4d\x05\x00");
}

TEST_CASE("2695_lea rsi, [rcx+rcx*8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x34\xc9");
}

TEST_CASE("2696_add rsi, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xf0");
}

TEST_CASE("2697_mov al, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x02");
}

TEST_CASE("2698_jnz short loc_140003A1C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x48");
}

TEST_CASE("2699_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("2700_jz short loc_140003A06", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2e");
}

TEST_CASE("2701_lea rdx, unk_140058070", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x91\x46\x05\x00");
}

TEST_CASE("2702_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2703_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xcd\x09\x00\x00");
}

TEST_CASE("2704_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2705_js short loc_1400039F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x05");
}

TEST_CASE("2706_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("2707_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("2708_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("2709_mov rdi, [rsp+28h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x7c\x24\x40");
}

TEST_CASE("2710_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("2711_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("2712_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2713_mov r8d, [rdi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x38");
}

TEST_CASE("2714_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("2715_lea rdx, off_140058060; \"invalid\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x4b\x46\x05\x00");
}

TEST_CASE("2716_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xe6\x10\x00\x00");
}

TEST_CASE("2717_jmp short loc_1400039E7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xcb");
}

TEST_CASE("2718_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("2719_jz short loc_140003A2E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0e");
}

TEST_CASE("2720_mov dl, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x06");
}

TEST_CASE("2721_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2722_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x16\x09\x00\x00");
}

TEST_CASE("2723_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2724_js short loc_1400039F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\xc2");
}

TEST_CASE("2725_mov r8d, [rdi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x38");
}

TEST_CASE("2726_add rbx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc3\x10");
}

TEST_CASE("2727_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2728_mov rdx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd6");
}

TEST_CASE("2729_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xbf\x10\x00\x00");
}

TEST_CASE("2730_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2731_js short loc_1400039F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\xab");
}

TEST_CASE("2732_mov rax, [r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x06");
}

TEST_CASE("2733_mov edx, [rax+68h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x50\x68");
}

TEST_CASE("2734_cmp edx, 3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x03");
}

TEST_CASE("2735_jnz short loc_140003A65", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x15");
}

TEST_CASE("2736_lea rdx, off_140058028; \" far\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd1\x45\x05\x00");
}

TEST_CASE("2737_mov r8d, [rdi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x47\x38");
}

TEST_CASE("2738_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2739_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x9d\x10\x00\x00");
}

TEST_CASE("2740_jmp short loc_1400039F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x8b");
}

TEST_CASE("2741_cmp byte ptr [rdi+9], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x7f\x09\x00");
}

TEST_CASE("2742_jz short loc_1400039EB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x80");
}

TEST_CASE("2743_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("2744_jz loc_1400039EB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x78\xff\xff\xff");
}

TEST_CASE("2745_sub edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xea\x01");
}

TEST_CASE("2746_jz short loc_140003A90", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2747_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("2748_jz short loc_140003A87", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("2749_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("2750_jmp loc_1400039F0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x69\xff\xff\xff");
}

TEST_CASE("2751_lea rdx, off_140058118; \" near\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x8a\x46\x05\x00");
}

TEST_CASE("2752_jmp short loc_140003A57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xc7");
}

TEST_CASE("2753_lea rdx, off_140058518; \" short\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x81\x4a\x05\x00");
}

TEST_CASE("2754_jmp short loc_140003A57", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xbe");
}

TEST_CASE("2755_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2756_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2757_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2758_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("2759_movsxd rax, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x63\xc1");
}

TEST_CASE("2760_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2761_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("2762_cmp rax, 10Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3d\x0a\x01\x00\x00");
}

TEST_CASE("2763_jb short loc_140003AC4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x04");
}

TEST_CASE("2764_mov al, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x02");
}

TEST_CASE("2765_jmp short loc_140003AD6", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x12");
}

TEST_CASE("2766_lea rdi, [rax+rax*8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x3c\xc0");
}

TEST_CASE("2767_mov al, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x02");
}

TEST_CASE("2768_lea rcx, off_140006A20; \"none\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x0d\x4f\x2f\x00\x00");
}

TEST_CASE("2769_add rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xf9");
}

TEST_CASE("2770_jnz short loc_140003B0A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x34");
}

TEST_CASE("2771_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("2772_jz short loc_140003AF4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x1a");
}

TEST_CASE("2773_lea rdx, unk_140058090", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xaf\x45\x05\x00");
}

TEST_CASE("2774_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2775_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xcb\x08\x00\x00");
}

TEST_CASE("2776_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2777_js short loc_140003B2C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x3f");
}

TEST_CASE("2778_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("2779_jmp short loc_140003B2C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x38");
}

TEST_CASE("2780_mov r8d, [rsi+3Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x3c");
}

TEST_CASE("2781_lea rcx, [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x10");
}

TEST_CASE("2782_lea rdx, off_140058080; \"invalid\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x7d\x45\x05\x00");
}

TEST_CASE("2783_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf8\x0f\x00\x00");
}

TEST_CASE("2784_jmp short loc_140003AE9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xdf");
}

TEST_CASE("2785_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("2786_jz short loc_140003B1C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0e");
}

TEST_CASE("2787_mov dl, 7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x07");
}

TEST_CASE("2788_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2789_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x28\x08\x00\x00");
}

TEST_CASE("2790_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2791_js short loc_140003B2C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x10");
}

TEST_CASE("2792_mov r8d, [rsi+3Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x46\x3c");
}

TEST_CASE("2793_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("2794_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("2795_call sub_140004B00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xd4\x0f\x00\x00");
}

TEST_CASE("2796_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("2797_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("2798_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("2799_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2800_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2801_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("2802_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("2803_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("2804_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("2805_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("2806_mov rsi, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xf0");
}

TEST_CASE("2807_mov ecx, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x49\x20");
}

TEST_CASE("2808_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2809_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("2810_jz short loc_140003BA6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x47");
}

TEST_CASE("2811_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("2812_jz short loc_140003BA6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x42");
}

TEST_CASE("2813_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("2814_jnz loc_140003D0A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x9d\x01\x00\x00");
}

TEST_CASE("2815_mov rax, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x10");
}

TEST_CASE("2816_cmp dword ptr [rax+30h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x30\x00");
}

TEST_CASE("2817_jnz short loc_140003B81", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0a");
}

TEST_CASE("2818_cmp dword ptr [rax+34h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x34\x00");
}

TEST_CASE("2819_jz loc_140003CE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x65\x01\x00\x00");
}

TEST_CASE("2820_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("2821_jz loc_140003CC0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x36\x01\x00\x00");
}

TEST_CASE("2822_lea rdx, unk_140057A64", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd3\x3e\x05\x00");
}

TEST_CASE("2823_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2824_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x1b\x08\x00\x00");
}

TEST_CASE("2825_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2826_jns loc_140003CE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x45\x01\x00\x00");
}

TEST_CASE("2827_jmp loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xe8\x01\x00\x00");
}

TEST_CASE("2828_mov rax, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x10");
}

TEST_CASE("2829_cmp qword ptr [rax+48h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x78\x48\x00");
}

TEST_CASE("2830_jge short loc_140003B6D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x7d\xbc");
}

TEST_CASE("2831_cmp dword ptr [rax+30h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x30\x00");
}

TEST_CASE("2832_jnz short loc_140003BBD", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x06");
}

TEST_CASE("2833_cmp dword ptr [rax+34h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x78\x34\x00");
}

TEST_CASE("2834_jz short loc_140003C06", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x49");
}

TEST_CASE("2835_cmp byte ptr [rdx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3a\x00");
}

TEST_CASE("2836_jz short loc_140003BDA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("2837_lea rdx, unk_14005870C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x43\x4b\x05\x00");
}

TEST_CASE("2838_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2839_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xe3\x07\x00\x00");
}

TEST_CASE("2840_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2841_jns short loc_140003C06", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x31");
}

TEST_CASE("2842_jmp loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb4\x01\x00\x00");
}

TEST_CASE("2843_mov rdx, [rdx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x28");
}

TEST_CASE("2844_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2845_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2846_jbe short loc_140003BF2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("2847_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("2848_jmp loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x9c\x01\x00\x00");
}

TEST_CASE("2849_movzx eax, cs:word_1400747E8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xef\x0b\x07\x00");
}

TEST_CASE("2850_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2851_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2852_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2853_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("2854_jz short loc_140003C1D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("2855_mov dl, 0Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0a");
}

TEST_CASE("2856_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2857_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x2b\x07\x00\x00");
}

TEST_CASE("2858_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2859_js loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x71\x01\x00\x00");
}

TEST_CASE("2860_movsxd rcx, dword ptr [rdi+1Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x4f\x1c");
}

TEST_CASE("2861_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("2862_jz short loc_140003C67", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x42");
}

TEST_CASE("2863_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("2864_jnz loc_140003D0A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xdc\x00\x00\x00");
}

TEST_CASE("2865_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("2866_mov rdx, 8000000000000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xba\x00\x00\x00\x00\x00\x00\x00\x80");
}

TEST_CASE("2867_mov rcx, [rax+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x48\x48");
}

TEST_CASE("2868_cmp rcx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xca");
}

TEST_CASE("2869_jz short loc_140003C4F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("2870_mov rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd1");
}

TEST_CASE("2871_neg rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xf7\xda");
}

TEST_CASE("2872_cmovs rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x48\xd1");
}

TEST_CASE("2873_mov rax, [rdi+158h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x58\x01\x00\x00");
}

TEST_CASE("2874_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("2875_mov rax, [rdi+100h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x87\x00\x01\x00\x00");
}

TEST_CASE("2876_jmp loc_140003D32", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xcb\x00\x00\x00");
}

TEST_CASE("2877_mov rax, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x10");
}

TEST_CASE("2878_mov rdx, 8000000000000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xba\x00\x00\x00\x00\x00\x00\x00\x80");
}

TEST_CASE("2879_mov r8, [rax+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x40\x48");
}

TEST_CASE("2880_cmp r8, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xc2");
}

TEST_CASE("2881_jz short loc_140003C88", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("2882_mov rdx, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd0");
}

TEST_CASE("2883_neg rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xf7\xda");
}

TEST_CASE("2884_cmovs rdx, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\x48\xd0");
}

TEST_CASE("2885_mov r8b, [rdi+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x47\x24");
}

TEST_CASE("2886_imul r9, rcx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xc9\xb0\x00\x00\x00");
}

TEST_CASE("2887_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("2888_mov rax, [r9+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x39\xa8\x00\x00\x00");
}

TEST_CASE("2889_mov r9, [r9+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x39\x50");
}

TEST_CASE("2890_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("2891_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xc6\x09\x00\x00");
}

TEST_CASE("2892_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2893_js loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xd8\x00\x00\x00");
}

TEST_CASE("2894_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("2895_jmp loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xce\x00\x00\x00");
}

TEST_CASE("2896_mov rdx, [rdx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x28");
}

TEST_CASE("2897_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("2898_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2899_ja loc_140003BE8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x16\xff\xff\xff");
}

TEST_CASE("2900_movzx eax, cs:word_140074454", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x7b\x07\x07\x00");
}

TEST_CASE("2901_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2902_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("2903_inc qword ptr [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x28");
}

TEST_CASE("2904_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("2905_jz short loc_140003CFD", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("2906_mov dl, 0Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb2\x0a");
}

TEST_CASE("2907_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("2908_call sub_140004340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x4b\x06\x00\x00");
}

TEST_CASE("2909_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2910_js loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x91\x00\x00\x00");
}

TEST_CASE("2911_movsxd rdx, dword ptr [rdi+1Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x57\x1c");
}

TEST_CASE("2912_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("2913_jz short loc_140003D54", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4f");
}

TEST_CASE("2914_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("2915_jz short loc_140003D11", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("2916_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("2917_jmp short loc_140003D8E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x7d");
}

TEST_CASE("2918_imul r8, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xc2\xb0\x00\x00\x00");
}

TEST_CASE("2919_mov rdx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x10");
}

TEST_CASE("2920_mov rax, [r8+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x38\xa8\x00\x00\x00");
}

TEST_CASE("2921_mov rdx, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x48");
}

TEST_CASE("2922_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("2923_mov rax, [r8+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x38\x50");
}

TEST_CASE("2924_mov r8b, [rdi+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x47\x24");
}

TEST_CASE("2925_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("2926_mov r9b, [rdi+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4f\x49");
}

TEST_CASE("2927_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("2928_mov al, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x47\x48");
}

TEST_CASE("2929_mov byte ptr [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("2930_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x7d\x0b\x00\x00");
}

TEST_CASE("2931_jmp loc_140003CAE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x5a\xff\xff\xff");
}

TEST_CASE("2932_mov r8b, [rdi+24h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x47\x24");
}

TEST_CASE("2933_lea rcx, [rbx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4b\x10");
}

TEST_CASE("2934_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("2935_mov rdx, [rsi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x56\x10");
}

TEST_CASE("2936_mov rax, [r9+rdi+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x39\xa8\x00\x00\x00");
}

TEST_CASE("2937_mov r9, [r9+rdi+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x4c\x39\x50");
}

TEST_CASE("2938_mov rdx, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x48");
}

TEST_CASE("2939_mov [rsp+48h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("2940_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xf2\x08\x00\x00");
}

TEST_CASE("2941_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("2942_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("2943_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("2944_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("2945_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("2946_mov rsi, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x58");
}

TEST_CASE("2947_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("2948_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("2949_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("2950_push rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x53");
}

TEST_CASE("2951_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("2952_mov rax, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc0");
}

TEST_CASE("2953_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("2954_mov r8, [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x40\x10");
}

TEST_CASE("2955_mov rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd0");
}

TEST_CASE("2956_call sub_1400044A4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xec\x06\x00\x00");
}

TEST_CASE("2957_sub eax, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x08");
}

TEST_CASE("2958_jz loc_140004057", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x96\x02\x00\x00");
}

TEST_CASE("2959_sub eax, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x08");
}

TEST_CASE("2960_jz loc_140004020", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x56\x02\x00\x00");
}

TEST_CASE("2961_sub eax, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x10");
}

TEST_CASE("2962_jz loc_140003FD7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x04\x02\x00\x00");
}

TEST_CASE("2963_sub eax, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x10");
}

TEST_CASE("2964_jz loc_140003F8B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xaf\x01\x00\x00");
}

TEST_CASE("2965_sub eax, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x10");
}

TEST_CASE("2966_jz loc_140003F42", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x5d\x01\x00\x00");
}

TEST_CASE("2967_sub eax, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x10");
}

TEST_CASE("2968_jz loc_140003EED", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xff\x00\x00\x00");
}

TEST_CASE("2969_sub eax, 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe8\x30");
}

TEST_CASE("2970_jz loc_140003EA3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xac\x00\x00\x00");
}

TEST_CASE("2971_sub eax, 80h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x2d\x80\x00\x00\x00");
}

TEST_CASE("2972_jz short loc_140003E5C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x5e");
}

TEST_CASE("2973_cmp eax, 100h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x00\x01\x00\x00");
}

TEST_CASE("2974_jnz loc_1400040A9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xa0\x02\x00\x00");
}

TEST_CASE("2975_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("2976_jz short loc_140003E1A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("2977_lea rdx, unk_1400586E8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd3\x48\x05\x00");
}

TEST_CASE("2978_jmp loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x49\x02\x00\x00");
}

TEST_CASE("2979_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2980_lea rax, [rdx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0c");
}

TEST_CASE("2981_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2982_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x53\x02\x00\x00");
}

TEST_CASE("2983_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("2984_movsd xmm0, cs:qword_1400747D8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\xa0\x09\x07\x00");
}

TEST_CASE("2985_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("2986_mov eax, cs:dword_1400747E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x05\x9c\x09\x07\x00");
}

TEST_CASE("2987_mov [rcx+rdx+7], eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x44\x11\x07");
}

TEST_CASE("2988_mov al, cs:byte_1400747E4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x96\x09\x07\x00");
}

TEST_CASE("2989_mov [rcx+rdx+0Bh], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x11\x0b");
}

TEST_CASE("2990_add qword ptr [rbx+28h], 0Ch", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x43\x28\x0c");
}

TEST_CASE("2991_jmp loc_1400040A9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x4d\x02\x00\x00");
}

TEST_CASE("2992_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("2993_jz short loc_140003E6D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("2994_lea rdx, unk_1400586B0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x48\x48\x05\x00");
}

TEST_CASE("2995_jmp loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf6\x01\x00\x00");
}

TEST_CASE("2996_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("2997_lea rax, [rdx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0c");
}

TEST_CASE("2998_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("2999_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x00\x02\x00\x00");
}

TEST_CASE("3000_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3001_movsd xmm0, cs:qword_1400747C0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\x35\x09\x07\x00");
}

TEST_CASE("3002_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3003_mov eax, cs:dword_1400747C8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x05\x31\x09\x07\x00");
}

TEST_CASE("3004_mov [rcx+rdx+7], eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x44\x11\x07");
}

TEST_CASE("3005_mov al, cs:byte_1400747CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x2b\x09\x07\x00");
}

TEST_CASE("3006_jmp short loc_140003E4E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xab");
}

TEST_CASE("3007_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3008_jz short loc_140003EB4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("3009_lea rdx, unk_140058678", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xc9\x47\x05\x00");
}

TEST_CASE("3010_jmp loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xaf\x01\x00\x00");
}

TEST_CASE("3011_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3012_lea rax, [rdx+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0c");
}

TEST_CASE("3013_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3014_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xb9\x01\x00\x00");
}

TEST_CASE("3015_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3016_movsd xmm0, cs:qword_1400747A8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\xd6\x08\x07\x00");
}

TEST_CASE("3017_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3018_mov eax, cs:dword_1400747B0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x05\xd2\x08\x07\x00");
}

TEST_CASE("3019_mov [rcx+rdx+7], eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x44\x11\x07");
}

TEST_CASE("3020_mov al, cs:byte_1400747B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\xcc\x08\x07\x00");
}

TEST_CASE("3021_jmp loc_140003E4E", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x61\xff\xff\xff");
}

TEST_CASE("3022_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3023_jz short loc_140003EFE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("3024_lea rdx, unk_140058640", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x47\x47\x05\x00");
}

TEST_CASE("3025_jmp loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x65\x01\x00\x00");
}

TEST_CASE("3026_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3027_lea rax, [rdx+0Ah]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0a");
}

TEST_CASE("3028_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3029_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x6f\x01\x00\x00");
}

TEST_CASE("3030_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3031_movsd xmm0, cs:qword_140074798", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\x7c\x08\x07\x00");
}

TEST_CASE("3032_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3033_movzx eax, cs:word_1400747A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x77\x08\x07\x00");
}

TEST_CASE("3034_mov [rcx+rdx+7], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\x07");
}

TEST_CASE("3035_mov al, cs:byte_1400747A2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x6e\x08\x07\x00");
}

TEST_CASE("3036_mov [rcx+rdx+9], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x11\x09");
}

TEST_CASE("3037_add qword ptr [rbx+28h], 0Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x43\x28\x0a");
}

TEST_CASE("3038_jmp loc_1400040A9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x67\x01\x00\x00");
}

TEST_CASE("3039_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3040_jz short loc_140003F53", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("3041_lea rdx, unk_140058618", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xca\x46\x05\x00");
}

TEST_CASE("3042_jmp loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x10\x01\x00\x00");
}

TEST_CASE("3043_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3044_lea rax, [rdx+0Ah]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0a");
}

TEST_CASE("3045_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3046_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x1a\x01\x00\x00");
}

TEST_CASE("3047_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3048_movsd xmm0, cs:qword_140074788", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\x17\x08\x07\x00");
}

TEST_CASE("3049_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3050_movzx eax, cs:word_140074790", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x12\x08\x07\x00");
}

TEST_CASE("3051_mov [rcx+rdx+7], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\x07");
}

TEST_CASE("3052_mov al, cs:byte_140074792", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x09\x08\x07\x00");
}

TEST_CASE("3053_jmp short loc_140003F34", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xa9");
}

TEST_CASE("3054_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3055_jz short loc_140003F9C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("3056_lea rdx, unk_1400585E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x49\x46\x05\x00");
}

TEST_CASE("3057_jmp loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc7\x00\x00\x00");
}

TEST_CASE("3058_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3059_lea rax, [rdx+0Ah]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0a");
}

TEST_CASE("3060_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3061_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xd1\x00\x00\x00");
}

TEST_CASE("3062_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3063_movsd xmm0, cs:qword_140074778", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\xbe\x07\x07\x00");
}

TEST_CASE("3064_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3065_movzx eax, cs:word_140074780", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xb9\x07\x07\x00");
}

TEST_CASE("3066_mov [rcx+rdx+7], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\x07");
}

TEST_CASE("3067_mov al, cs:byte_140074782", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\xb0\x07\x07\x00");
}

TEST_CASE("3068_jmp loc_140003F34", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x5d\xff\xff\xff");
}

TEST_CASE("3069_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3070_jz short loc_140003FE5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x09");
}

TEST_CASE("3071_lea rdx, unk_1400585B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xd5\x45\x05\x00");
}

TEST_CASE("3072_jmp short loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x7e");
}

TEST_CASE("3073_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3074_lea rax, [rdx+0Ah]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x0a");
}

TEST_CASE("3075_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3076_ja loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x88\x00\x00\x00");
}

TEST_CASE("3077_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3078_movsd xmm0, cs:qword_140074768", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\x65\x07\x07\x00");
}

TEST_CASE("3079_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3080_movzx eax, cs:word_140074770", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x60\x07\x07\x00");
}

TEST_CASE("3081_mov [rcx+rdx+7], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\x07");
}

TEST_CASE("3082_mov al, cs:byte_140074772", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x05\x57\x07\x07\x00");
}

TEST_CASE("3083_jmp loc_140003F34", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x14\xff\xff\xff");
}

TEST_CASE("3084_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3085_jz short loc_14000402E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x09");
}

TEST_CASE("3086_lea rdx, unk_140058580", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x54\x45\x05\x00");
}

TEST_CASE("3087_jmp short loc_140004063", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x35");
}

TEST_CASE("3088_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3089_lea rax, [rdx+9]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x09");
}

TEST_CASE("3090_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3091_ja short loc_14000407F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x43");
}

TEST_CASE("3092_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3093_movsd xmm0, cs:qword_140074758", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\x10\x07\x07\x00");
}

TEST_CASE("3094_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3095_movzx eax, cs:word_140074760", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x0b\x07\x07\x00");
}

TEST_CASE("3096_jmp short loc_14000409F", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x48");
}

TEST_CASE("3097_cmp byte ptr [rbx], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3b\x00");
}

TEST_CASE("3098_jz short loc_140004071", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("3099_lea rdx, unk_140058548", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\xe5\x44\x05\x00");
}

TEST_CASE("3100_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3101_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x49\x03\x00\x00");
}

TEST_CASE("3102_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3103_jns short loc_1400040A9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x3a");
}

TEST_CASE("3104_jmp short loc_1400040AE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x3d");
}

TEST_CASE("3105_mov rdx, [rbx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x28");
}

TEST_CASE("3106_lea rax, [rdx+9]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x09");
}

TEST_CASE("3107_cmp rax, [rbx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x30");
}

TEST_CASE("3108_jbe short loc_140004086", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("3109_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3110_jmp short loc_1400040AE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x28");
}

TEST_CASE("3111_mov rcx, [rbx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x48");
}

TEST_CASE("3112_movsd xmm0, cs:qword_140074748", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x10\x05\xb6\x06\x07\x00");
}

TEST_CASE("3113_movsd qword ptr [rcx+rdx-1], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf2\x0f\x11\x44\x11\xff");
}

TEST_CASE("3114_movzx eax, cs:word_140074750", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xb1\x06\x07\x00");
}

TEST_CASE("3115_mov [rcx+rdx+7], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\x07");
}

TEST_CASE("3116_add qword ptr [rbx+28h], 9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x43\x28\x09");
}

TEST_CASE("3117_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3118_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("3119_pop rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5b");
}

TEST_CASE("3120_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3121_and qword ptr [r8+18h], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\x60\x18\x00");
}

TEST_CASE("3122_jmp sub_1400032E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x16\xf2\xff\xff");
}

TEST_CASE("3123_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3124_mov [rsp+arg_8], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x10");
}

TEST_CASE("3125_push rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x56");
}

TEST_CASE("3126_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3127_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("3128_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("3129_mov r14, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x30");
}

TEST_CASE("3130_lea r9, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x4c\x24\x70");
}

TEST_CASE("3131_mov rax, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc0");
}

TEST_CASE("3132_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("3133_mov rbp, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xe9");
}

TEST_CASE("3134_xor r8d, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc0");
}

TEST_CASE("3135_mov rcx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xce");
}

TEST_CASE("3136_mov rdx, [rax+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x50\x10");
}

TEST_CASE("3137_call sub_140004248", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x46\x01\x00\x00");
}

TEST_CASE("3138_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3139_js loc_140004233", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x29\x01\x00\x00");
}

TEST_CASE("3140_cmp dword ptr [rbp+18h], 0FFFFFFFFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7d\x18\xff");
}

TEST_CASE("3141_lea rbx, [rbp+0Ch]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x5d\x0c");
}

TEST_CASE("3142_jnz short loc_140004147", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x33");
}

TEST_CASE("3143_xor sil, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x32\xf6");
}

TEST_CASE("3144_cmp dword ptr [rbx], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x3b\x01");
}

TEST_CASE("3145_jnz short loc_14000414B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x2f");
}

TEST_CASE("3146_mov al, [r14+17h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\x46\x17");
}

TEST_CASE("3147_mov sil, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb6\x10");
}

TEST_CASE("3148_cmp al, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x3a\xc6");
}

TEST_CASE("3149_jz short loc_14000413C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x14");
}

TEST_CASE("3150_cmp al, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x20");
}

TEST_CASE("3151_jz short loc_140004132", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x06");
}

TEST_CASE("3152_cmp al, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x40");
}

TEST_CASE("3153_jnz short loc_1400041A5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x75");
}

TEST_CASE("3154_jmp short loc_14000414B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x19");
}

TEST_CASE("3155_mov r14d, dword ptr [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x74\x24\x70");
}

TEST_CASE("3156_mov sil, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb6\x08");
}

TEST_CASE("3157_jmp short loc_140004150", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x14");
}

TEST_CASE("3158_movzx r14d, word ptr [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb7\x74\x24\x70");
}

TEST_CASE("3159_mov sil, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\xb6\x04");
}

TEST_CASE("3160_jmp short loc_140004150", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x09");
}

TEST_CASE("3161_mov sil, [rbp+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\x75\x18");
}

TEST_CASE("3162_mov r14, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x74\x24\x70");
}

TEST_CASE("3163_cmp byte ptr [rdi], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x3f\x00");
}

TEST_CASE("3164_jz short loc_14000416D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("3165_lea rdx, unk_140057A7C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x15\x20\x39\x05\x00");
}

TEST_CASE("3166_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("3167_call sub_1400043B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x50\x02\x00\x00");
}

TEST_CASE("3168_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3169_jns short loc_140004199", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x31");
}

TEST_CASE("3170_jmp loc_140004233", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xc6\x00\x00\x00");
}

TEST_CASE("3171_mov rdx, [rdi+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x57\x28");
}

TEST_CASE("3172_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("3173_cmp rax, [rdi+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x47\x30");
}

TEST_CASE("3174_jbe short loc_140004185", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("3175_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3176_jmp loc_140004233", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xae\x00\x00\x00");
}

TEST_CASE("3177_movzx eax, cs:word_140074458", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xcc\x02\x07\x00");
}

TEST_CASE("3178_mov rcx, [rdi+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4f\x48");
}

TEST_CASE("3179_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("3180_inc qword ptr [rdi+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x47\x28");
}

TEST_CASE("3181_movsxd rdx, dword ptr [rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x13");
}

TEST_CASE("3182_test edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xd2");
}

TEST_CASE("3183_jz short loc_1400041F7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x57");
}

TEST_CASE("3184_cmp edx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xfa\x01");
}

TEST_CASE("3185_jz short loc_1400041AF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3186_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("3187_jmp loc_140004233", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x84\x00\x00\x00");
}

TEST_CASE("3188_imul r9, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("3189_mov r8b, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc6");
}

TEST_CASE("3190_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("3191_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("3192_mov rax, [r9+rbp+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x84\x29\xa8\x00\x00\x00");
}

TEST_CASE("3193_mov [rsp+58h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x38");
}

TEST_CASE("3194_mov rax, [r9+rbp+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x44\x29\x50");
}

TEST_CASE("3195_mov r9b, [rbp+49h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x4d\x49");
}

TEST_CASE("3196_mov [rsp+58h+var_28], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("3197_mov al, [rbp+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x45\x48");
}

TEST_CASE("3198_mov byte ptr [rsp+58h+var_30], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x24\x28\x01");
}

TEST_CASE("3199_mov byte ptr [rsp+58h+var_38], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("3200_call sub_1400047B8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xcc\x05\x00\x00");
}

TEST_CASE("3201_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3202_js short loc_140004233", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x43");
}

TEST_CASE("3203_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3204_jmp short loc_140004233", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x3c");
}

TEST_CASE("3205_imul rcx, rdx, 0B0h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x69\xca\xb0\x00\x00\x00");
}

TEST_CASE("3206_mov r9b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb1\x01");
}

TEST_CASE("3207_mov r8b, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc6");
}

TEST_CASE("3208_mov rdx, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd6");
}

TEST_CASE("3209_mov rax, [rcx+rbp+0A8h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x29\xa8\x00\x00\x00");
}

TEST_CASE("3210_mov [rsp+58h+var_30], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("3211_mov rax, [rcx+rbp+50h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x29\x50");
}

TEST_CASE("3212_lea rcx, [rdi+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4f\x10");
}

TEST_CASE("3213_mov [rsp+58h+var_38], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("3214_call sub_1400045A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x79\x03\x00\x00");
}

TEST_CASE("3215_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3216_mov ecx, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x00\x10\x00");
}

TEST_CASE("3217_cmovs ecx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x48\xc8");
}

TEST_CASE("3218_mov eax, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc1");
}

TEST_CASE("3219_mov rbx, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x60");
}

TEST_CASE("3220_mov rbp, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x68");
}

TEST_CASE("3221_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("3222_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("3223_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3224_pop rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5e");
}

TEST_CASE("3225_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3226_xor r11d, r11d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xdb");
}

TEST_CASE("3227_mov r10, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xd1");
}

TEST_CASE("3228_test rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc9");
}

TEST_CASE("3229_jz loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xe1\x00\x00\x00");
}

TEST_CASE("3230_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3231_jz loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xd8\x00\x00\x00");
}

TEST_CASE("3232_test r9, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xc9");
}

TEST_CASE("3233_jz loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xcf\x00\x00\x00");
}

TEST_CASE("3234_mov eax, [rdx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x42\x20");
}

TEST_CASE("3235_cmp eax, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x02");
}

TEST_CASE("3236_jz short loc_1400042D2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x61");
}

TEST_CASE("3237_cmp eax, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf8\x04");
}

TEST_CASE("3238_jnz loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xbe\x00\x00\x00");
}

TEST_CASE("3239_cmp [rdx+28h], r11b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x5a\x28");
}

TEST_CASE("3240_jz loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xb4\x00\x00\x00");
}

TEST_CASE("3241_cmp [rdx+29h], r11b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x5a\x29");
}

TEST_CASE("3242_jz loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xaa\x00\x00\x00");
}

TEST_CASE("3243_movzx eax, byte ptr [rcx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x41\x08");
}

TEST_CASE("3244_add rax, [rdx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\x42\x30");
}

TEST_CASE("3245_lea rdx, [rax+r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4a\x8d\x14\x00");
}

TEST_CASE("3246_mov [r9], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x11");
}

TEST_CASE("3247_mov ecx, [rcx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x09");
}

TEST_CASE("3248_test ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc9");
}

TEST_CASE("3249_jz short loc_1400042EF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4c");
}

TEST_CASE("3250_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("3251_jz short loc_1400042BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x14");
}

TEST_CASE("3252_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("3253_jz short loc_1400042BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0f");
}

TEST_CASE("3254_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("3255_jz short loc_1400042BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3256_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("3257_jz short loc_1400042BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x05");
}

TEST_CASE("3258_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("3259_jnz short loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x7c");
}

TEST_CASE("3260_cmp byte ptr [r10+16h], 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\x7a\x16\x10");
}

TEST_CASE("3261_jnz short loc_1400042EF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x2c");
}

TEST_CASE("3262_cmp dword ptr [r10+4], 6E1h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x81\x7a\x04\xe1\x06\x00\x00");
}

TEST_CASE("3263_jz short loc_1400042EF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x22");
}

TEST_CASE("3264_movzx eax, dx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\xc2");
}

TEST_CASE("3265_jmp short loc_1400042EC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x1a");
}

TEST_CASE("3266_cmp [rdx+40h], r11b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x5a\x40");
}

TEST_CASE("3267_jz short loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x60");
}

TEST_CASE("3268_mov eax, [rdx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x42\x30");
}

TEST_CASE("3269_cmp eax, 0C4h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\xc4\x00\x00\x00");
}

TEST_CASE("3270_jnz short loc_1400042F5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x13");
}

TEST_CASE("3271_movzx eax, byte ptr [rcx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x41\x08");
}

TEST_CASE("3272_add eax, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x03\x42\x48");
}

TEST_CASE("3273_add eax, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x03\xc0");
}

TEST_CASE("3274_mov [r9], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x01");
}

TEST_CASE("3275_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3276_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3277_cmp eax, 0C5h ; '�'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\xc5\x00\x00\x00");
}

TEST_CASE("3278_jnz short loc_140004309", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0d");
}

TEST_CASE("3279_movzx eax, byte ptr [rcx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x41\x08");
}

TEST_CASE("3280_add rax, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\x42\x48");
}

TEST_CASE("3281_add rax, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xc0");
}

TEST_CASE("3282_jmp short loc_1400042EC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xe3");
}

TEST_CASE("3283_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3284_jnz short loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x2b");
}

TEST_CASE("3285_cmp [rdx+34h], r11d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x39\x5a\x34");
}

TEST_CASE("3286_jnz short loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x25");
}

TEST_CASE("3287_mov al, [rcx+17h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x41\x17");
}

TEST_CASE("3288_cmp al, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x10");
}

TEST_CASE("3289_jz short loc_14000432D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x13");
}

TEST_CASE("3290_cmp al, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x20");
}

TEST_CASE("3291_jz short loc_140004328", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3292_cmp al, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x40");
}

TEST_CASE("3293_jnz short loc_140004338", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x16");
}

TEST_CASE("3294_mov rax, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x42\x48");
}

TEST_CASE("3295_jmp short loc_1400042EC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xc4");
}

TEST_CASE("3296_mov eax, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x42\x48");
}

TEST_CASE("3297_jmp short loc_1400042EC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xbf");
}

TEST_CASE("3298_mov eax, [rdx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x42\x48");
}

TEST_CASE("3299_movzx ecx, ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\xc8");
}

TEST_CASE("3300_mov [r9], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x09");
}

TEST_CASE("3301_jmp short loc_1400042EF", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xb7");
}

TEST_CASE("3302_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("3303_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3304_xor r10d, r10d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xd2");
}

TEST_CASE("3305_mov r9b, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xca");
}

TEST_CASE("3306_mov r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc1");
}

TEST_CASE("3307_test rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc9");
}

TEST_CASE("3308_jnz short loc_140004354", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x06");
}

TEST_CASE("3309_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("3310_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3311_cmp [rcx], r10b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x11");
}

TEST_CASE("3312_jz short loc_1400043AE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x55");
}

TEST_CASE("3313_mov rdx, [rcx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x51\x28");
}

TEST_CASE("3314_lea rcx, [rdx+2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4a\x02");
}

TEST_CASE("3315_cmp [r8+8], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x39\x48\x08");
}

TEST_CASE("3316_ja short loc_14000436D", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x06");
}

TEST_CASE("3317_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3318_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3319_mov rax, [r8+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x48");
}

TEST_CASE("3320_mov [rax-1], dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x50\xff");
}

TEST_CASE("3321_mov eax, 0FFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\xff\x00\x00\x00");
}

TEST_CASE("3322_mov rdx, [r8+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x50\x08");
}

TEST_CASE("3323_sub rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xd1");
}

TEST_CASE("3324_mov qword ptr [r8+28h], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc7\x40\x28\x01\x00\x00\x00");
}

TEST_CASE("3325_add rcx, [r8+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\x48\x48");
}

TEST_CASE("3326_mov [r8+48h], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x48\x48");
}

TEST_CASE("3327_cmp rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xd0");
}

TEST_CASE("3328_mov [r8+8], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x50\x08");
}

TEST_CASE("3329_cmovb rax, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x42\xc2");
}

TEST_CASE("3330_mov [r8+30h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x40\x30");
}

TEST_CASE("3331_mov [rcx], r10b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x11");
}

TEST_CASE("3332_mov rax, [r8+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x40\x48");
}

TEST_CASE("3333_mov [rax-2], r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x48\xfe");
}

TEST_CASE("3334_mov [rax-1], r10b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x50\xff");
}

TEST_CASE("3335_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3336_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3337_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3338_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("3339_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3340_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("3341_mov rsi, [rcx+28h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x71\x28");
}

TEST_CASE("3342_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("3343_movzx eax, byte ptr [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x02");
}

TEST_CASE("3344_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3345_add rax, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc6");
}

TEST_CASE("3346_cmp [rcx+8], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x39\x41\x08");
}

TEST_CASE("3347_ja short loc_1400043E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x07");
}

TEST_CASE("3348_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3349_jmp short loc_140004435", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x55");
}

TEST_CASE("3350_mov rax, [rcx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x41\x48");
}

TEST_CASE("3351_mov [rax-1], sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x88\x70\xff");
}

TEST_CASE("3352_mov rcx, [rcx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x48");
}

TEST_CASE("3353_movzx r8d, byte ptr [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\x02");
}

TEST_CASE("3354_add rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xce");
}

TEST_CASE("3355_add rdx, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc2\x02");
}

TEST_CASE("3356_call sub_140005180", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x84\x0d\x00\x00");
}

TEST_CASE("3357_movzx eax, byte ptr [rdi+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x47\x01");
}

TEST_CASE("3358_mov rdx, [rbx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x08");
}

TEST_CASE("3359_add rax, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc6");
}

TEST_CASE("3360_add [rbx+48h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x01\x43\x48");
}

TEST_CASE("3361_sub rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xd0");
}

TEST_CASE("3362_mov [rbx+8], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x53\x08");
}

TEST_CASE("3363_movzx eax, byte ptr [rdi+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x47\x01");
}

TEST_CASE("3364_movzx ecx, byte ptr [rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x0f");
}

TEST_CASE("3365_sub rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xc8");
}

TEST_CASE("3366_mov eax, 0FFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\xff\x00\x00\x00");
}

TEST_CASE("3367_cmp rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xd0");
}

TEST_CASE("3368_mov [rbx+28h], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x4b\x28");
}

TEST_CASE("3369_cmovb rax, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x42\xc2");
}

TEST_CASE("3370_mov [rbx+30h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x43\x30");
}

TEST_CASE("3371_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3372_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("3373_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("3374_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("3375_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3376_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3377_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("3378_mov r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc1");
}

TEST_CASE("3379_test rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc9");
}

TEST_CASE("3380_jnz short loc_140004459", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x06");
}

TEST_CASE("3381_mov eax, 80100004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x10\x80");
}

TEST_CASE("3382_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3383_cmp [rcx], r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x09");
}

TEST_CASE("3384_jz short loc_14000448E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x30");
}

TEST_CASE("3385_mov rcx, [rcx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x08");
}

TEST_CASE("3386_mov eax, 0FFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\xff\x00\x00\x00");
}

TEST_CASE("3387_sub rcx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xca");
}

TEST_CASE("3388_mov qword ptr [r8+28h], 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc7\x40\x28\x01\x00\x00\x00");
}

TEST_CASE("3389_add rcx, [r8+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\x48\x48");
}

TEST_CASE("3390_cmp rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xc8");
}

TEST_CASE("3391_mov [r8+8], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x48\x08");
}

TEST_CASE("3392_mov [r8+48h], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x50\x48");
}

TEST_CASE("3393_cmovb rax, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x42\xc1");
}

TEST_CASE("3394_mov [r8+30h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x89\x40\x30");
}

TEST_CASE("3395_mov [rdx], r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x0a");
}

TEST_CASE("3396_jmp short loc_14000449B", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x0d");
}

TEST_CASE("3397_mov rax, [rcx+48h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x41\x48");
}

TEST_CASE("3398_mov [rcx+28h], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x51\x28");
}

TEST_CASE("3399_mov [rax+rdx-1], r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x4c\x10\xff");
}

TEST_CASE("3400_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3401_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3402_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("3403_mov r11, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xda");
}

TEST_CASE("3404_cmp [rcx+4], r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x38\x49\x04");
}

TEST_CASE("3405_jz short loc_1400044B6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x06");
}

TEST_CASE("3406_movzx eax, word ptr [r8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb7\x40\x10");
}

TEST_CASE("3407_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3408_cmp dword ptr [r8+28h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x83\x78\x28\x02");
}

TEST_CASE("3409_jz short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x74");
}

TEST_CASE("3410_mov rdx, [rdx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x08");
}

TEST_CASE("3411_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3412_jz short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x6b");
}

TEST_CASE("3413_movzx r10d, byte ptr [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x0f\xb6\x10");
}

TEST_CASE("3414_mov ecx, r10d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\xca");
}

TEST_CASE("3415_test r10d, r10d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x85\xd2");
}

TEST_CASE("3416_jz short loc_1400044FC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x2a");
}

TEST_CASE("3417_sub ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xe9\x01");
}

TEST_CASE("3418_jz short loc_1400044DC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x05");
}

TEST_CASE("3419_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("3420_jnz short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x55");
}

TEST_CASE("3421_lea rcx, [r10+r10*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4b\x8d\x0c\x92");
}

TEST_CASE("3422_add rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc9");
}

TEST_CASE("3423_movzx r8d, word ptr [rdx+rcx*8+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb7\x44\xca\x10");
}

TEST_CASE("3424_lea rcx, [r10+r10*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4b\x8d\x0c\x92");
}

TEST_CASE("3425_add rcx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc9");
}

TEST_CASE("3426_cmp [rdx+rcx*8-40h], r8w", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x44\x39\x44\xca\xc0");
}

TEST_CASE("3427_jz short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x39");
}

TEST_CASE("3428_mov eax, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\xc0");
}

TEST_CASE("3429_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3430_mov rax, [r11]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\x03");
}

TEST_CASE("3431_cmp byte ptr [rax+19h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x78\x19\x02");
}

TEST_CASE("3432_jb short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x2c");
}

TEST_CASE("3433_mov ecx, [rdx+70h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x4a\x70");
}

TEST_CASE("3434_movzx eax, word ptr [rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x42\x10");
}

TEST_CASE("3435_test ecx, 0FFFFFFFBh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf7\xc1\xfb\xff\xff\xff");
}

TEST_CASE("3436_jz short locret_140004533", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x1f");
}

TEST_CASE("3437_cmp ax, [rdx+60h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x3b\x42\x60");
}

TEST_CASE("3438_jnz short locret_140004533", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x19");
}

TEST_CASE("3439_cmp ecx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xf9\x01");
}

TEST_CASE("3440_jnz short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x12");
}

TEST_CASE("3441_cmp dword ptr [rdx+54h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7a\x54\x02");
}

TEST_CASE("3442_jnz short loc_140004531", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0c");
}

TEST_CASE("3443_cmp dword ptr [rdx+78h], 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x7a\x78\x02");
}

TEST_CASE("3444_cmovz r9d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\x44\xc8");
}

TEST_CASE("3445_mov eax, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\xc1");
}

TEST_CASE("3446_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3447_xor eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc0");
}

TEST_CASE("3448_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3449_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3450_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3451_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("3452_mov r8, [rdx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x42\x18");
}

TEST_CASE("3453_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3454_mov rcx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x18");
}

TEST_CASE("3455_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("3456_lea rax, [rcx-1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x41\xff");
}

TEST_CASE("3457_add rax, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xc0");
}

TEST_CASE("3458_cmp rax, [rbx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x20");
}

TEST_CASE("3459_jbe short loc_140004560", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("3460_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3461_jmp short loc_140004593", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x33");
}

TEST_CASE("3462_mov rax, [rbx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x43\x38");
}

TEST_CASE("3463_dec r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc8");
}

TEST_CASE("3464_mov rdx, [rdx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x52\x38");
}

TEST_CASE("3465_dec rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc8");
}

TEST_CASE("3466_add rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc8");
}

TEST_CASE("3467_call sub_140005180", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x0a\x0c\x00\x00");
}

TEST_CASE("3468_mov rax, [rdi+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x18");
}

TEST_CASE("3469_dec rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc8");
}

TEST_CASE("3470_add [rbx+18h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x01\x43\x18");
}

TEST_CASE("3471_mov rax, [rbx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x43\x38");
}

TEST_CASE("3472_mov rcx, [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x18");
}

TEST_CASE("3473_mov byte ptr [rcx+rax-1], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x01\xff\x00");
}

TEST_CASE("3474_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3475_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("3476_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("3477_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3478_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3479_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3480_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("3481_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3482_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("3483_mov sil, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xf0");
}

TEST_CASE("3484_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("3485_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3486_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3487_jns short loc_140004620", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x63");
}

TEST_CASE("3488_mov rdx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x51\x18");
}

TEST_CASE("3489_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("3490_cmp rax, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x41\x20");
}

TEST_CASE("3491_jbe short loc_1400045D5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("3492_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3493_jmp loc_140004661", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x8c\x00\x00\x00");
}

TEST_CASE("3494_movzx eax, cs:word_140005640", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x64\x10\x00\x00");
}

TEST_CASE("3495_mov rcx, [rcx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x38");
}

TEST_CASE("3496_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("3497_inc qword ptr [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x18");
}

TEST_CASE("3498_mov rdx, [rsp+38h+arg_20]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x54\x24\x60");
}

TEST_CASE("3499_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3500_jz short loc_1400045FF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0c");
}

TEST_CASE("3501_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3502_call sub_140004534", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x39\xff\xff\xff");
}

TEST_CASE("3503_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3504_js short loc_140004661", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x62");
}

TEST_CASE("3505_mov rdx, 8000000000000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xba\x00\x00\x00\x00\x00\x00\x00\x80");
}

TEST_CASE("3506_cmp rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xfa");
}

TEST_CASE("3507_jz short loc_140004618", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3508_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("3509_neg rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xf7\xda");
}

TEST_CASE("3510_cmovs rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x48\xd7");
}

TEST_CASE("3511_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("3512_mov r8b, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc6");
}

TEST_CASE("3513_jmp short loc_14000464F", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2f");
}

TEST_CASE("3514_test r9b, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xc9");
}

TEST_CASE("3515_jz short loc_140004647", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x22");
}

TEST_CASE("3516_mov rdx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x51\x18");
}

TEST_CASE("3517_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("3518_cmp rax, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x41\x20");
}

TEST_CASE("3519_ja short loc_1400045CB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x98");
}

TEST_CASE("3520_movzx eax, cs:word_140005630", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xf6\x0f\x00\x00");
}

TEST_CASE("3521_mov rcx, [rcx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x38");
}

TEST_CASE("3522_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("3523_inc qword ptr [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x18");
}

TEST_CASE("3524_mov r9, [rsp+38h+arg_20]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x4c\x24\x60");
}

TEST_CASE("3525_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("3526_mov rax, [rsp+38h+arg_28]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x44\x24\x68");
}

TEST_CASE("3527_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3528_mov [rsp+38h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("3529_call sub_140004674", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x13\x00\x00\x00");
}

TEST_CASE("3530_mov rbx, [rsp+38h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x40");
}

TEST_CASE("3531_mov rsi, [rsp+38h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x48");
}

TEST_CASE("3532_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("3533_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3534_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3535_mov rax, rsp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc4");
}

TEST_CASE("3536_mov [rax+8], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x58\x08");
}

TEST_CASE("3537_mov [rax+10h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x68\x10");
}

TEST_CASE("3538_mov [rax+18h], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x70\x18");
}

TEST_CASE("3539_mov [rax+20h], rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x78\x20");
}

TEST_CASE("3540_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("3541_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("3542_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("3543_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("3544_movzx ebp, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb6\xe8");
}

TEST_CASE("3545_mov rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xda");
}

TEST_CASE("3546_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("3547_test r9, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xc9");
}

TEST_CASE("3548_jz short loc_1400046B0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x10");
}

TEST_CASE("3549_mov rdx, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xd1");
}

TEST_CASE("3550_call sub_140004534", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x8c\xfe\xff\xff");
}

TEST_CASE("3551_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3552_js loc_140004798", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xe8\x00\x00\x00");
}

TEST_CASE("3553_lea r14, [rsp+58h+var_24]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x74\x24\x34");
}

TEST_CASE("3554_lea r8, a00010203040506; \"000102030405060708091011121314151617181\"...", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x64\x55\x07\x00");
}

TEST_CASE("3555_jmp short loc_1400046EB", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2d");
}

TEST_CASE("3556_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3557_mov rax, 47AE147AE147AE15h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xb8\x15\xae\x47\xe1\x7a\x14\xae\x47");
}

TEST_CASE("3558_mul rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xf7\xe3");
}

TEST_CASE("3559_sub rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xda");
}

TEST_CASE("3560_shr rbx, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xd1\xeb");
}

TEST_CASE("3561_add rbx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xda");
}

TEST_CASE("3562_shr rbx, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xc1\xeb\x06");
}

TEST_CASE("3563_imul rax, rbx, 64h ; 'd'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x6b\xc3\x64");
}

TEST_CASE("3564_sub rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xc8");
}

TEST_CASE("3565_movzx eax, word ptr [r8+rcx*2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb7\x04\x48");
}

TEST_CASE("3566_mov [r14], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x41\x89\x06");
}

TEST_CASE("3567_sub r14, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xee\x02");
}

TEST_CASE("3568_cmp rbx, 64h ; 'd'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xfb\x64");
}

TEST_CASE("3569_jnb short loc_1400046BE", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\xc9");
}

TEST_CASE("3570_mov r15, [rdi+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x7f\x18");
}

TEST_CASE("3571_lea rsi, [rsp+58h+var_24]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x74\x24\x34");
}

TEST_CASE("3572_movzx eax, word ptr [r8+rbx*2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb7\x04\x58");
}

TEST_CASE("3573_xor r12d, r12d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xe4");
}

TEST_CASE("3574_cmp rbx, 0Ah", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xfb\x0a");
}

TEST_CASE("3575_mov [r14], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x41\x89\x06");
}

TEST_CASE("3576_mov rcx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcd");
}

TEST_CASE("3577_setb r12b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x92\xc4");
}

TEST_CASE("3578_sub rsi, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x2b\xf4");
}

TEST_CASE("3579_sub rsi, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x2b\xf6");
}

TEST_CASE("3580_cmp rsi, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xf5");
}

TEST_CASE("3581_cmova rbp, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x47\xee");
}

TEST_CASE("3582_add rbp, r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xef");
}

TEST_CASE("3583_cmp rbp, [rdi+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x6f\x20");
}

TEST_CASE("3584_jbe short loc_140004732", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x07");
}

TEST_CASE("3585_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3586_jmp short loc_140004798", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x66");
}

TEST_CASE("3587_xor ebx, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xdb");
}

TEST_CASE("3588_cmp rcx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xce");
}

TEST_CASE("3589_jbe short loc_140004756", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x1d");
}

TEST_CASE("3590_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3591_mov edx, 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\xba\x30\x00\x00\x00");
}

TEST_CASE("3592_mov rcx, [rdi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4f\x38");
}

TEST_CASE("3593_sub rbx, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xde");
}

TEST_CASE("3594_dec rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc9");
}

TEST_CASE("3595_mov r8, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc3");
}

TEST_CASE("3596_add rcx, r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xcf");
}

TEST_CASE("3597_call sub_140005440", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xea\x0c\x00\x00");
}

TEST_CASE("3598_mov rcx, [rdi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4f\x38");
}

TEST_CASE("3599_lea rdx, [r12+r14]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4b\x8d\x14\x34");
}

TEST_CASE("3600_dec rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc9");
}

TEST_CASE("3601_mov r8, rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc6");
}

TEST_CASE("3602_add rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xcb");
}

TEST_CASE("3603_add rcx, r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xcf");
}

TEST_CASE("3604_call sub_140005180", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x11\x0a\x00\x00");
}

TEST_CASE("3605_mov rax, [rdi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x47\x38");
}

TEST_CASE("3606_mov rdx, [rsp+58h+arg_20]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x94\x24\x80\x00\x00\x00");
}

TEST_CASE("3607_mov [rdi+18h], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6f\x18");
}

TEST_CASE("3608_mov byte ptr [rax+rbp-1], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x28\xff\x00");
}

TEST_CASE("3609_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3610_jz short loc_140004793", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3611_mov rcx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcf");
}

TEST_CASE("3612_call sub_140004534", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xa3\xfd\xff\xff");
}

TEST_CASE("3613_jmp short loc_140004798", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x05");
}

TEST_CASE("3614_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3615_mov rbx, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x60");
}

TEST_CASE("3616_mov rbp, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x68");
}

TEST_CASE("3617_mov rsi, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x70");
}

TEST_CASE("3618_mov rdi, [rsp+58h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x7c\x24\x78");
}

TEST_CASE("3619_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("3620_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("3621_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("3622_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("3623_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3624_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3625_mov [rsp+arg_8], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x10");
}

TEST_CASE("3626_mov [rsp+arg_10], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x18");
}

TEST_CASE("3627_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3628_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("3629_mov sil, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xf1");
}

TEST_CASE("3630_mov bpl, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xe8");
}

TEST_CASE("3631_mov rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xfa");
}

TEST_CASE("3632_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3633_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3634_jns short loc_14000485A", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x7d");
}

TEST_CASE("3635_mov rdx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x51\x18");
}

TEST_CASE("3636_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("3637_cmp rax, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x41\x20");
}

TEST_CASE("3638_jbe short loc_1400047F5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("3639_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3640_jmp loc_1400048B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xbf\x00\x00\x00");
}

TEST_CASE("3641_movzx eax, cs:word_140005640", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\x44\x0e\x00\x00");
}

TEST_CASE("3642_mov rcx, [rcx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x38");
}

TEST_CASE("3643_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("3644_inc qword ptr [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x18");
}

TEST_CASE("3645_mov rdx, [rsp+48h+arg_30]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x94\x24\x80\x00\x00\x00");
}

TEST_CASE("3646_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3647_jz short loc_140004826", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x10");
}

TEST_CASE("3648_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3649_call sub_140004534", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x16\xfd\xff\xff");
}

TEST_CASE("3650_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3651_js loc_1400048B4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\x8e\x00\x00\x00");
}

TEST_CASE("3652_mov rdx, 8000000000000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xba\x00\x00\x00\x00\x00\x00\x00\x80");
}

TEST_CASE("3653_cmp rdi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xfa");
}

TEST_CASE("3654_jz short loc_14000483F", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3655_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("3656_neg rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xf7\xda");
}

TEST_CASE("3657_cmovs rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\x48\xd7");
}

TEST_CASE("3658_mov rax, [rsp+48h+arg_38]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x24\x88\x00\x00\x00");
}

TEST_CASE("3659_mov r9b, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xce");
}

TEST_CASE("3660_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("3661_mov r8b, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc5");
}

TEST_CASE("3662_and [rsp+48h+var_20], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x64\x24\x28\x00");
}

TEST_CASE("3663_jmp short loc_1400048A4", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x4a");
}

TEST_CASE("3664_cmp [rsp+48h+arg_28], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\x7c\x24\x78\x00");
}

TEST_CASE("3665_jz short loc_140004887", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x26");
}

TEST_CASE("3666_mov rdx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x51\x18");
}

TEST_CASE("3667_lea rax, [rdx+1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x42\x01");
}

TEST_CASE("3668_cmp rax, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x41\x20");
}

TEST_CASE("3669_ja loc_1400047EB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x78\xff\xff\xff");
}

TEST_CASE("3670_movzx eax, cs:word_140005630", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb7\x05\xb6\x0d\x00\x00");
}

TEST_CASE("3671_mov rcx, [rcx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x38");
}

TEST_CASE("3672_mov [rcx+rdx-1], ax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x89\x44\x11\xff");
}

TEST_CASE("3673_inc qword ptr [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x43\x18");
}

TEST_CASE("3674_mov rax, [rsp+48h+arg_38]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x24\x88\x00\x00\x00");
}

TEST_CASE("3675_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("3676_mov [rsp+48h+var_18], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x30");
}

TEST_CASE("3677_mov rax, [rsp+48h+arg_30]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x84\x24\x80\x00\x00\x00");
}

TEST_CASE("3678_mov [rsp+48h+var_20], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("3679_mov al, [rsp+48h+arg_20]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x44\x24\x70");
}

TEST_CASE("3680_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3681_mov [rsp+48h+var_28], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("3682_call sub_1400048CC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x18\x00\x00\x00");
}

TEST_CASE("3683_mov rbx, [rsp+48h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x50");
}

TEST_CASE("3684_mov rbp, [rsp+48h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x58");
}

TEST_CASE("3685_mov rsi, [rsp+48h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x60");
}

TEST_CASE("3686_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("3687_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3688_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3689_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3690_mov [rsp+arg_8], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x6c\x24\x10");
}

TEST_CASE("3691_mov [rsp+arg_10], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x18");
}

TEST_CASE("3692_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3693_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("3694_mov rbp, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xea");
}

TEST_CASE("3695_mov dil, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xf9");
}

TEST_CASE("3696_mov rdx, [rsp+38h+arg_28]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x54\x24\x68");
}

TEST_CASE("3697_mov sil, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xf0");
}

TEST_CASE("3698_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3699_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3700_jz short loc_1400048FF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x09");
}

TEST_CASE("3701_call sub_140004534", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x39\xfc\xff\xff");
}

TEST_CASE("3702_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3703_js short loc_140004935", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x36");
}

TEST_CASE("3704_mov al, [rsp+38h+arg_20]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x44\x24\x60");
}

TEST_CASE("3705_mov r9b, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xcf");
}

TEST_CASE("3706_mov r8b, sil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\xc6");
}

TEST_CASE("3707_mov [rsp+38h+var_18], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x44\x24\x20");
}

TEST_CASE("3708_mov rdx, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd5");
}

TEST_CASE("3709_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3710_call sub_14000494C", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x34\x00\x00\x00");
}

TEST_CASE("3711_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3712_js short loc_140004935", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x19");
}

TEST_CASE("3713_mov rdx, [rsp+38h+arg_30]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x54\x24\x70");
}

TEST_CASE("3714_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3715_jz short loc_140004930", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3716_mov rcx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xcb");
}

TEST_CASE("3717_call sub_140004534", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x06\xfc\xff\xff");
}

TEST_CASE("3718_jmp short loc_140004935", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x05");
}

TEST_CASE("3719_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3720_mov rbx, [rsp+38h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x40");
}

TEST_CASE("3721_mov rbp, [rsp+38h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x6c\x24\x48");
}

TEST_CASE("3722_mov rsi, [rsp+38h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x50");
}

TEST_CASE("3723_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("3724_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3725_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3726_mov [rsp+arg_10], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x18");
}

TEST_CASE("3727_mov [rsp+arg_18], r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x4c\x24\x20");
}

TEST_CASE("3728_mov [rsp+arg_8], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x54\x24\x10");
}

TEST_CASE("3729_push rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x55");
}

TEST_CASE("3730_push rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x56");
}

TEST_CASE("3731_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3732_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("3733_push r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x55");
}

TEST_CASE("3734_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("3735_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("3736_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("3737_mov r12, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x61\x18");
}

TEST_CASE("3738_mov r11b, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8a\xd9");
}

TEST_CASE("3739_mov r13, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x69\x20");
}

TEST_CASE("3740_mov rsi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf1");
}

TEST_CASE("3741_sub r13, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x2b\xec");
}

TEST_CASE("3742_movzx r14d, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x0f\xb6\xf0");
}

TEST_CASE("3743_cmp r13, r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x3b\xee");
}

TEST_CASE("3744_jb loc_140004AE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x82\x5e\x01\x00\x00");
}

TEST_CASE("3745_mov edi, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xbf\x01\x00\x00\x00");
}

TEST_CASE("3746_test rdx, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xd2");
}

TEST_CASE("3747_jnz short loc_1400049D8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x46");
}

TEST_CASE("3748_test r8b, r8b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xc0");
}

TEST_CASE("3749_cmovnz edi, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x45\xfe");
}

TEST_CASE("3750_movzx ebx, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x0f\xb6\xdf");
}

TEST_CASE("3751_cmp r13, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xeb");
}

TEST_CASE("3752_jb loc_140004AE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x82\x40\x01\x00\x00");
}

TEST_CASE("3753_mov rcx, [rcx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x38");
}

TEST_CASE("3754_mov r8d, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xc3");
}

TEST_CASE("3755_dec rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc9");
}

TEST_CASE("3756_mov edx, 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\xba\x30\x00\x00\x00");
}

TEST_CASE("3757_add rcx, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xcc");
}

TEST_CASE("3758_call sub_140005440", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x83\x0a\x00\x00");
}

TEST_CASE("3759_lea rcx, [rbx+r12]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4a\x8d\x0c\x23");
}

TEST_CASE("3760_mov rax, [rsi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x46\x38");
}

TEST_CASE("3761_mov [rsi+18h], rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x4e\x18");
}

TEST_CASE("3762_mov byte ptr [rax+rcx-1], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc6\x44\x08\xff\x00");
}

TEST_CASE("3763_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3764_jmp loc_140004AEB", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x13\x01\x00\x00");
}

TEST_CASE("3765_xor bl, bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x32\xdb");
}

TEST_CASE("3766_lea r8, cs:140000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x1f\xb6\xff\xff");
}

TEST_CASE("3767_xor r9d, r9d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("3768_mov rax, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc2");
}

TEST_CASE("3769_mov rcx, 0FFFFFFFF00000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xb9\x00\x00\x00\x00\xff\xff\xff\xff");
}

TEST_CASE("3770_and rax, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x23\xc1");
}

TEST_CASE("3771_neg rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xf7\xd8");
}

TEST_CASE("3772_sbb bpl, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x1a\xed");
}

TEST_CASE("3773_and bpl, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x80\xe5\x08");
}

TEST_CASE("3774_add bpl, 7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x80\xc5\x07");
}

TEST_CASE("3775_movsx r10d, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xbe\xd5");
}

TEST_CASE("3776_mov r15, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xfa");
}

TEST_CASE("3777_lea ecx, ds:0[r10*4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x8d\x0c\x95\x00\x00\x00\x00");
}

TEST_CASE("3778_shr r15, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xd3\xef");
}

TEST_CASE("3779_and r15b, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xe7\x0f");
}

TEST_CASE("3780_test bl, bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xdb");
}

TEST_CASE("3781_jnz loc_140004AA8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x88\x00\x00\x00");
}

TEST_CASE("3782_test r15b, r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xff");
}

TEST_CASE("3783_jz loc_140004AD2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xa9\x00\x00\x00");
}

TEST_CASE("3784_test r11b, r11b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x84\xdb");
}

TEST_CASE("3785_jz short loc_140004A41", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x13");
}

TEST_CASE("3786_cmp r15b, 9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xff\x09");
}

TEST_CASE("3787_jbe short loc_140004A41", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0d");
}

TEST_CASE("3788_mov r8d, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\xc6");
}

TEST_CASE("3789_cmp r14d, r10d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x3b\xf2");
}

TEST_CASE("3790_jg short loc_140004A41", "[single-file]")
{
    TEST_INSTRUCTIONS("\x7f\x05");
}

TEST_CASE("3791_mov dl, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\xd7");
}

TEST_CASE("3792_jmp short loc_140004A46", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x05");
}

TEST_CASE("3793_xor dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x32\xd2");
}

TEST_CASE("3794_mov r8d, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8b\xc6");
}

TEST_CASE("3795_movzx ecx, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xca");
}

TEST_CASE("3796_movsx rax, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0f\xbe\xc5");
}

TEST_CASE("3797_add rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc8");
}

TEST_CASE("3798_cmp r13, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xe9");
}

TEST_CASE("3799_jbe loc_140004AE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x86\x8d\x00\x00\x00");
}

TEST_CASE("3800_mov r9, [rsi+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x4e\x38");
}

TEST_CASE("3801_dec r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc9");
}

TEST_CASE("3802_add r9, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x03\xcc");
}

TEST_CASE("3803_mov [rsp+58h+arg_0], r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x89\x4c\x24\x60");
}

TEST_CASE("3804_test dl, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xd2");
}

TEST_CASE("3805_jz short loc_140004A73", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("3806_mov byte ptr [r9], 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xc6\x01\x30");
}

TEST_CASE("3807_mov bl, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x8a\xdf");
}

TEST_CASE("3808_cmp r8d, r10d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x3b\xc2");
}

TEST_CASE("3809_jle short loc_140004A9C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x7e\x24");
}

TEST_CASE("3810_mov bl, r14b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xde");
}

TEST_CASE("3811_mov edx, 30h ; '0'", "[single-file]")
{
    TEST_INSTRUCTIONS("\xba\x30\x00\x00\x00");
}

TEST_CASE("3812_sub bl, bpl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x2a\xdd");
}

TEST_CASE("3813_mov rcx, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc9");
}

TEST_CASE("3814_sub bl, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x2a\xdf");
}

TEST_CASE("3815_movzx r8d, bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\xc3");
}

TEST_CASE("3816_call sub_140005440", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xae\x09\x00\x00");
}

TEST_CASE("3817_mov r9, [rsp+58h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x4c\x24\x60");
}

TEST_CASE("3818_mov r11b, [rsp+58h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x5c\x24\x78");
}

TEST_CASE("3819_mov rdx, [rsp+58h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x54\x24\x68");
}

TEST_CASE("3820_lea r8, cs:140000000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x58\xb5\xff\xff");
}

TEST_CASE("3821_movzx ecx, bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xcb");
}

TEST_CASE("3822_add bl, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x02\xdf");
}

TEST_CASE("3823_cmp [rsp+58h+arg_20], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xbc\x24\x80\x00\x00\x00\x00");
}

TEST_CASE("3824_movzx eax, r15b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xb6\xc7");
}

TEST_CASE("3825_jz short loc_140004AC6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0a");
}

TEST_CASE("3826_mov al, [rax+r8+5650h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x8a\x84\x00\x50\x56\x00\x00");
}

TEST_CASE("3827_jmp short loc_140004ACE", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x08");
}

TEST_CASE("3828_mov al, [rax+r8+5670h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x8a\x84\x00\x70\x56\x00\x00");
}

TEST_CASE("3829_mov [rcx+r9], al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x88\x04\x09");
}

TEST_CASE("3830_sub bpl, dil", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x2a\xef");
}

TEST_CASE("3831_jns loc_140004A02", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x89\x27\xff\xff\xff");
}

TEST_CASE("3832_movzx ecx, bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xcb");
}

TEST_CASE("3833_add rcx, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xcc");
}

TEST_CASE("3834_jmp loc_1400049C1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xdb\xfe\xff\xff");
}

TEST_CASE("3835_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3836_mov rbx, [rsp+58h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x70");
}

TEST_CASE("3837_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("3838_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("3839_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("3840_pop r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5d");
}

TEST_CASE("3841_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("3842_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3843_pop rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5e");
}

TEST_CASE("3844_pop rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5d");
}

TEST_CASE("3845_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3846_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("3847_mov [rsp+arg_8], rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x74\x24\x10");
}

TEST_CASE("3848_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("3849_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("3850_mov rbx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd9");
}

TEST_CASE("3851_mov edi, r8d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\xf8");
}

TEST_CASE("3852_movzx r8d, byte ptr [rdx+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\x42\x08");
}

TEST_CASE("3853_mov rsi, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf2");
}

TEST_CASE("3854_mov rcx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x49\x18");
}

TEST_CASE("3855_lea rax, [rcx+r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4a\x8d\x04\x01");
}

TEST_CASE("3856_cmp rax, [rbx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\x43\x20");
}

TEST_CASE("3857_jbe short loc_140004B35", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x0a");
}

TEST_CASE("3858_mov eax, 80100009h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x09\x00\x10\x80");
}

TEST_CASE("3859_jmp loc_140004BC9", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x94\x00\x00\x00");
}

TEST_CASE("3860_mov rax, [rbx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x43\x38");
}

TEST_CASE("3861_inc r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc0");
}

TEST_CASE("3862_mov rdx, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x12");
}

TEST_CASE("3863_dec rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc8");
}

TEST_CASE("3864_add rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc8");
}

TEST_CASE("3865_call sub_140005180", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x36\x06\x00\x00");
}

TEST_CASE("3866_sub edi, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xef\x01");
}

TEST_CASE("3867_jz short loc_140004B89", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x3a");
}

TEST_CASE("3868_cmp edi, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\xff\x01");
}

TEST_CASE("3869_jnz short loc_140004BBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x68");
}

TEST_CASE("3870_mov rcx, [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x18");
}

TEST_CASE("3871_movzx r8d, byte ptr [rsi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\x46\x08");
}

TEST_CASE("3872_dec rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc9");
}

TEST_CASE("3873_mov rdx, [rbx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x38");
}

TEST_CASE("3874_add rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xd1");
}

TEST_CASE("3875_lea rax, [r8+rcx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x04\x08");
}

TEST_CASE("3876_cmp rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xc8");
}

TEST_CASE("3877_jnb short loc_140004BBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x4c");
}

TEST_CASE("3878_mov cl, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x0a");
}

TEST_CASE("3879_lea eax, [rcx-61h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8d\x41\x9f");
}

TEST_CASE("3880_cmp al, 19h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x19");
}

TEST_CASE("3881_ja short loc_140004B7E", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x05");
}

TEST_CASE("3882_and cl, 0DFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xe1\xdf");
}

TEST_CASE("3883_mov [rdx], cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x0a");
}

TEST_CASE("3884_inc rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc2");
}

TEST_CASE("3885_sub r8, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe8\x01");
}

TEST_CASE("3886_jnz short loc_140004B70", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xe9");
}

TEST_CASE("3887_jmp short loc_140004BBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x33");
}

TEST_CASE("3888_mov rcx, [rbx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x4b\x18");
}

TEST_CASE("3889_movzx r8d, byte ptr [rsi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\xb6\x46\x08");
}

TEST_CASE("3890_dec rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc9");
}

TEST_CASE("3891_mov rdx, [rbx+38h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x53\x38");
}

TEST_CASE("3892_add rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xd1");
}

TEST_CASE("3893_lea rax, [r8+rcx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x04\x08");
}

TEST_CASE("3894_cmp rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xc8");
}

TEST_CASE("3895_jnb short loc_140004BBC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x17");
}

TEST_CASE("3896_mov cl, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\x0a");
}

TEST_CASE("3897_lea eax, [rcx-41h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8d\x41\xbf");
}

TEST_CASE("3898_cmp al, 19h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3c\x19");
}

TEST_CASE("3899_ja short loc_140004BB3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x05");
}

TEST_CASE("3900_or cl, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xc9\x20");
}

TEST_CASE("3901_mov [rdx], cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x0a");
}

TEST_CASE("3902_inc rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc2");
}

TEST_CASE("3903_sub r8, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe8\x01");
}

TEST_CASE("3904_jnz short loc_140004BA5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xe9");
}

TEST_CASE("3905_movzx eax, byte ptr [rsi+8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\x46\x08");
}

TEST_CASE("3906_add [rbx+18h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x01\x43\x18");
}

TEST_CASE("3907_mov eax, 100000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x00\x00\x10\x00");
}

TEST_CASE("3908_mov rbx, [rsp+28h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x30");
}

TEST_CASE("3909_mov rsi, [rsp+28h+arg_8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x74\x24\x38");
}

TEST_CASE("3910_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("3911_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("3912_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3913_sub rsp, 38h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x38");
}

TEST_CASE("3914_mov rax, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc2");
}

TEST_CASE("3915_mov r9d, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x02\x00\x00\x00");
}

TEST_CASE("3916_xor edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("3917_mov [rax], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x10");
}

TEST_CASE("3918_lea r8d, [r9+2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8d\x41\x02");
}

TEST_CASE("3919_lea rdx, [rsp+38h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x54\x24\x40");
}

TEST_CASE("3920_mov [rsp+38h+var_18], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x54\x24\x20");
}

TEST_CASE("3921_mov rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd1");
}

TEST_CASE("3922_mov rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc8");
}

TEST_CASE("3923_call cs:MmCopyMemory", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x09\x14\x00\x00");
}

TEST_CASE("3924_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("3925_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3926_js short loc_140004C17", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x0a");
}

TEST_CASE("3927_cmp [rsp+38h+arg_0], 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x7c\x24\x40\x04");
}

TEST_CASE("3928_jnz short loc_140004C17", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x02");
}

TEST_CASE("3929_mov cl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb1\x01");
}

TEST_CASE("3930_mov al, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\xc1");
}

TEST_CASE("3931_add rsp, 38h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x38");
}

TEST_CASE("3932_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3933_sub rsp, 38h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x38");
}

TEST_CASE("3934_mov rax, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc2");
}

TEST_CASE("3935_mov r9d, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x02\x00\x00\x00");
}

TEST_CASE("3936_xor edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("3937_mov [rax], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x10");
}

TEST_CASE("3938_lea r8d, [r9+6]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x8d\x41\x06");
}

TEST_CASE("3939_lea rdx, [rsp+38h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x54\x24\x40");
}

TEST_CASE("3940_mov [rsp+38h+var_18], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x54\x24\x20");
}

TEST_CASE("3941_mov rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd1");
}

TEST_CASE("3942_mov rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc8");
}

TEST_CASE("3943_call cs:MmCopyMemory", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xc4\x13\x00\x00");
}

TEST_CASE("3944_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("3945_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3946_js short loc_140004C5C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x78\x0a");
}

TEST_CASE("3947_cmp [rsp+38h+arg_0], 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x7c\x24\x40\x08");
}

TEST_CASE("3948_jnz short loc_140004C5C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x02");
}

TEST_CASE("3949_mov cl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb1\x01");
}

TEST_CASE("3950_mov al, cl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8a\xc1");
}

TEST_CASE("3951_add rsp, 38h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x38");
}

TEST_CASE("3952_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3953_push rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x53");
}

TEST_CASE("3954_sub rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x20");
}

TEST_CASE("3955_and [rsp+28h+SystemInformation], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x83\x64\x24\x30\x00");
}

TEST_CASE("3956_lea r9, [rsp+28h+SystemInformation]; ReturnLength", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x4c\x24\x30");
}

TEST_CASE("3957_xor r8d, r8d; SystemInformationLength", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc0");
}

TEST_CASE("3958_lea rdx, [rsp+28h+SystemInformation]; SystemInformation", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x54\x24\x30");
}

TEST_CASE("3959_lea ecx, [r8+0Bh]; SystemInformationClass", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8d\x48\x0b");
}

TEST_CASE("3960_call ZwQuerySystemInformation", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xdb\x03\x00\x00");
}

TEST_CASE("3961_mov ebx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xd8");
}

TEST_CASE("3962_cmp eax, 0C0000004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x3d\x04\x00\x00\xc0");
}

TEST_CASE("3963_jz short loc_140004CA3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("3964_lea r8, Format; \"[MD] Failed to get correct size for sys\"...", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xfb\x09\x00\x00");
}

TEST_CASE("3965_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("3966_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("3967_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x91\x13\x00\x00");
}

TEST_CASE("3968_mov eax, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc3");
}

TEST_CASE("3969_jmp short loc_140004CF8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x55");
}

TEST_CASE("3970_mov edx, [rsp+28h+SystemInformation]; NumberOfBytes", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x54\x24\x30");
}

TEST_CASE("3971_xor ecx, ecx; PoolType", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("3972_call cs:ExAllocatePool", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x51\x13\x00\x00");
}

TEST_CASE("3973_mov cs:qword_14007BD60, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x05\xaa\x70\x07\x00");
}

TEST_CASE("3974_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("3975_jnz short loc_140004CD3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x18");
}

TEST_CASE("3976_lea r8, aMdModuleListAl; \"[MD] Module list allocation failed!\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x0e\x0a\x00\x00");
}

TEST_CASE("3977_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("3978_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("3979_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x64\x13\x00\x00");
}

TEST_CASE("3980_mov eax, 0C0000004h", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x04\x00\x00\xc0");
}

TEST_CASE("3981_jmp short loc_140004CF8", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x25");
}

TEST_CASE("3982_mov r8d, [rsp+28h+SystemInformation]; SystemInformationLength", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\x44\x24\x30");
}

TEST_CASE("3983_xor r9d, r9d; ReturnLength", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("3984_mov rdx, rax; SystemInformation", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd0");
}

TEST_CASE("3985_lea ecx, [r9+0Bh]; SystemInformationClass", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8d\x49\x0b");
}

TEST_CASE("3986_call ZwQuerySystemInformation", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x79\x03\x00\x00");
}

TEST_CASE("3987_mov ebx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xd8");
}

TEST_CASE("3988_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("3989_jns short loc_140004CF6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x09");
}

TEST_CASE("3990_lea r8, aMdFailedToQuer; \"[MD] Failed to query system modules!\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x0c\x0a\x00\x00");
}

TEST_CASE("3991_jmp short loc_140004C95", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x9f");
}

TEST_CASE("3992_xor eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc0");
}

TEST_CASE("3993_add rsp, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x20");
}

TEST_CASE("3994_pop rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5b");
}

TEST_CASE("3995_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("3996_mov r9, cs:qword_14007BD60", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x0d\x59\x70\x07\x00");
}

TEST_CASE("3997_xor edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("3998_cmp [r9], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x39\x11");
}

TEST_CASE("3999_jbe short loc_140004D38", "[single-file]")
{
    TEST_INSTRUCTIONS("\x76\x2a");
}

TEST_CASE("4000_lea r8, [r9+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8d\x41\x20");
}

TEST_CASE("4001_mov r10, [r8-8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\x50\xf8");
}

TEST_CASE("4002_cmp rcx, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x3b\xca");
}

TEST_CASE("4003_jb short loc_140004D26", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x0b");
}

TEST_CASE("4004_mov eax, [r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\x00");
}

TEST_CASE("4005_add rax, r10", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xc2");
}

TEST_CASE("4006_cmp rcx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xc8");
}

TEST_CASE("4007_jb short loc_140004D3B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x15");
}

TEST_CASE("4008_mov eax, [r9]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\x01");
}

TEST_CASE("4009_inc rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc2");
}

TEST_CASE("4010_add r8, 128h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x81\xc0\x28\x01\x00\x00");
}

TEST_CASE("4011_cmp rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x3b\xd0");
}

TEST_CASE("4012_jb short loc_140004D12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\xda");
}

TEST_CASE("4013_xor al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x32\xc0");
}

TEST_CASE("4014_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4015_mov al, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb0\x01");
}

TEST_CASE("4016_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4017_mov [rsp+arg_0], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x08");
}

TEST_CASE("4018_push rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x55");
}

TEST_CASE("4019_push rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x56");
}

TEST_CASE("4020_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("4021_push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("4022_push r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x55");
}

TEST_CASE("4023_push r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x56");
}

TEST_CASE("4024_push r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x57");
}

TEST_CASE("4025_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("4026_lea r8, aMdInitializing; \"[MD] Initializing...\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xd5\x09\x00\x00");
}

TEST_CASE("4027_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4028_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4029_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xcb\x12\x00\x00");
}

TEST_CASE("4030_mov r13d, 1000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xbd\x00\x10\x00\x00");
}

TEST_CASE("4031_mov ecx, 200h; PoolType", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb9\x00\x02\x00\x00");
}

TEST_CASE("4032_mov edx, r13d; NumberOfBytes", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8b\xd5");
}

TEST_CASE("4033_call cs:ExAllocatePool", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x87\x12\x00\x00");
}

TEST_CASE("4034_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4035_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4036_mov cs:qword_14007BD68, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x05\xe4\x6f\x07\x00");
}

TEST_CASE("4037_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("4038_jnz short loc_140004D95", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0c");
}

TEST_CASE("4039_lea r8, aMdFailedToAllo; \"[MD] Failed to allocate memory for chec\"...", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xc0\x09\x00\x00");
}

TEST_CASE("4040_jmp loc_140004F86", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xf1\x01\x00\x00");
}

TEST_CASE("4041_lea r8, aMdCachingSyste; \"[MD] Caching system modules...\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xf4\x09\x00\x00");
}

TEST_CASE("4042_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x8e\x12\x00\x00");
}

TEST_CASE("4043_call sub_140004C64", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xbd\xfe\xff\xff");
}

TEST_CASE("4044_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("4045_jns short loc_140004DB7", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x0c");
}

TEST_CASE("4046_lea r8, aMdFailedToCach; \"[MD] Failed to cache system modules!\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xfe\x09\x00\x00");
}

TEST_CASE("4047_jmp loc_140004F82", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xcb\x01\x00\x00");
}

TEST_CASE("4048_call cs:MmGetPhysicalMemoryRanges", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x4b\x12\x00\x00");
}

TEST_CASE("4049_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4050_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4051_mov rsi, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf0");
}

TEST_CASE("4052_test rax, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xc0");
}

TEST_CASE("4053_jnz short loc_140004DD5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x0c");
}

TEST_CASE("4054_lea r8, aMdFailedToGetP; \"[MD] Failed to get physical memory rang\"...", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x10\x0a\x00\x00");
}

TEST_CASE("4055_jmp loc_140004F86", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\xb1\x01\x00\x00");
}

TEST_CASE("4056_lea r8, aMdStartingMemo; \"[MD] Starting memory scan (this can tak\"...", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x34\x0a\x00\x00");
}

TEST_CASE("4057_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x4e\x12\x00\x00");
}

TEST_CASE("4058_add rsi, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc6\x08");
}

TEST_CASE("4059_mov rbx, [rsi-8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5e\xf8");
}

TEST_CASE("4060_mov [rsp+78h+var_40], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5c\x24\x38");
}

TEST_CASE("4061_test rbx, rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xdb");
}

TEST_CASE("4062_jnz short loc_140004DFD", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x09");
}

TEST_CASE("4063_cmp [rsi], rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x39\x1e");
}

TEST_CASE("4064_jz loc_140004F4B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x4e\x01\x00\x00");
}

TEST_CASE("4065_mov r12, [rsi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x26");
}

TEST_CASE("4066_xor r15d, r15d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xff");
}

TEST_CASE("4067_test r12, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xe4");
}

TEST_CASE("4068_jz loc_140004F42", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\x36\x01\x00\x00");
}

TEST_CASE("4069_mov rcx, cs:qword_14007BD68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x0d\x55\x6f\x07\x00");
}

TEST_CASE("4070_lea rax, [rsp+78h+arg_18]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x84\x24\x98\x00\x00\x00");
}

TEST_CASE("4071_mov rbp, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xec");
}

TEST_CASE("4072_mov [rsp+78h+var_58], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("4073_sub rbp, r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x2b\xef");
}

TEST_CASE("4074_lea rdi, [r15+rbx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x3c\x1f");
}

TEST_CASE("4075_cmp rbp, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x3b\xed");
}

TEST_CASE("4076_mov r9d, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xb9\x01\x00\x00\x00");
}

TEST_CASE("4077_mov rdx, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xd7");
}

TEST_CASE("4078_cmova rbp, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\x47\xed");
}

TEST_CASE("4079_mov r8, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc5");
}

TEST_CASE("4080_call cs:MmCopyMemory", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xcd\x11\x00\x00");
}

TEST_CASE("4081_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("4082_js loc_140004F36", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x88\xeb\x00\x00\x00");
}

TEST_CASE("4083_cmp [rsp+78h+arg_18], rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x39\xac\x24\x98\x00\x00\x00");
}

TEST_CASE("4084_jnz loc_140004F36", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\xdd\x00\x00\x00");
}

TEST_CASE("4085_xor r14d, r14d", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xf6");
}

TEST_CASE("4086_sub rbp, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xed\x01");
}

TEST_CASE("4087_jz loc_140004F36", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x84\xd0\x00\x00\x00");
}

TEST_CASE("4088_mov bl, r14b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x8a\xde");
}

TEST_CASE("4089_mov rax, cs:qword_14007BD68", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x05\xf8\x6e\x07\x00");
}

TEST_CASE("4090_cmp byte ptr [rax+r14], 0FFh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x80\x3c\x30\xff");
}

TEST_CASE("4091_jnz loc_140004F14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x99\x00\x00\x00");
}

TEST_CASE("4092_cmp byte ptr [rax+r14+1], 25h ; '%'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x80\x7c\x30\x01\x25");
}

TEST_CASE("4093_jnz loc_140004F14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x85\x8d\x00\x00\x00");
}

TEST_CASE("4094_lea rcx, [r14+rdi]; PhysicalAddress", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x0c\x3e");
}

TEST_CASE("4095_call MmGetVirtualForPhysical", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\xb4\x01\x00\x00");
}

TEST_CASE("4096_lea rdx, [rsp+78h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x94\x24\x90\x00\x00\x00");
}

TEST_CASE("4097_mov r13, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xe8");
}

TEST_CASE("4098_lea rcx, [rax+2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x48\x02");
}

TEST_CASE("4099_call sub_140004BDC", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x38\xfd\xff\xff");
}

TEST_CASE("4100_movsxd rcx, [rsp+78h+arg_10]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x63\x8c\x24\x90\x00\x00\x00");
}

TEST_CASE("4101_lea rdx, [rsp+78h+var_48]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x54\x24\x30");
}

TEST_CASE("4102_add rcx, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x06");
}

TEST_CASE("4103_add rcx, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xcd");
}

TEST_CASE("4104_call sub_140004C20", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x63\xfd\xff\xff");
}

TEST_CASE("4105_mov r8, [rsp+78h+var_48]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x44\x24\x30");
}

TEST_CASE("4106_test r8, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xc0");
}

TEST_CASE("4107_jz short loc_140004F14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x4d");
}

TEST_CASE("4108_mov rcx, cs:qword_14007BD60", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x0d\x92\x6e\x07\x00");
}

TEST_CASE("4109_mov rdx, [rcx+18h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x51\x18");
}

TEST_CASE("4110_cmp r8, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xc2");
}

TEST_CASE("4111_jb short loc_140004F14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x3d");
}

TEST_CASE("4112_mov eax, [rcx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\x41\x20");
}

TEST_CASE("4113_add rax, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x03\xc2");
}

TEST_CASE("4114_cmp r8, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xc0");
}

TEST_CASE("4115_jnb short loc_140004F14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x32");
}

TEST_CASE("4116_mov rcx, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xcd");
}

TEST_CASE("4117_call sub_140004D00", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x16\xfe\xff\xff");
}

TEST_CASE("4118_test al, al", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xc0");
}

TEST_CASE("4119_jnz short loc_140004F14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x26");
}

TEST_CASE("4120_inc cs:qword_14007BD50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x05\x5b\x6e\x07\x00");
}

TEST_CASE("4121_lea rax, [r14+rdi]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8d\x04\x3e");
}

TEST_CASE("4122_mov r9, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xcd");
}

TEST_CASE("4123_mov [rsp+78h+var_58], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x20");
}

TEST_CASE("4124_lea r8, aMdFoundAt0xLlx; \"[MD] Found at 0x%llx (0x%llx)\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x48\x09\x00\x00");
}

TEST_CASE("4125_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4126_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4127_mov bl, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb3\x01");
}

TEST_CASE("4128_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x1c\x11\x00\x00");
}

TEST_CASE("4129_inc r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc6");
}

TEST_CASE("4130_cmp r14, rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xf5");
}

TEST_CASE("4131_jb loc_140004E69", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x82\x49\xff\xff\xff");
}

TEST_CASE("4132_test bl, bl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x84\xdb");
}

TEST_CASE("4133_mov r13d, 1000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\xbd\x00\x10\x00\x00");
}

TEST_CASE("4134_mov rbx, [rsp+78h+var_40]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x5c\x24\x38");
}

TEST_CASE("4135_jz short loc_140004F36", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x07");
}

TEST_CASE("4136_inc cs:qword_14007BD58", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x05\x22\x6e\x07\x00");
}

TEST_CASE("4137_add r15, r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x03\xfd");
}

TEST_CASE("4138_cmp r15, r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x3b\xfc");
}

TEST_CASE("4139_jb loc_140004E0C", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x82\xca\xfe\xff\xff");
}

TEST_CASE("4140_add rsi, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc6\x10");
}

TEST_CASE("4141_jmp loc_140004DE6", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x9b\xfe\xff\xff");
}

TEST_CASE("4142_mov r9, cs:qword_14007BD50", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x0d\xfe\x6d\x07\x00");
}

TEST_CASE("4143_lea r8, aMdGadgetsLlu; \"[MD] -> Gadgets: %llu\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x17\x09\x00\x00");
}

TEST_CASE("4144_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4145_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4146_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xcd\x10\x00\x00");
}

TEST_CASE("4147_mov r9, cs:qword_14007BD58", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x0d\xee\x6d\x07\x00");
}

TEST_CASE("4148_lea r8, aMdPagesLlu; \"[MD] -> Pages: %llu\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x1f\x09\x00\x00");
}

TEST_CASE("4149_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4150_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4151_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xb5\x10\x00\x00");
}

TEST_CASE("4152_lea r8, aMdFinished; \"[MD] Finished\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x2e\x09\x00\x00");
}

TEST_CASE("4153_xor edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4154_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4155_mov rbx, [rsp+78h+arg_0]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\x9c\x24\x80\x00\x00\x00");
}

TEST_CASE("4156_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("4157_pop r15", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5f");
}

TEST_CASE("4158_pop r14", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5e");
}

TEST_CASE("4159_pop r13", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5d");
}

TEST_CASE("4160_pop r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x5c");
}

TEST_CASE("4161_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("4162_pop rsi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5e");
}

TEST_CASE("4163_pop rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5d");
}

TEST_CASE("4164_jmp cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x25\x8c\x10\x00\x00");
}

TEST_CASE("4165_lea r8, aMdUnloading; \"[MD] Unloading...\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\x09\x09\x00\x00");
}

TEST_CASE("4166_xor edx, edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4167_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4168_jmp cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x25\x6e\x10\x00\x00");
}

TEST_CASE("4169_push rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x53");
}

TEST_CASE("4170_sub rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x40");
}

TEST_CASE("4171_lea rax, sub_140004FB0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x05\xd3\xff\xff\xff");
}

TEST_CASE("4172_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4173_mov [rcx+68h], rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x41\x68");
}

TEST_CASE("4174_lea r8, aMdStartingMain; \"[MD] Starting main thread...\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xf6\x08\x00\x00");
}

TEST_CASE("4175_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4176_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x3e\x10\x00\x00");
}

TEST_CASE("4177_and [rsp+48h+var_18], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x64\x24\x30\x00");
}

TEST_CASE("4178_lea rax, StartRoutine", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x05\x41\xfd\xff\xff");
}

TEST_CASE("4179_mov [rsp+48h+StartRoutine], rax; StartRoutine", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x44\x24\x28");
}

TEST_CASE("4180_lea rcx, [rsp+48h+ThreadHandle]; ThreadHandle", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8d\x4c\x24\x50");
}

TEST_CASE("4181_and [rsp+48h+var_28], 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\x64\x24\x20\x00");
}

TEST_CASE("4182_xor r9d, r9d; ProcessHandle", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc9");
}

TEST_CASE("4183_xor r8d, r8d; ObjectAttributes", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x33\xc0");
}

TEST_CASE("4184_mov edx, 10000000h; DesiredAccess", "[single-file]")
{
    TEST_INSTRUCTIONS("\xba\x00\x00\x00\x10");
}

TEST_CASE("4185_call cs:PsCreateSystemThread", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\x00\x10\x00\x00");
}

TEST_CASE("4186_mov ebx, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xd8");
}

TEST_CASE("4187_test eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x85\xc0");
}

TEST_CASE("4188_jns short loc_14000503B", "[single-file]")
{
    TEST_INSTRUCTIONS("\x79\x15");
}

TEST_CASE("4189_lea r8, aMdFailedToStar; \"[MD] Failed to start main thread\n\"", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8d\x05\xd3\x08\x00\x00");
}

TEST_CASE("4190_xor edx, edx; Level", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xd2");
}

TEST_CASE("4191_xor ecx, ecx; ComponentId", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4192_call cs:DbgPrintEx", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x15\xf9\x0f\x00\x00");
}

TEST_CASE("4193_mov eax, ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x8b\xc3");
}

TEST_CASE("4194_jmp short loc_14000503D", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x02");
}

TEST_CASE("4195_xor eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc0");
}

TEST_CASE("4196_add rsp, 40h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x40");
}

TEST_CASE("4197_pop rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5b");
}

TEST_CASE("4198_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4199_jmp cs:__imp_MmGetVirtualForPhysical", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\x25\xdd\x0f\x00\x00");
}

TEST_CASE("4200_retn 0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc2\x00\x00");
}

TEST_CASE("4201_jmp cs:__imp_ZwQuerySystemInformation", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x25\xb2\x0f\x00\x00");
}

TEST_CASE("4202_push rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x40\x53");
}

TEST_CASE("4203_sub rsp, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x10");
}

TEST_CASE("4204_xor eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc0");
}

TEST_CASE("4205_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4206_cpuid ", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xa2");
}

TEST_CASE("4207_mov r8d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xc0");
}

TEST_CASE("4208_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4209_mov eax, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x01\x00\x00\x00");
}

TEST_CASE("4210_xor r9b, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x32\xc9");
}

TEST_CASE("4211_cpuid ", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xa2");
}

TEST_CASE("4212_mov [rsp+18h+var_18], eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x04\x24");
}

TEST_CASE("4213_mov r10d, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8b\xd1");
}

TEST_CASE("4214_mov eax, 7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x07\x00\x00\x00");
}

TEST_CASE("4215_mov [rsp+18h+var_14], ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x5c\x24\x04");
}

TEST_CASE("4216_mov [rsp+18h+var_10], ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x4c\x24\x08");
}

TEST_CASE("4217_mov [rsp+18h+var_C], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x54\x24\x0c");
}

TEST_CASE("4218_cmp r8d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x3b\xc0");
}

TEST_CASE("4219_jl short loc_1400050CB", "[single-file]")
{
    TEST_INSTRUCTIONS("\x7c\x24");
}

TEST_CASE("4220_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4221_movzx r9d, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x45\x0f\xb6\xc9");
}

TEST_CASE("4222_cpuid ", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xa2");
}

TEST_CASE("4223_mov [rsp+18h+var_18], eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x04\x24");
}

TEST_CASE("4224_bt ebx, 9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xba\xe3\x09");
}

TEST_CASE("4225_mov eax, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\xb8\x02\x00\x00\x00");
}

TEST_CASE("4226_mov [rsp+18h+var_14], ebx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x5c\x24\x04");
}

TEST_CASE("4227_cmovb r9d, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x0f\x42\xc8");
}

TEST_CASE("4228_mov [rsp+18h+var_10], ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x4c\x24\x08");
}

TEST_CASE("4229_mov [rsp+18h+var_C], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x54\x24\x0c");
}

TEST_CASE("4230_bt r10d, 14h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xba\xe2\x14");
}

TEST_CASE("4231_jnb short loc_1400050F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x26");
}

TEST_CASE("4232_bt r10d, 1Bh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xba\xe2\x1b");
}

TEST_CASE("4233_jnb short loc_1400050F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x1f");
}

TEST_CASE("4234_bt r10d, 1Ch", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\xba\xe2\x1c");
}

TEST_CASE("4235_jnb short loc_1400050F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x18");
}

TEST_CASE("4236_xor ecx, ecx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc9");
}

TEST_CASE("4237_xgetbv ", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x01\xd0");
}

TEST_CASE("4238_shl rdx, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xc1\xe2\x20");
}

TEST_CASE("4239_or rdx, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x0b\xd0");
}

TEST_CASE("4240_and dl, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xe2\x06");
}

TEST_CASE("4241_cmp dl, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x80\xfa\x06");
}

TEST_CASE("4242_jnz short loc_1400050F8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\x04");
}

TEST_CASE("4243_or r9b, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xc9\x04");
}

TEST_CASE("4244_or r9b, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x80\xc9\x01");
}

TEST_CASE("4245_mov cs:byte_14007BD40, r9b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x0d\x3d\x6c\x07\x00");
}

TEST_CASE("4246_xor eax, eax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x33\xc0");
}

TEST_CASE("4247_add rsp, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x10");
}

TEST_CASE("4248_pop rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5b");
}

TEST_CASE("4249_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4250_jmp rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\xe0");
}

TEST_CASE("4251_jmp cs:__guard_dispatch_icall_fptr", "[single-file]")
{
    TEST_INSTRUCTIONS("\xff\x25\x02\x0f\x00\x00");
}

TEST_CASE("4252_mov rax, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc1");
}

TEST_CASE("4253_cmp r8, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x08");
}

TEST_CASE("4254_jb short loc_1400051C0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x37");
}

TEST_CASE("4255_cmp r8, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x10");
}

TEST_CASE("4256_ja short loc_1400051A0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x11");
}

TEST_CASE("4257_mov r11, [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\x1a");
}

TEST_CASE("4258_mov rdx, [rdx+r8-8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4a\x8b\x54\x02\xf8");
}

TEST_CASE("4259_mov [rcx], r11", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x89\x19");
}

TEST_CASE("4260_mov [rcx+r8-8], rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4a\x89\x54\x01\xf8");
}

TEST_CASE("4261_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4262_cmp r8, 20h ; ' '", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x20");
}

TEST_CASE("4263_ja short loc_140005200", "[single-file]")
{
    TEST_INSTRUCTIONS("\x77\x5a");
}

TEST_CASE("4264_movups xmm0, xmmword ptr [rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x02");
}

TEST_CASE("4265_movups xmm1, xmmword ptr [rdx+r8-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x0f\x10\x4c\x02\xf0");
}

TEST_CASE("4266_movups xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x01");
}

TEST_CASE("4267_movups xmmword ptr [rcx+r8-10h], xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x0f\x11\x4c\x01\xf0");
}

TEST_CASE("4268_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4269_test r8, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xc0");
}

TEST_CASE("4270_jz short locret_1400051DA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x15");
}

TEST_CASE("4271_sub rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xd1");
}

TEST_CASE("4272_jb short loc_1400051E0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x16");
}

TEST_CASE("4273_mov r11b, [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x1c\x11");
}

TEST_CASE("4274_inc rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc1");
}

TEST_CASE("4275_dec r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc8");
}

TEST_CASE("4276_mov [rcx-1], r11b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x59\xff");
}

TEST_CASE("4277_jnz short loc_1400051CA", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xf0");
}

TEST_CASE("4278_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4279_add rcx, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xc8");
}

TEST_CASE("4280_mov r11b, [rcx+rdx-1]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x8a\x5c\x11\xff");
}

TEST_CASE("4281_dec rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xff\xc9");
}

TEST_CASE("4282_dec r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc8");
}

TEST_CASE("4283_mov [rcx], r11b", "[single-file]")
{
    TEST_INSTRUCTIONS("\x44\x88\x19");
}

TEST_CASE("4284_jnz short loc_1400051E3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xf0");
}

TEST_CASE("4285_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4286_lea r11, [rdx+r8]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4e\x8d\x1c\x02");
}

TEST_CASE("4287_sub rdx, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x2b\xd1");
}

TEST_CASE("4288_jnb short loc_140005212", "[single-file]")
{
    TEST_INSTRUCTIONS("\x73\x09");
}

TEST_CASE("4289_cmp r11, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x3b\xd9");
}

TEST_CASE("4290_ja loc_140005380", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\x6e\x01\x00\x00");
}

TEST_CASE("4291_movups xmm0, xmmword ptr [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x04\x11");
}

TEST_CASE("4292_add rcx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x10");
}

TEST_CASE("4293_test cl, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf6\xc1\x0f");
}

TEST_CASE("4294_jz short loc_140005231", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x12");
}

TEST_CASE("4295_and rcx, 0FFFFFFFFFFFFFFF0h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe1\xf0");
}

TEST_CASE("4296_movups xmm1, xmmword ptr [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x0c\x11");
}

TEST_CASE("4297_movups xmmword ptr [rax], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x00");
}

TEST_CASE("4298_movaps xmm0, xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x28\xc1");
}

TEST_CASE("4299_add rcx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x10");
}

TEST_CASE("4300_add r8, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x03\xc0");
}

TEST_CASE("4301_sub r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x2b\xc1");
}

TEST_CASE("4302_mov r9, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xc8");
}

TEST_CASE("4303_shr r9, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe9\x06");
}

TEST_CASE("4304_jz short loc_1400052AF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x6f");
}

TEST_CASE("4305_cmp r9, 1000h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x81\xf9\x00\x10\x00\x00");
}

TEST_CASE("4306_ja loc_140005300", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x87\xb3\x00\x00\x00");
}

TEST_CASE("4307_and r8, 3Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x3f");
}

TEST_CASE("4308_jmp short loc_140005280", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2d");
}

TEST_CASE("4309_movups xmm1, xmmword ptr [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x0c\x11");
}

TEST_CASE("4310_movups xmm2, xmmword ptr [rcx+rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x54\x11\x10");
}

TEST_CASE("4311_movups xmm3, xmmword ptr [rcx+rdx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x5c\x11\x20");
}

TEST_CASE("4312_movups xmm4, xmmword ptr [rcx+rdx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x64\x11\x30");
}

TEST_CASE("4313_movaps xmmword ptr [rcx-10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x41\xf0");
}

TEST_CASE("4314_add rcx, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x40");
}

TEST_CASE("4315_dec r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc9");
}

TEST_CASE("4316_movaps xmmword ptr [rcx-40h], xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x49\xc0");
}

TEST_CASE("4317_movaps xmmword ptr [rcx-30h], xmm2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x51\xd0");
}

TEST_CASE("4318_movaps xmmword ptr [rcx-20h], xmm3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x59\xe0");
}

TEST_CASE("4319_movaps xmm0, xmm4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x28\xc4");
}

TEST_CASE("4320_jnz short loc_140005280", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xd1");
}

TEST_CASE("4321_mov r9, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xc8");
}

TEST_CASE("4322_shr r9, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe9\x04");
}

TEST_CASE("4323_jz short loc_1400052D1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x19");
}

TEST_CASE("4324_nop dword ptr [rax+rax+00000000h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x1f\x84\x00\x00\x00\x00\x00");
}

TEST_CASE("4325_movaps xmmword ptr [rcx-10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x41\xf0");
}

TEST_CASE("4326_movups xmm0, xmmword ptr [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x04\x11");
}

TEST_CASE("4327_add rcx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x10");
}

TEST_CASE("4328_dec r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc9");
}

TEST_CASE("4329_jnz short loc_1400052C0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xef");
}

TEST_CASE("4330_and r8, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x0f");
}

TEST_CASE("4331_jz short loc_1400052E5", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0e");
}

TEST_CASE("4332_lea r11, [rcx+r8-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4e\x8d\x5c\x01\xf0");
}

TEST_CASE("4333_movups xmm1, xmmword ptr [r11+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x10\x0c\x13");
}

TEST_CASE("4334_movups xmmword ptr [r11], xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x11\x0b");
}

TEST_CASE("4335_movaps xmmword ptr [rcx-10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x41\xf0");
}

TEST_CASE("4336_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4337_mov r9, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xc8");
}

TEST_CASE("4338_shr r9, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe9\x06");
}

TEST_CASE("4339_and r8, 3Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x3f");
}

TEST_CASE("4340_prefetchnta byte ptr [rcx+rdx+40h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x18\x44\x11\x40");
}

TEST_CASE("4341_jmp short loc_140005340", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x2e");
}

TEST_CASE("4342_movups xmm1, xmmword ptr [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x0c\x11");
}

TEST_CASE("4343_movups xmm2, xmmword ptr [rcx+rdx+10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x54\x11\x10");
}

TEST_CASE("4344_movups xmm3, xmmword ptr [rcx+rdx+20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x5c\x11\x20");
}

TEST_CASE("4345_movups xmm4, xmmword ptr [rcx+rdx+30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x64\x11\x30");
}

TEST_CASE("4346_movntps xmmword ptr [rcx-10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x2b\x41\xf0");
}

TEST_CASE("4347_add rcx, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x40");
}

TEST_CASE("4348_prefetchnta byte ptr [rcx+rdx+40h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x18\x44\x11\x40");
}

TEST_CASE("4349_dec r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc9");
}

TEST_CASE("4350_movntps xmmword ptr [rcx-40h], xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x2b\x49\xc0");
}

TEST_CASE("4351_movntps xmmword ptr [rcx-30h], xmm2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x2b\x51\xd0");
}

TEST_CASE("4352_movntps xmmword ptr [rcx-20h], xmm3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x2b\x59\xe0");
}

TEST_CASE("4353_movaps xmm0, xmm4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x28\xc4");
}

TEST_CASE("4354_jnz short loc_140005340", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xcc");
}

TEST_CASE("4355_sfence ", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xae\xf8");
}

TEST_CASE("4356_jmp loc_1400052AF", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe9\x33\xff\xff\xff");
}

TEST_CASE("4357_add rcx, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x03\xc8");
}

TEST_CASE("4358_movups xmm0, xmmword ptr [rcx+rdx-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x44\x11\xf0");
}

TEST_CASE("4359_sub rcx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe9\x10");
}

TEST_CASE("4360_sub r8, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe8\x10");
}

TEST_CASE("4361_test cl, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf6\xc1\x0f");
}

TEST_CASE("4362_jz short loc_1400053AD", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x18");
}

TEST_CASE("4363_mov r11, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xd9");
}

TEST_CASE("4364_and rcx, 0FFFFFFFFFFFFFFF0h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe1\xf0");
}

TEST_CASE("4365_movups xmm1, xmmword ptr [rcx+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x0c\x11");
}

TEST_CASE("4366_movups xmmword ptr [r11], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x11\x03");
}

TEST_CASE("4367_movaps xmm0, xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x28\xc1");
}

TEST_CASE("4368_mov r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc1");
}

TEST_CASE("4369_sub r8, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x2b\xc0");
}

TEST_CASE("4370_mov r9, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xc8");
}

TEST_CASE("4371_shr r9, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe9\x06");
}

TEST_CASE("4372_jz short loc_1400053EF", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x39");
}

TEST_CASE("4373_and r8, 3Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x3f");
}

TEST_CASE("4374_jmp short loc_1400053C0", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\x04");
}

TEST_CASE("4375_movups xmm1, xmmword ptr [rcx+rdx-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x4c\x11\xf0");
}

TEST_CASE("4376_movups xmm2, xmmword ptr [rcx+rdx-20h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x54\x11\xe0");
}

TEST_CASE("4377_movups xmm3, xmmword ptr [rcx+rdx-30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x5c\x11\xd0");
}

TEST_CASE("4378_movups xmm4, xmmword ptr [rcx+rdx-40h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x64\x11\xc0");
}

TEST_CASE("4379_movaps xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x01");
}

TEST_CASE("4380_sub rcx, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe9\x40");
}

TEST_CASE("4381_dec r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc9");
}

TEST_CASE("4382_movaps xmmword ptr [rcx+30h], xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x49\x30");
}

TEST_CASE("4383_movaps xmmword ptr [rcx+20h], xmm2", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x51\x20");
}

TEST_CASE("4384_movaps xmmword ptr [rcx+10h], xmm3", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x59\x10");
}

TEST_CASE("4385_movaps xmm0, xmm4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x28\xc4");
}

TEST_CASE("4386_jnz short loc_1400053C0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xd1");
}

TEST_CASE("4387_mov r9, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8b\xc8");
}

TEST_CASE("4388_shr r9, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe9\x04");
}

TEST_CASE("4389_jz short loc_140005411", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x19");
}

TEST_CASE("4390_nop dword ptr [rax+rax+00000000h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x1f\x84\x00\x00\x00\x00\x00");
}

TEST_CASE("4391_movaps xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x01");
}

TEST_CASE("4392_movups xmm0, xmmword ptr [rcx+rdx-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x10\x44\x11\xf0");
}

TEST_CASE("4393_sub rcx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe9\x10");
}

TEST_CASE("4394_dec r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc9");
}

TEST_CASE("4395_jnz short loc_140005400", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xef");
}

TEST_CASE("4396_and r8, 0Fh", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x0f");
}

TEST_CASE("4397_jz short loc_140005426", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0f");
}

TEST_CASE("4398_mov r11, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xd9");
}

TEST_CASE("4399_sub r11, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x2b\xd8");
}

TEST_CASE("4400_movups xmm1, xmmword ptr [r11+rdx]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x10\x0c\x13");
}

TEST_CASE("4401_movups xmmword ptr [r11], xmm1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x11\x0b");
}

TEST_CASE("4402_movaps xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x01");
}

TEST_CASE("4403_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4404_mov rax, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xc1");
}

TEST_CASE("4405_movzx edx, dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\xb6\xd2");
}

TEST_CASE("4406_mov r9, 101010101010101h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xb9\x01\x01\x01\x01\x01\x01\x01\x01");
}

TEST_CASE("4407_imul rdx, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x0f\xaf\xd1");
}

TEST_CASE("4408_movq xmm0, rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x48\x0f\x6e\xc2");
}

TEST_CASE("4409_movlhps xmm0, xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x16\xc0");
}

TEST_CASE("4410_cmp r8, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x40");
}

TEST_CASE("4411_jb short loc_1400054D0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x6e");
}

TEST_CASE("4412_test cs:byte_14007BD40, 2", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf6\x05\xd7\x68\x07\x00\x02");
}

TEST_CASE("4413_jz short loc_140005478", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x0d");
}

TEST_CASE("4414_cmp r8, 320h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x81\xf8\x20\x03\x00\x00");
}

TEST_CASE("4415_jnb sub_140005580", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x83\x08\x01\x00\x00");
}

TEST_CASE("4416_movups xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x01");
}

TEST_CASE("4417_add r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x03\xc1");
}

TEST_CASE("4418_add rcx, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x10");
}

TEST_CASE("4419_and rcx, 0FFFFFFFFFFFFFFF0h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe1\xf0");
}

TEST_CASE("4420_sub r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x2b\xc1");
}

TEST_CASE("4421_cmp r8, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x40");
}

TEST_CASE("4422_jb short loc_1400054D6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x47");
}

TEST_CASE("4423_lea rdx, [rcx+r8-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4a\x8d\x54\x01\xf0");
}

TEST_CASE("4424_lea r9, [rcx+r8-30h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4e\x8d\x4c\x01\xd0");
}

TEST_CASE("4425_and r9, 0FFFFFFFFFFFFFFF0h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe1\xf0");
}

TEST_CASE("4426_shr r8, 6", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xc1\xe8\x06");
}

TEST_CASE("4427_movaps xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x01");
}

TEST_CASE("4428_movaps xmmword ptr [rcx+10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x41\x10");
}

TEST_CASE("4429_add rcx, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc1\x40");
}

TEST_CASE("4430_dec r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xff\xc8");
}

TEST_CASE("4431_movaps xmmword ptr [rcx-20h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x41\xe0");
}

TEST_CASE("4432_movaps xmmword ptr [rcx-10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x41\xf0");
}

TEST_CASE("4433_jnz short loc_1400054A1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x75\xe8");
}

TEST_CASE("4434_movaps xmmword ptr [r9], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x29\x01");
}

TEST_CASE("4435_movaps xmmword ptr [r9+10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x29\x41\x10");
}

TEST_CASE("4436_movaps xmmword ptr [r9+20h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x29\x41\x20");
}

TEST_CASE("4437_movups xmmword ptr [rdx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x02");
}

TEST_CASE("4438_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4439_cmp r8, 10h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x10");
}

TEST_CASE("4440_jb short loc_140005500", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x2a");
}

TEST_CASE("4441_lea r9, [r8+rcx-10h]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8d\x4c\x08\xf0");
}

TEST_CASE("4442_and r8, 20h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x20");
}

TEST_CASE("4443_movups xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x01");
}

TEST_CASE("4444_shr r8, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xd1\xe8");
}

TEST_CASE("4445_movups xmmword ptr [r9], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x0f\x11\x01");
}

TEST_CASE("4446_movups xmmword ptr [rcx+r8], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x0f\x11\x04\x01");
}

TEST_CASE("4447_neg r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xf7\xd8");
}

TEST_CASE("4448_movups xmmword ptr [r9+r8], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x43\x0f\x11\x04\x01");
}

TEST_CASE("4449_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4450_cmp r8, 4", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x04");
}

TEST_CASE("4451_jb short loc_140005530", "[single-file]")
{
    TEST_INSTRUCTIONS("\x72\x2a");
}

TEST_CASE("4452_lea r9, [r8+rcx-4]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x8d\x4c\x08\xfc");
}

TEST_CASE("4453_and r8, 8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xe0\x08");
}

TEST_CASE("4454_mov [rcx], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x89\x11");
}

TEST_CASE("4455_shr r8, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xd1\xe8");
}

TEST_CASE("4456_mov [r9], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x89\x11");
}

TEST_CASE("4457_mov [rcx+r8], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x42\x89\x14\x01");
}

TEST_CASE("4458_neg r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\xf7\xd8");
}

TEST_CASE("4459_mov [r9+r8], edx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x43\x89\x14\x01");
}

TEST_CASE("4460_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4461_test r8, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4d\x85\xc0");
}

TEST_CASE("4462_jz short locret_140005546", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x11");
}

TEST_CASE("4463_mov [rcx], dl", "[single-file]")
{
    TEST_INSTRUCTIONS("\x88\x11");
}

TEST_CASE("4464_lea r9, [rcx+r8-2]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4e\x8d\x4c\x01\xfe");
}

TEST_CASE("4465_cmp r8, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x83\xf8\x01");
}

TEST_CASE("4466_jz short locret_140005546", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x04");
}

TEST_CASE("4467_mov [r9], dx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x41\x89\x11");
}

TEST_CASE("4468_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4469_push rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x57");
}

TEST_CASE("4470_test cs:byte_14007BD40, 1", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf6\x05\xb8\x67\x07\x00\x01");
}

TEST_CASE("4471_jz short loc_1400055BC", "[single-file]")
{
    TEST_INSTRUCTIONS("\x74\x32");
}

TEST_CASE("4472_mov rdi, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8b\xf9");
}

TEST_CASE("4473_add r8, rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x03\xc1");
}

TEST_CASE("4474_movups xmmword ptr [rcx], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x01");
}

TEST_CASE("4475_add rdi, 40h ; '@'", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc7\x40");
}

TEST_CASE("4476_movups xmmword ptr [rcx+10h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x41\x10");
}

TEST_CASE("4477_and rdi, 0FFFFFFFFFFFFFFC0h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xe7\xc0");
}

TEST_CASE("4478_movups xmmword ptr [rcx+20h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x41\x20");
}

TEST_CASE("4479_sub r8, rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x2b\xc7");
}

TEST_CASE("4480_movups xmmword ptr [rcx+30h], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x11\x41\x30");
}

TEST_CASE("4481_mov rcx, r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc8");
}

TEST_CASE("4482_mov r9, rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x4c\x8b\xc8");
}

TEST_CASE("4483_movq rax, xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x66\x48\x0f\x7e\xc0");
}

TEST_CASE("4484_rep stosb", "[single-file]")
{
    TEST_INSTRUCTIONS("\xf3\xaa");
}

TEST_CASE("4485_mov rax, r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x49\x8b\xc1");
}

TEST_CASE("4486_pop rdi", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5f");
}

TEST_CASE("4487_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}

TEST_CASE("4488_call sub_140005600", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x3f\x00\x00\x00");
}

TEST_CASE("4489_jmp short loc_14000558A", "[single-file]")
{
    TEST_INSTRUCTIONS("\xeb\xc7");
}

TEST_CASE("4490_push r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x51");
}

TEST_CASE("4491_push r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x50");
}

TEST_CASE("4492_push rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x52");
}

TEST_CASE("4493_push rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x51");
}

TEST_CASE("4494_push rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x50");
}

TEST_CASE("4495_sub rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xec\x30");
}

TEST_CASE("4496_movaps [rsp+58h+var_38], xmm0", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x29\x44\x24\x20");
}

TEST_CASE("4497_call sub_140005070", "[single-file]")
{
    TEST_INSTRUCTIONS("\xe8\x5b\xfa\xff\xff");
}

TEST_CASE("4498_movaps xmm0, [rsp+58h+var_38]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x0f\x28\x44\x24\x20");
}

TEST_CASE("4499_add rsp, 30h", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x83\xc4\x30");
}

TEST_CASE("4500_pop rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x58");
}

TEST_CASE("4501_pop rcx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x59");
}

TEST_CASE("4502_pop rdx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x5a");
}

TEST_CASE("4503_pop r8", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x58");
}

TEST_CASE("4504_pop r9", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x59");
}

TEST_CASE("4505_retn ", "[single-file]")
{
    TEST_INSTRUCTIONS("\xc3");
}