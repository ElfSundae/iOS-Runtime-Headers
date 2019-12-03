/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTDurationNode : TSTExpressionNode {
    bool  _blank;
    struct TSTDurationWrapper { 
        double timeInterval; 
        struct { 
            unsigned int mUseAutomaticUnits : 1; 
            int mDurationUnitSmallest; 
            int mDurationUnitLargest; 
            int mDurationStyle; 
        } durationFormat; 
    }  _value;
}

@property (getter=isBlank, nonatomic) bool blank;
@property (nonatomic) struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; } value;

- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; bool x5; }*)arg1 hostCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 symbolTable:(struct TSCESymbolTable { id x1; unsigned int x2; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)arg3;
- (id)date;
- (id)description;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })durationWrapper;
- (id)exportString;
- (id)format;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 asBlank:(bool)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 duration:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2;
- (bool)isBlank;
- (bool)isEqualToExpressionNode:(id)arg1;
- (void)loadFromArchive:(const struct DurationNodeArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ExpressionNodeArchive {} *x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSTCSENodeData { unsigned long long x1; unsigned long long x2; })recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct DurationNodeArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ExpressionNodeArchive {} *x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBlank:(bool)arg1;
- (void)setValue:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg1;
- (id)string;
- (int)tokenType;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })value;

@end
