mov ebp,esp
sub esp,0xc
mov ebx,0x402000
mov edx,0x402040
mov dword ptr[ebp-0x4], 0 
jmp FOR1E
:FOR1S
mov dword ptr[ebp-0x8], 0 
jmp FOR2E
:FOR2S
mov eax, dword ptr[ebp-0x4]
imul eax,0x10
movaps xmm0, xmmword ptr [edx + eax]
mov dword ptr[ebp-0xc], 0 
jmp FOR3E
:FOR3S
mov eax, 3
sub eax, dword ptr[ebp-0xc]
imul eax,0x10
mov ecx, dword ptr[ebp-0x8]
lea ecx, dword ptr[ecx*4]
add eax,ecx
push dword ptr [edx + eax]
add dword ptr[ebp-0xc],1 
:FOR3E
cmp dword ptr[ebp-0xc],3
jle FOR3S
movups xmm1, xmmword ptr[esp]
add esp, 0x10
mulps xmm0, xmm1
movaps xmm1, xmm0
shufps xmm1, xmm0, 0xB1
addps xmm0, xmm1
movhlps xmm1, xmm0
addss xmm0, xmm1
mov eax, dword ptr[ebp-0x4] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] 
add ecx, eax
movss dword ptr[ebx+ecx*4], xmm0
add dword ptr[ebp-0x8],1 
:FOR2E
cmp dword ptr[ebp-0x8],3
jle FOR2S
add dword ptr[ebp-0x4],1 
:FOR1E
cmp dword ptr[ebp-0x4],3 
jle FOR1S

//-----------------

mov ebp,esp
sub esp,0xc
mov ebx,0x402000
mov edx,0x402040
mov dword ptr[ebp-0x4], 0 
jmp 0x401fff
:FOR1S
mov dword ptr[ebp-0x8], 0 
jmp 0x401fff
:FOR2S

mov eax, dword ptr[ebp-0x4]
imul eax,0x10
movaps xmm0, xmmword ptr [edx + eax]
mov dword ptr[ebp-0xc], 0 
jmp 0x401fff
:FOR3S
mov eax, 3
sub eax, dword ptr[ebp-0xc]
imul eax,0x10
mov ecx, dword ptr[ebp-0x8]
lea ecx, dword ptr[ecx*4]
add eax,ecx
push dword ptr [edx + eax]
add dword ptr[ebp-0xc],1 
:FOR3E
cmp dword ptr[ebp-0xc],3
jle 0x401fff
movups xmm1, xmmword ptr[esp]
add esp, 0x10
mulps xmm0, xmm1
movaps xmm1, xmm0
shufps xmm1, xmm0, 0xB1
addps xmm0, xmm1
movhlps xmm1, xmm0
addss xmm0, xmm1
mov eax, dword ptr[ebp-0x4] 
lea ecx, dword ptr[eax*4]
mov eax, dword ptr[ebp-0x8] 
add ecx, eax
movss dword ptr[ebx+ecx*4], xmm0
add dword ptr[ebp-0x8],1 
:FOR2E
cmp dword ptr[ebp-0x8],3
jle 0x401fff
add dword ptr[ebp-0x4],1 
:FOR1E
cmp dword ptr[ebp-0x4],3 
jle 0x401fff