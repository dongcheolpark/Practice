mov ebp,esp
sub esp,0xc
mov ebx,0x402000
mov edx,0x402040
mov dword ptr[ebp-0x4], 0 i
jmp FOR1E
:FOR1S
mov dword ptr[ebp-0x8], 0 j
jmp FOR2E
:FOR2S
mov eax, dword ptr[ebp-0x4] i
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] j
add ecx, eax
fldz
fstp dword ptr[ebx+ecx*4]
mov dword ptr[ebp-0xc], 0 k
jmp FOR3E
:FOR3S
mov eax, dword ptr[ebp-0x4] i
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] j
add ecx, eax
fld dword ptr[ebx+ecx*4]
mov eax, dword ptr[ebp-0x4] i
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0xc] k
add ecx, eax
fld dword ptr[edx+ecx*4]
mov eax, dword ptr[ebp-0xc] k
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] j
add ecx, eax
fld dword ptr[edx+ecx*4]
fmulp 
faddp
mov eax, dword ptr[ebp-0x4] i
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] j
add ecx, eax
fstp dword ptr[ebx+ecx*4]
add dword ptr[ebp-0xc],1 k
:FOR3E
cmp dword ptr[ebp-0xc],3 k
jle FOR3S
add dword ptr[ebp-0x8],1 j
:FOR2E
cmp dword ptr[ebp-0x8],3 j
jle FOR2S
add dword ptr[ebp-0x4],1 i
:FOR1E
cmp dword ptr[ebp-0x4],3 i
jle FOR1S

///////////


mov ebp,esp
sub esp,0xc
mov ebx,0x402000
mov edx,0x402040
mov dword ptr[ebp-0x4], 0 
jmp 0x401FFF
mov dword ptr[ebp-0x8], 0 
jmp 0x401FFF
mov eax, dword ptr[ebp-0x4] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8]
add ecx, eax
fldz
fstp dword ptr[ebx+ecx*4]
mov dword ptr[ebp-0xc], 0 
jmp 0x401FFF
mov eax, dword ptr[ebp-0x4] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] 
add ecx, eax
fld dword ptr[ebx+ecx*4]
mov eax, dword ptr[ebp-0x4] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0xc] 
add ecx, eax
fld dword ptr[edx+ecx*4]
mov eax, dword ptr[ebp-0xc] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] 
add ecx, eax
fld dword ptr[edx+ecx*4]
fmulp 
faddp
mov eax, dword ptr[ebp-0x4] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] 
add ecx, eax
fstp dword ptr[ebx+ecx*4]
add dword ptr[ebp-0xc],1 
cmp dword ptr[ebp-0xc],3 
jle 0x401FFF
add dword ptr[ebp-0x8],1 
cmp dword ptr[ebp-0x8],3 
jle 0x401FFF
add dword ptr[ebp-0x4],1 
cmp dword ptr[ebp-0x4],3 
jle 0x401FFF
