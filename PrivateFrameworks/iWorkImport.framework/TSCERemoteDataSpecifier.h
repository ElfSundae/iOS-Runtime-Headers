/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataSpecifier : NSObject <NSCopying> {
    long long  _attribute;
    NSDate * _date;
    int  _functionIndex;
    unsigned long long  _hashVal;
    NSString * _symbol;
    long long  _year;
}

@property (nonatomic, readonly) long long attribute;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) int functionIndex;
@property (nonatomic, readonly) NSString *functionName;
@property (nonatomic, readonly) unsigned long long hashVal;
@property (nonatomic, readonly) struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; } invalidAttributeErrorValue;
@property (nonatomic, readonly) struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; } invalidSymbolErrorValue;
@property (nonatomic, readonly) bool isCold;
@property (nonatomic, readonly) bool isCurrency;
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) long long year;

+ (id)specifierFromArchive:(const struct RemoteDataSpecifierArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; unsigned int x6; unsigned int x7; double x8; }*)arg1;
+ (id)specifierWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;

- (void).cxx_destruct;
- (long long)attribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeToArchive:(struct RemoteDataSpecifierArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; unsigned int x6; unsigned int x7; double x8; }*)arg1;
- (int)functionIndex;
- (id)functionName;
- (unsigned long long)hash;
- (unsigned long long)hashVal;
- (id)initFromArchive:(const struct RemoteDataSpecifierArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; unsigned int x6; unsigned int x7; double x8; }*)arg1;
- (id)initWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;
- (struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; })invalidAttributeErrorValue;
- (struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; })invalidSymbolErrorValue;
- (bool)isCold;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (id)symbol;
- (long long)year;

@end
