typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void *HANDLE;

typedef ulonglong ULONG_PTR;

typedef ushort WORD;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

typedef ulong DWORD;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef void *PVOID;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef struct _M128A _M128A, *P_M128A;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef uchar BYTE;

typedef struct _M128A M128A;

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_238 _union_238, *P_union_238;

union _union_238 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_238 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef union _union_54 _union_54, *P_union_54;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulonglong DWORD64;

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[168]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[100];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int BOOL;

typedef BYTE *PBYTE;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;



uint DAT_1800078c8;
undefined DAT_1800078a0;
undefined DAT_1800046c0;
undefined DAT_1800046ec;
undefined8 DAT_180006058;
undefined4 DAT_180006864;
ulonglong DAT_180007888;
undefined8 DAT_1800071c8;
undefined4 DAT_1800075d0;
undefined8 DAT_180006c68;
undefined4 DAT_180007478;
undefined DAT_180007880;
undefined8 DAT_180007888;
undefined1 DAT_180004704;
undefined DAT_180004708;
PVOID DAT_1800078e0;
PVOID DAT_1800078d8;
undefined LAB_1800030e4;
undefined FUN_1800031f0;
int DAT_180006020;
longlong DAT_1800078d0;
int DAT_1800078cc;
undefined8 DAT_1800078e8;
undefined DAT_180004118;
undefined DAT_180004120;
undefined DAT_180004128;
undefined DAT_180004138;
undefined DAT_180006000;
undefined8 DAT_180004798;
undefined8 DAT_1800047a8;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_180000000;
ulonglong DAT_180006008;
undefined DAT_180006010;

undefined8 FUN_180001000(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    if ((DAT_1800078c8 & 1) == 0) {
      DAT_1800078c8 = DAT_1800078c8 | 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  }
  return 1;
}



char * mdCategoryName(undefined4 param_1)

{
                    // 0x1040  7  mdCategoryName
  switch(param_1) {
  case 0:
    return "Unknown";
  case 1:
    return "AI";
  case 2:
    return "AVI";
  case 3:
    return "Anim";
  case 4:
    return "AnimMixer";
  case 5:
    return "AnimFile";
  case 6:
    return "AnimScript";
  case 7:
    return "AnimAction";
  case 8:
    return "AnimVM";
  case 9:
    return "AnimScriptVM";
  case 10:
    return "Audio";
  case 0xb:
    return "AudioLow";
  case 0xc:
    return "AudioDefs";
  case 0xd:
    return "AudioFMOD";
  case 0xe:
    return "AudioVM";
  case 0xf:
    return "Speech";
  case 0x10:
    return "SpeechBank";
  case 0x11:
    return "BodyVis";
  case 0x12:
    return "Challenges";
  case 0x13:
    return "ChromeSpy";
  case 0x14:
    return "Containers";
  case 0x15:
    return "Chatters";
  case 0x16:
    return "Decals";
  case 0x17:
    return "Editor";
  case 0x18:
    return "EditorInGame";
  case 0x19:
    return "Encounters";
  case 0x1a:
    return "FX";
  case 0x1b:
    return "FXDefs";
  case 0x1c:
    return "FXObjects";
  case 0x1d:
    return "Files";
  case 0x1e:
    return "Game";
  case 0x1f:
    return "GameObject";
  case 0x20:
    return "Http";
  case 0x21:
    return "Ik";
  case 0x22:
    return "Image";
  case 0x23:
    return "Level";
  case 0x24:
    return "LevelFilms";
  case 0x25:
    return "Lights";
  case 0x26:
    return "LightObjects";
  case 0x27:
    return "Lobby";
  case 0x28:
    return "Materials";
  case 0x29:
    return "MaterialsVM";
  case 0x2a:
    return "Mesh";
  case 0x2b:
    return "MeshVM";
  case 0x2c:
    return "MeshSkin";
  case 0x2d:
    return "MeshSkinVM";
  case 0x2e:
    return "Mpl";
  case 0x2f:
    return "NavMesh";
  case 0x30:
    return "Network";
  case 0x31:
    return "Replication";
  case 0x32:
    return "ReplHistory";
  case 0x33:
    return "Objects";
  case 0x34:
    return "ObjMorphs";
  case 0x35:
    return "ObjEncounters";
  case 0x36:
    return "ObjAi";
  case 0x37:
    return "ObjTriggers";
  case 0x38:
    return "ObjMesh";
  case 0x39:
    return "Parser";
  case 0x3a:
    return "Physics";
  case 0x3b:
    return "Player";
  case 0x3c:
    return "Quests";
  case 0x3d:
    return "RPacks";
  case 0x3e:
    return "RTTI";
  case 0x3f:
    return "Renderer";
  case 0x40:
    return "RenderTargets";
  case 0x41:
    return "Saves";
  case 0x42:
    return "ServerHostedData";
  case 0x43:
    return "SimpleObjects";
  case 0x44:
    return "Skills";
  case 0x45:
    return "Strings";
  case 0x46:
    return "StringsLocalized";
  case 0x47:
    return "StringsPools";
  case 0x48:
    return "System";
  case 0x49:
    return "SystemVM";
  case 0x4a:
    return "Terrain";
  case 0x4b:
    return "TinyObjects";
  case 0x4c:
    return "TTL";
  case 0x4d:
    return "UI";
  case 0x4e:
    return "UI_Anims";
  case 0x4f:
    return "UI_PanelText";
  case 0x50:
    return "UI_Fonts";
  case 0x51:
    return "UI_TexDef";
  case 0x52:
    return "UI_Nf";
  case 0x53:
    return "UI_Msg";
  case 0x54:
    return "Tests";
  case 0x55:
    return "Stats";
  case 0x56:
    return "Count";
  default:
    return "undefined!";
  }
}



undefined4 mdSubCategoryCount(int param_1)

{
  undefined4 uVar1;
  
                    // 0x1480  19  mdSubCategoryCount
  if (param_1 == 3) {
    return 4;
  }
  if (param_1 == 0xf) {
    return 1;
  }
  if (param_1 == 0x33) {
    return 5;
  }
  uVar1 = 0;
  if (param_1 == 0x4d) {
    uVar1 = 6;
  }
  return uVar1;
}



undefined8 mdCategoryLimit(undefined4 param_1)

{
                    // 0x14b0  6  mdCategoryLimit
  switch(param_1) {
  default:
    return 0;
  case 1:
  case 0x19:
  case 0x21:
  case 0x24:
  case 0x31:
  case 0x36:
  case 0x37:
  case 0x3a:
  case 0x3c:
    return 0x200000;
  case 2:
  case 0x22:
    return 1;
  case 3:
  case 4:
  case 0xf:
  case 0x10:
  case 0x46:
  case 0x4e:
  case 0x4f:
    return 0x300000;
  case 5:
  case 0x40:
    return 0x2800000;
  case 6:
  case 7:
  case 9:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x39:
  case 0x3b:
  case 0x41:
  case 0x44:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
    return 0x100000;
  case 8:
    return 0x2d00000;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    return 0x4100000;
  case 0x1a:
  case 0x35:
  case 0x3e:
    return 0x400000;
  case 0x23:
    return 0x600000;
  case 0x28:
  case 0x29:
    return 0xc00000;
  case 0x2a:
  case 0x2b:
  case 0x48:
  case 0x49:
    return 0x3c00000;
  case 0x2e:
    return 0x2800;
  case 0x2f:
  case 0x43:
  case 0x45:
    return 0xa00000;
  case 0x32:
  case 0x34:
  case 0x47:
    return 0x500000;
  case 0x33:
    return 0x1900000;
  case 0x38:
  case 0x4d:
    return 0xf00000;
  case 0x3d:
    return 0xaf00000;
  case 0x3f:
    return 0x1400000;
  case 0x42:
    return 0x96000;
  }
}



char * mdStatTypeName(int param_1)

{
                    // 0x16a0  18  mdStatTypeName
  if (param_1 == 0) {
    return "Detail";
  }
  if (param_1 == 1) {
    return "TopSystem";
  }
  if (param_1 == 2) {
    return "BottomSystem";
  }
  if (param_1 != 3) {
    return "undefined!";
  }
  return "Count";
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x000180001960)
// WARNING: Removing unreachable block (ram,0x0001800019b3)
// WARNING: Removing unreachable block (ram,0x0001800019b9)
// WARNING: Restarted to delay deadcode elimination for space: register

void mdDump(char *param_1)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  int local_res8;
  longlong *local_res18;
  int *local_res20;
  FILE *pFStack_10748;
  FILE *pFStack_10738;
  char *pcStack_10730;
  char *pcStack_10728;
  char acStack_10719 [33];
  char acStack_106f8 [32];
  char acStack_106d8 [32];
  char acStack_106b8 [32];
  char acStack_10698 [32];
  char acStack_10678 [32];
  char acStack_10658 [32];
  char acStack_10638 [32];
  char acStack_10618 [32];
  char acStack_105f8 [32];
  char acStack_105d8 [32];
  char acStack_105b8 [32];
  char acStack_10598 [1024];
  undefined8 *puStack_10198;
  undefined8 *puStack_10190;
  longlong lStack_10188;
  undefined1 uStack_1007c;
  undefined1 auStack_10078 [65544];
  void *local_70;
  longlong local_68;
  undefined8 *local_60;
  ulonglong local_58;
  
                    // 0x16e0  12  mdDump
  if ((DAT_1800078c8 & 1) == 0) {
    DAT_1800078c8 = DAT_1800078c8 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  pFStack_10748 = (FILE *)0x0;
  if ((param_1 != (char *)0x0) &&
     (pFStack_10748 = fopen(param_1,"wt"), pFStack_10748 != (FILE *)0x0)) {
    fwrite("-- Mem stats --\n",0x10,1,pFStack_10748);
  }
  uVar8 = DAT_180007888;
  pcVar5 = FUN_180002bd0(acStack_106f8,DAT_180007888 >> 0x14);
  pcVar6 = FUN_180002bd0(acStack_10719 + 1,uVar8);
  sprintf(acStack_10598,"free memory at main():                       %s = %sMB\n",pcVar6,pcVar5);
  if (pFStack_10748 != (FILE *)0x0) {
    uVar8 = 0xffffffffffffffff;
    pcVar5 = acStack_10598;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    fwrite(acStack_10598,~uVar8 - 1,1,pFStack_10748);
  }
  lVar11 = 0;
  iVar21 = 0;
  lVar10 = 0;
  iVar13 = 0;
  piVar9 = &DAT_180006864;
  plVar7 = &DAT_180006058;
  do {
    lVar11 = lVar11 + plVar7[-1];
    lVar10 = lVar10 + *plVar7;
    iVar21 = iVar21 + piVar9[-1];
    iVar13 = iVar13 + *piVar9;
    plVar7 = plVar7 + 2;
    piVar9 = piVar9 + 2;
  } while ((longlong)plVar7 < 0x180006308);
  uVar12 = lVar11 + lVar10;
  uVar16 = 0;
  uVar8 = uVar12;
  if ((longlong)uVar12 < 0) {
    uVar8 = -uVar12;
  }
  pcVar5 = acStack_10719;
  iVar20 = 0x20;
  do {
    iVar19 = iVar20;
    pcVar5 = pcVar5 + 1;
    iVar14 = (int)uVar16;
    uVar16 = (ulonglong)(iVar14 + 1);
    iVar20 = iVar19 + -1;
    uVar3 = (longlong)uVar8 / 10;
    *pcVar5 = (char)uVar8 + (char)uVar3 * -10 + '0';
    if (uVar3 == 0) break;
    uVar8 = uVar3;
  } while (iVar20 != 0 && iVar19 != 2);
  if (((longlong)uVar12 < 0) && (iVar20 != 0 && iVar19 != 2)) {
    acStack_10719[uVar16 + 1] = '-';
    uVar16 = (ulonglong)(iVar14 + 2);
  }
  acStack_10719[uVar16 + 1] = '\0';
  uVar15 = (uint)uVar16 >> 1;
  if (uVar15 != 0) {
    pcVar5 = acStack_10719 + (int)(uint)uVar16;
    lVar10 = 0;
    do {
      cVar1 = acStack_10719[lVar10 + 1];
      lVar11 = lVar10 + 1;
      acStack_10719[lVar10 + 1] = *pcVar5;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + -1;
      lVar10 = lVar11;
    } while (lVar11 < (longlong)(ulonglong)uVar15);
  }
  FUN_180002bd0(acStack_106d8,(ulonglong)(uint)(iVar21 + iVar13));
  pcVar5 = FUN_180002bd0(acStack_106f8,uVar12 >> 0x14);
  sprintf(acStack_10598,"summary size with per allocation overhead:   %s = %sMB, count: %s\n",
          acStack_10719 + 1,pcVar5);
  if (pFStack_10748 != (FILE *)0x0) {
    uVar8 = 0xffffffffffffffff;
    pcVar5 = acStack_10598;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    fwrite(acStack_10598,~uVar8 - 1,1,pFStack_10748);
  }
  uVar8 = 0;
  pcVar5 = acStack_10719;
  lVar10 = (ulonglong)(uint)(iVar21 + iVar13) * 0x20;
  iVar13 = 0x20;
  do {
    pcVar5 = pcVar5 + 1;
    uVar15 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar15;
    iVar21 = iVar13 + -1;
    lVar11 = lVar10 / 10;
    *pcVar5 = (char)lVar10 + (char)lVar11 * -10 + '0';
    if (lVar11 == 0) break;
    bVar23 = iVar13 != 2;
    lVar10 = lVar11;
    iVar13 = iVar21;
  } while (iVar21 != 0 && bVar23);
  acStack_10719[uVar8 + 1] = '\0';
  if (uVar15 >> 1 != 0) {
    pcVar5 = acStack_10719 + (int)uVar15;
    lVar10 = 0;
    do {
      cVar1 = acStack_10719[lVar10 + 1];
      lVar11 = lVar10 + 1;
      acStack_10719[lVar10 + 1] = *pcVar5;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + -1;
      lVar10 = lVar11;
    } while (lVar11 < (longlong)(ulonglong)(uVar15 >> 1));
  }
  sprintf(acStack_10598,"memstats overhead:                           %s\n\n",acStack_10719 + 1);
  if (pFStack_10748 != (FILE *)0x0) {
    uVar8 = 0xffffffffffffffff;
    pcVar5 = acStack_10598;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    fwrite(acStack_10598,~uVar8 - 1,1,pFStack_10748);
    fwrite("Memory statistics (with per allocation overhead) - detail, top system, bottom system\n",
           0x55,1,pFStack_10748);
  }
  pFStack_10738 = pFStack_10748;
  FUN_180002030(&puStack_10198);
  FUN_180002210((longlong)&puStack_10198,1,1,2);
  FUN_180002160((longlong *)&puStack_10198,"category",&DAT_1800046ec,&DAT_1800046c0);
  lStack_10188 = (longlong)puStack_10190;
  uStack_1007c = 1;
  if (local_58 < 0x10) {
    plVar7 = malloc(0x10010);
    plVar7[1] = 0;
    *plVar7 = (longlong)(plVar7 + 2);
    *(longlong **)(local_68 + 8) = plVar7;
    local_60 = (undefined8 *)FUN_180002330((longlong)auStack_10078,0x10);
  }
  if (local_60 != (undefined8 *)0x0) {
    *local_60 = 0;
    local_60[1] = 0;
  }
  if (puStack_10198 == (undefined8 *)0x0) {
    puStack_10198 = local_60;
  }
  else {
    *(undefined8 **)((longlong)puStack_10190 + 8) = local_60;
  }
  puStack_10190 = local_60;
  local_res18 = &DAT_1800071c8;
  local_res20 = &DAT_1800075d0;
  local_res8 = 0;
  do {
    lVar10 = local_res18[-0x22f];
    lVar11 = lVar10;
    lVar18 = 0;
    iVar13 = 0x20;
    uVar15 = 0;
    if (lVar10 < 0) {
      lVar11 = -lVar10;
    }
    do {
      uVar22 = uVar15;
      iVar21 = iVar13;
      lVar17 = lVar18;
      lVar18 = lVar17 + 1;
      uVar15 = uVar22 + 1;
      iVar13 = iVar21 + -1;
      lVar4 = lVar11 / 10;
      acStack_10719[lVar17 + 1] = (char)lVar11 + (char)lVar4 * -10 + '0';
      if (lVar4 == 0) break;
      lVar11 = lVar4;
    } while (iVar13 != 0 && iVar21 != 2);
    if ((lVar10 < 0) && (iVar13 != 0 && iVar21 != 2)) {
      acStack_10719[lVar17 + 2] = '-';
      uVar15 = uVar22 + 2;
      lVar18 = lVar17 + 2;
    }
    acStack_10719[lVar18 + 1] = '\0';
    if (uVar15 >> 1 != 0) {
      pcVar5 = acStack_10719 + lVar18;
      lVar10 = 0;
      do {
        cVar1 = acStack_10719[lVar10 + 1];
        lVar11 = lVar10 + 1;
        acStack_10719[lVar10 + 1] = *pcVar5;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + -1;
        lVar10 = lVar11;
      } while (lVar11 < (longlong)(ulonglong)(uVar15 >> 1));
    }
    pcStack_10730 = FUN_180002bd0(acStack_105b8,(longlong)local_res20[0x56]);
    pcStack_10728 = FUN_180002bd0(acStack_105d8,(longlong)*local_res20);
    FUN_180002bd0(acStack_105f8,(longlong)local_res20[-0x56]);
    FUN_180002bd0(acStack_10618,*local_res18);
    FUN_180002bd0(acStack_10638,local_res18[-0x56]);
    FUN_180002bd0(acStack_10658,local_res18[-0xac]);
    FUN_180002bd0(acStack_10678,(longlong)local_res20[-0x2b0]);
    FUN_180002bd0(acStack_10698,(longlong)local_res20[-0x306]);
    FUN_180002bd0(acStack_106b8,(longlong)local_res20[-0x35c]);
    FUN_180002bd0(acStack_106d8,local_res18[-0x183]);
    pcVar5 = FUN_180002bd0(acStack_106f8,local_res18[-0x1d9]);
    pcVar6 = mdCategoryName(local_res8);
    FUN_180002160((longlong *)&puStack_10198,pcVar6,acStack_10719 + 1,pcVar5);
    local_res8 = local_res8 + 1;
    local_res20 = local_res20 + 1;
    local_res18 = local_res18 + 1;
    if (0x55 < local_res8) {
      FUN_180002260(&puStack_10198,&pFStack_10738);
      if (pFStack_10748 != (FILE *)0x0) {
        fclose(pFStack_10748);
      }
      if ((DAT_1800078c8 & 1) == 0) {
        DAT_1800078c8 = DAT_1800078c8 | 1;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
      while (local_70 != (void *)0x0) {
        pvVar2 = *(void **)((longlong)local_70 + 8);
        free(local_70);
        local_70 = pvVar2;
      }
      return;
    }
  } while( true );
}



undefined8 mdSize(void)

{
                    // 0x1f30  17  mdSize
  return 0;
}



void mdClearMaxStats(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
                    // 0x1f40  8  mdClearMaxStats
  if ((DAT_1800078c8 & 1) == 0) {
    DAT_1800078c8 = DAT_1800078c8 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  puVar4 = &DAT_180006c68;
  puVar2 = &DAT_180007478;
  do {
    lVar1 = 0x56;
    puVar3 = puVar2;
    puVar5 = puVar4;
    do {
      puVar2 = puVar3 + 1;
      puVar4 = puVar5 + 1;
      lVar1 = lVar1 + -1;
      *puVar5 = puVar5[-0x183];
      *puVar3 = puVar3[-0x306];
      puVar3 = puVar2;
      puVar5 = puVar4;
    } while (lVar1 != 0);
  } while ((longlong)puVar2 < 0x180007880);
  if ((DAT_1800078c8 & 1) == 0) {
    DAT_1800078c8 = DAT_1800078c8 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  }
                    // WARNING: Could not recover jumptable at 0x000180001ff1. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800078a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mdFrame(void)

{
                    // 0x2000  14  mdFrame
  _DAT_180007880 = 0;
  return;
}



void mdInit(undefined8 param_1)

{
                    // 0x2010  15  mdInit
  DAT_180007888 = param_1;
  return;
}



// void __cdecl mdDumpExtraInfo(char const * __ptr64,bool (__cdecl*)(char * __ptr64 &
// __ptr64,unsigned int & __ptr64,void * __ptr64,unsigned int),char const * __ptr64,int,char const *
// __ptr64)

void __cdecl
mdDumpExtraInfo(char *param_1,_func_bool_char_ptr_ptr_uint_ptr_void_ptr_uint *param_2,char *param_3,
               int param_4,char *param_5)

{
                    // 0x2020  1  ?mdDumpExtraInfo@@YAXPEBDP6A_NAEAPEADAEAIPEAXI@Z0H0@Z
                    // 0x2020  2  ?mdGenerateAllocationsBySizeData@@YAXPEBD@Z
                    // 0x2020  3  ?mdGenerateAllocationsMapData@@YAXPEBD@Z
                    // 0x2020  9  mdDeltaEnd
                    // 0x2020  10  mdDeltaStart
                    // 0x2020  11  mdDeltaStop
                    // 0x2020  13  mdDumpBin
  return;
}



undefined8 * FUN_180002030(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = param_1 + 0x24;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x2024] = puVar1;
  param_1[0x2025] = 0;
  param_1[0x2026] = param_1 + 0x2024;
  param_1[0x2027] = puVar1;
  param_1[0x2028] = 0x10000;
  param_1[0x2029] = 0;
  param_1[0x202a] = 0;
  param_1[0x202b] = 0;
  memset((void *)((longlong)param_1 + 0x1c),0,0x100);
  if ((ulonglong)param_1[0x2028] < 0x1000) {
    plVar2 = malloc(0x10010);
    plVar2[1] = 0;
    *plVar2 = (longlong)(plVar2 + 2);
    *(longlong **)(param_1[0x2026] + 8) = plVar2;
    param_1[0x2026] = plVar2;
    param_1[0x2028] = 0x10000;
    param_1[0x2027] = *plVar2;
    lVar3 = FUN_180002330((longlong)puVar1,0x1000);
  }
  else {
    lVar3 = param_1[0x2027];
    param_1[0x2027] = lVar3 + 0x1000;
    param_1[0x2028] = param_1[0x2028] - 0x1000;
  }
  param_1[0x202b] = 0;
  param_1[0x2029] = lVar3;
  param_1[0x202a] = 0x1000;
  return param_1;
}



void FUN_180002160(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char **ppcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  int iVar6;
  char *local_res10;
  char *local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = (char *)param_3;
  local_res18[1] = (char *)param_4;
  puVar2 = FUN_1800023e0((longlong)param_1);
  puVar3 = FUN_180002490((longlong)param_1,local_res10,0);
  iVar6 = 1;
  *puVar2 = puVar3;
  ppcVar5 = &local_res10;
  while( true ) {
    ppcVar1 = ppcVar5 + 1;
    ppcVar5 = ppcVar5 + 1;
    if (*ppcVar1 == (char *)0x0) break;
    puVar4 = FUN_180002490((longlong)param_1,*ppcVar1,iVar6);
    iVar6 = iVar6 + 1;
    puVar3[1] = puVar4;
    puVar3 = puVar4;
  }
  if (iVar6 < (int)param_1[3]) {
    iVar6 = (int)param_1[3];
  }
  *(int *)(param_1 + 3) = iVar6;
  if (*param_1 == 0) {
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)puVar2;
    return;
  }
  *(undefined8 **)(param_1[1] + 8) = puVar2;
  param_1[1] = (longlong)puVar2;
  return;
}



void FUN_180002210(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar3 = local_res10;
  while( true ) {
    iVar2 = *(int *)(puVar3 + 8);
    puVar3 = puVar3 + 8;
    if (iVar2 < 0) break;
    puVar1 = (uint *)(param_1 + 0x20 + (longlong)iVar2 * 8);
    *puVar1 = *puVar1 & 0xfffffff8;
    puVar1 = (uint *)(param_1 + 0x20 + (longlong)iVar2 * 8);
    *puVar1 = *puVar1 | param_2 & 7;
  }
  return;
}



void FUN_180002260(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  FUN_1800025e0(param_1);
  uVar4 = 0xffffffffffffffff;
  pcVar6 = " | ";
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  plVar2 = (longlong *)*param_1;
  uVar3 = 0;
  local_res8[0] = 0x1f;
  uVar5 = (uint)(~uVar4 - 1);
  for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
    uVar7 = ~uVar4 - 1 & 0xffffffff;
    if (*plVar2 == 0) {
      FUN_180002670((longlong)param_1,param_2,uVar3,uVar7);
    }
    else {
      uVar3 = FUN_180002710((longlong)param_1,param_2,plVar2,uVar7);
      FUN_180002890((longlong)param_1,param_2,local_res8,uVar3,uVar5);
    }
  }
  FUN_180002890((longlong)param_1,param_2,local_res8,uVar3,uVar5);
  FUN_180002920((longlong)param_1,param_2);
  return;
}



void FUN_180002330(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10020);
  while (uVar2 < param_2) {
    uVar2 = 0x10000;
    if (0x10000 < param_2) {
      uVar2 = param_2;
    }
    plVar1 = malloc(uVar2 + 0x10);
    plVar1[1] = 0;
    *plVar1 = (longlong)(plVar1 + 2);
    *(longlong **)(*(longlong *)(param_1 + 0x10010) + 8) = plVar1;
    *(longlong **)(param_1 + 0x10010) = plVar1;
    *(ulonglong *)(param_1 + 0x10020) = uVar2;
    *(longlong *)(param_1 + 0x10018) = *plVar1;
  }
  *(longlong *)(param_1 + 0x10020) = *(longlong *)(param_1 + 0x10020) - param_2;
  *(ulonglong *)(param_1 + 0x10018) = *(longlong *)(param_1 + 0x10018) + param_2;
  return;
}



undefined8 * FUN_1800023e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(ulonglong *)(param_1 + 0x10140) < 0x10) {
    plVar1 = malloc(0x10010);
    plVar1[1] = 0;
    *plVar1 = (longlong)(plVar1 + 2);
    *(longlong **)(*(longlong *)(param_1 + 0x10130) + 8) = plVar1;
    *(longlong **)(param_1 + 0x10130) = plVar1;
    *(undefined8 *)(param_1 + 0x10140) = 0x10000;
    *(longlong *)(param_1 + 0x10138) = *plVar1;
    puVar2 = (undefined8 *)FUN_180002330(param_1 + 0x120,0x10);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10138);
    *(undefined8 **)(param_1 + 0x10138) = puVar2 + 2;
    *(ulonglong *)(param_1 + 0x10140) = *(ulonglong *)(param_1 + 0x10140) - 0x10;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



undefined8 * FUN_180002490(longlong param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  void *_Dst;
  ulonglong uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  char *pcVar7;
  ulonglong _Size;
  
  puVar5 = (undefined8 *)0x0;
  if (*(ulonglong *)(param_1 + 0x10140) < 0x10) {
    puVar3 = malloc(0x10010);
    puVar3[1] = 0;
    *puVar3 = puVar3 + 2;
    *(undefined8 **)(*(longlong *)(param_1 + 0x10130) + 8) = puVar3;
    *(undefined8 **)(param_1 + 0x10130) = puVar3;
    *(undefined8 *)(param_1 + 0x10140) = 0x10000;
    *(undefined8 *)(param_1 + 0x10138) = *puVar3;
    puVar3 = (undefined8 *)FUN_180002330(param_1 + 0x120,0x10);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x10138);
    *(undefined8 **)(param_1 + 0x10138) = puVar3 + 2;
    *(ulonglong *)(param_1 + 0x10140) = *(ulonglong *)(param_1 + 0x10140) - 0x10;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar5 = puVar3;
  }
  uVar4 = 0xffffffffffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  _Size = (ulonglong)(int)~uVar4;
  uVar6 = (short)~uVar4 - 1;
  _Dst = (void *)FUN_180002330(param_1 + 0x120,_Size);
  memcpy(_Dst,param_2,_Size);
  *puVar5 = _Dst;
  uVar2 = *(ushort *)(param_1 + 0x1c + (longlong)param_3 * 8);
  if (uVar6 < (uVar2 & 0x1fff)) {
    uVar6 = uVar2 & 0x1fff;
  }
  *(ushort *)(param_1 + 0x1c + (longlong)param_3 * 8) = (uVar6 ^ uVar2) & 0x1fff ^ uVar2;
  return puVar5;
}



void FUN_1800025e0(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  
  puVar3 = (undefined8 *)*param_1;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)*puVar3;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (ushort *)((longlong)param_1 + 0x1c);
      do {
        uVar2 = *puVar8;
        lVar5 = -1;
        pcVar6 = (char *)*puVar7;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~(ushort)lVar5 - 1;
        if (uVar4 < (uVar2 & 0x1fff)) {
          uVar4 = uVar2 & 0x1fff;
        }
        *puVar8 = (uVar4 ^ uVar2) & 0x1fff ^ uVar2;
        puVar7 = (undefined8 *)puVar7[1];
        puVar8 = puVar8 + 4;
      } while (puVar7 != (undefined8 *)0x0);
    }
    puVar3 = (undefined8 *)puVar3[1];
  } while( true );
}



void FUN_180002670(longlong param_1,undefined8 *param_2,uint param_3,ulonglong param_4)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = (int)param_4;
  if (param_3 != 0) {
    puVar1 = (ushort *)(param_1 + 0x1c);
    do {
      param_4 = CONCAT71((int7)(param_4 >> 8),0x2d);
      FUN_180002b10(param_1,param_2,*puVar1 & 0x1fff,(uint)param_4);
      uVar2 = uVar2 + 1;
      if (uVar2 < *(uint *)(param_1 + 0x18)) {
        param_4 = (longlong)iVar3;
        FUN_180002a60(param_1,param_2,&DAT_180004704,(longlong)iVar3);
      }
      puVar1 = puVar1 + 4;
    } while (uVar2 < param_3);
  }
  FUN_180002a60(param_1,param_2,&DAT_180004708,1);
  return;
}



int FUN_180002710(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  int *piVar13;
  int iVar14;
  
  iVar9 = (int)param_4;
  puVar6 = (undefined8 *)*param_3;
  iVar14 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    piVar13 = (int *)(param_1 + 0x20);
    uVar11 = param_4;
    do {
      pcVar2 = (char *)*puVar6;
      lVar4 = -1;
      pcVar8 = pcVar2;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar5 = (*piVar13 << 0x1d) >> 0x1d;
      iVar3 = ~(uint)lVar4 - 1;
      iVar7 = (*(ushort *)(piVar13 + -1) & 0x1fff) - iVar3;
      iVar10 = iVar9;
      if (iVar5 == 0) {
        uVar11 = (ulonglong)iVar3;
        FUN_180002a60(param_1,param_2,pcVar2,uVar11);
        if (0 < iVar7) {
LAB_180002807:
          FUN_180002b10(param_1,param_2,iVar7,(uint)CONCAT71((int7)(uVar11 >> 8),0x20));
          iVar10 = iVar9;
        }
      }
      else {
        uVar12 = (undefined7)(uVar11 >> 8);
        if (iVar5 == 1) {
          if (0 < iVar7) {
            FUN_180002b10(param_1,param_2,iVar7,(uint)CONCAT71(uVar12,0x20));
          }
          FUN_180002a60(param_1,param_2,pcVar2,(longlong)iVar3);
        }
        else {
          iVar10 = (int)uVar11;
          if (iVar5 == 2) {
            if (0 < iVar7) {
              FUN_180002b10(param_1,param_2,iVar7 / 2,(uint)CONCAT71(uVar12,0x20));
            }
            uVar11 = (ulonglong)iVar3;
            FUN_180002a60(param_1,param_2,pcVar2,uVar11);
            iVar10 = iVar9;
            if (0 < iVar7) {
              iVar7 = iVar7 - iVar7 / 2;
              goto LAB_180002807;
            }
          }
        }
      }
      if (puVar6[1] != 0) {
        FUN_180002a60(param_1,param_2,&DAT_180004704,(longlong)iVar10);
      }
      puVar6 = (undefined8 *)puVar6[1];
      uVar11 = param_4 & 0xffffffff;
      iVar14 = iVar14 + 1;
      piVar13 = piVar13 + 2;
    } while (puVar6 != (undefined8 *)0x0);
  }
  FUN_180002a60(param_1,param_2,&DAT_180004708,1);
  return iVar14;
}



void FUN_180002890(longlong param_1,undefined8 *param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*param_3 != 0)) &&
     (iVar1 = *param_3 + -1, *param_3 = iVar1, iVar1 == 0)) {
    FUN_180002670(param_1,param_2,param_4,(ulonglong)param_5);
    FUN_180002710(param_1,param_2,*(undefined8 **)(param_1 + 0x10),(ulonglong)param_5);
    FUN_180002670(param_1,param_2,param_4,(ulonglong)param_5);
    *param_3 = 0x1e;
  }
  return;
}



void FUN_180002920(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar5 = *(ulonglong *)(param_1 + 0x10158);
  if (uVar5 != 0) {
    if (*(char *)(param_1 + 0x11c) == '\0') {
      if ((FILE *)*param_2 != (FILE *)0x0) {
        uVar5 = 0xffffffffffffffff;
        pcVar8 = *(char **)(param_1 + 0x10148);
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        fwrite(*(char **)(param_1 + 0x10148),~uVar5 - 1,1,(FILE *)*param_2);
      }
    }
    else {
      uVar4 = 0;
      while (uVar4 < uVar5) {
        lVar3 = *(longlong *)(param_1 + 0x10148);
        uVar6 = uVar4;
        while (*(char *)(lVar3 + uVar6) != '\n') {
          uVar6 = uVar6 + 1;
          if (uVar5 <= uVar6) goto LAB_18000297e;
        }
        if (uVar5 <= uVar6) break;
        uVar2 = *(undefined1 *)(lVar3 + 1 + uVar6);
        *(undefined1 *)(lVar3 + 1 + uVar6) = 0;
        pcVar8 = (char *)(uVar4 + *(longlong *)(param_1 + 0x10148));
        if ((FILE *)*param_2 != (FILE *)0x0) {
          uVar4 = 0xffffffffffffffff;
          pcVar7 = pcVar8;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          fwrite(pcVar8,~uVar4 - 1,1,(FILE *)*param_2);
        }
        uVar4 = uVar6 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x10148) + uVar4) = uVar2;
      }
LAB_18000297e:
      if (uVar4 != uVar5) {
        memmove(*(void **)(param_1 + 0x10148),
                (void *)(uVar4 + (longlong)*(void **)(param_1 + 0x10148)),uVar5 - uVar4);
        *(ulonglong *)(param_1 + 0x10158) = uVar5 - uVar4;
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x10158) = 0;
  }
  return;
}



void FUN_180002a60(longlong param_1,undefined8 *param_2,void *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong _Size;
  
  for (; param_4 != 0; param_4 = param_4 - _Size) {
    uVar1 = *(longlong *)(param_1 + 0x10150) - *(longlong *)(param_1 + 0x10158);
    if (uVar1 == 0) {
      FUN_180002920(param_1,param_2);
      uVar1 = *(longlong *)(param_1 + 0x10150) - *(longlong *)(param_1 + 0x10158);
    }
    _Size = param_4;
    if (uVar1 < param_4) {
      _Size = uVar1;
    }
    memcpy((void *)(*(longlong *)(param_1 + 0x10158) + *(longlong *)(param_1 + 0x10148)),param_3,
           _Size);
    *(longlong *)(param_1 + 0x10158) = *(longlong *)(param_1 + 0x10158) + _Size;
    param_3 = (void *)((longlong)param_3 + _Size);
  }
  return;
}



void FUN_180002b10(longlong param_1,undefined8 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  size_t _Size;
  uint uVar2;
  undefined1 local_38 [32];
  undefined1 local_18;
  
  _Size = (size_t)param_3;
  if (param_3 < 0x21) {
    if (0 < (longlong)_Size) {
      memset(local_38,param_4 & 0xff,_Size);
    }
    local_38[_Size] = 0;
    FUN_180002a60(param_1,param_2,local_38,_Size);
    return;
  }
  memset(local_38,param_4 & 0xff,0x20);
  local_18 = 0;
  uVar2 = 0x20;
  do {
    FUN_180002a60(param_1,param_2,local_38,(longlong)(int)uVar2);
    uVar1 = (int)_Size - uVar2;
    _Size = (size_t)uVar1;
    uVar2 = 0x20;
    if ((int)uVar1 < 0x20) {
      uVar2 = uVar1;
    }
  } while (uVar1 != 0);
  return;
}



char * FUN_180002bd0(char *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar5 = 0;
  bVar9 = param_2 < 0;
  uVar8 = 0x20;
  pcVar3 = param_1;
  if (bVar9) {
    param_2 = -param_2;
  }
  do {
    iVar4 = (int)uVar5;
    uVar5 = (ulonglong)(iVar4 + 1);
    uVar8 = uVar8 - 1;
    lVar2 = param_2 / 10;
    *pcVar3 = (char)param_2 + (char)lVar2 * -10 + '0';
    if (lVar2 == 0) break;
    pcVar3 = pcVar3 + 1;
    param_2 = lVar2;
  } while (1 < uVar8);
  if ((bVar9) && (1 < uVar8)) {
    param_1[uVar5] = '-';
    uVar5 = (ulonglong)(iVar4 + 2);
  }
  param_1[uVar5] = '\0';
  uVar7 = uVar5 >> 1;
  if ((int)uVar7 != 0) {
    pcVar3 = param_1;
    pcVar6 = param_1 + (longlong)(int)uVar5 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar6;
      *pcVar6 = cVar1;
      pcVar3 = pcVar3 + 1;
      uVar7 = uVar7 - 1;
      pcVar6 = pcVar6 + -1;
    } while (uVar7 != 0);
  }
  return param_1;
}



bool FUN_180002cac(void)

{
  undefined8 *Ptr;
  
  Ptr = _malloc_crt(0x100);
  DAT_1800078d8 = EncodePointer(Ptr);
  DAT_1800078e0 = DAT_1800078d8;
  if (Ptr != (undefined8 *)0x0) {
    *Ptr = 0;
    FUN_1800031b8();
    atexit(FUN_1800031f0);
    atexit((_func_5014 *)&LAB_1800030e4);
  }
  return Ptr == (undefined8 *)0x0;
}



// Library Function - Single Match
//  _CRT_INIT
// 
// Library: Visual Studio 2010 Release

undefined8 _CRT_INIT(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *_Memory;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong unaff_GS_OFFSET;
  bool bVar12;
  
  bVar1 = false;
  if (param_2 == 0) {
    if (DAT_180006020 < 1) {
      return 0;
    }
    DAT_180006020 = DAT_180006020 + -1;
    lVar8 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_1800078d0 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_1800078d0;
        lVar2 = DAT_1800078d0;
      }
      DAT_1800078d0 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_180002d86;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_180002d86:
    if (DAT_1800078cc == 2) {
      _Memory = DecodePointer(DAT_1800078e0);
      if (_Memory != (longlong *)0x0) {
        plVar6 = DecodePointer(DAT_1800078d8);
        plVar7 = plVar6;
        while (plVar6 = plVar6 + -1, _Memory <= plVar6) {
          if ((*plVar6 != 0) && (lVar8 = _encoded_null(), *plVar6 != lVar8)) {
            pcVar9 = DecodePointer((PVOID)*plVar6);
            lVar8 = _encoded_null();
            *plVar6 = lVar8;
            (*pcVar9)();
            plVar10 = DecodePointer(DAT_1800078e0);
            plVar11 = DecodePointer(DAT_1800078d8);
            if ((_Memory != plVar10) || (plVar7 != plVar11)) {
              plVar6 = plVar11;
              _Memory = plVar10;
              plVar7 = plVar11;
            }
          }
        }
        free(_Memory);
        DAT_1800078d8 = (PVOID)_encoded_null();
        DAT_1800078e0 = DAT_1800078d8;
      }
      DAT_1800078cc = 0;
      if (!bVar1) {
        LOCK();
        DAT_1800078d0 = 0;
        UNLOCK();
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  else if (param_2 == 1) {
    bVar1 = false;
    lVar8 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_1800078d0 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_1800078d0;
        lVar2 = DAT_1800078d0;
      }
      DAT_1800078d0 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_180002eaf;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_180002eaf:
    if (DAT_1800078cc == 0) {
      DAT_1800078cc = 1;
      iVar3 = _initterm_e(&DAT_180004128,&DAT_180004138);
      if (iVar3 != 0) {
        return 0;
      }
      _initterm(&DAT_180004118,&DAT_180004120);
      DAT_1800078cc = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      LOCK();
      DAT_1800078d0 = 0;
      UNLOCK();
    }
    if ((DAT_1800078e8 != (code *)0x0) &&
       (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1800078e8), BVar4 != 0)) {
      (*DAT_1800078e8)(param_1,2,param_3);
    }
    DAT_180006020 = DAT_180006020 + 1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00018000302c)
// WARNING: Removing unreachable block (ram,0x000180002fbf)
// WARNING: Removing unreachable block (ram,0x000180003067)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __DllMainCRTStartup
// 
// Library: Visual Studio 2010 Release

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_180006020 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_180006000 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) &&
       (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_180006000 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_180001000(param_1,param_2);
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_180001000(param_1,0);
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_180006000 = 0xffffffff;
  return uVar2;
}



void entry(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  __DllMainCRTStartup(param_1,param_2,param_3,param_4);
  return;
}



// Library Function - Single Match
//  _onexit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  PVOID pvVar2;
  PVOID local_res10;
  PVOID local_res18 [2];
  
  local_res10 = DecodePointer(DAT_1800078e0);
  if (local_res10 == (PVOID)0xffffffffffffffff) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = DecodePointer(DAT_1800078e0);
    local_res18[0] = DecodePointer(DAT_1800078d8);
    pvVar2 = EncodePointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,&local_res10,local_res18);
    DAT_1800078e0 = EncodePointer(local_res10);
    DAT_1800078d8 = EncodePointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// Library Function - Single Match
//  atexit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



void FUN_1800031b8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180004798; puVar1 < &DAT_180004798; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void FUN_1800031f0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1800047a8; puVar1 < &DAT_1800047a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// Library Function - Single Match
//  _ValidateImageBase
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) ==
                  0x20b);
  }
  return uVar1;
}



// Library Function - Single Match
//  _FindPESection
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  _IsNonwritableInCurrentImage
// 
// Library: Visual Studio 2010 Release

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  uint uVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_180000000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_180000000);
  uVar2 = 0;
  if (BVar1 != 0) {
    p_Var3 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800032f2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800032f8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800032fe. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000330a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_180006008 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_180006008 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_180006008 == 0x2b992ddfa232) {
      DAT_180006008 = 0x2b992ddfa233;
    }
  }
  _DAT_180006010 = ~DAT_180006008;
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001800033ca. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800033d0. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001800033d6. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800033dc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800033e2. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __chkstk
// 
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong unaff_GS_OFFSET;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  puVar2 = *(undefined1 **)(unaff_GS_OFFSET + 0x10);
  if (puVar1 < puVar2) {
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



void FUN_180003450(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180003480(void)

{
  _DAT_180006000 = 0xffffffff;
  return;
}



void FUN_18000349a(void)

{
  _unlock(8);
  return;
}



bool FUN_1800034c0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


