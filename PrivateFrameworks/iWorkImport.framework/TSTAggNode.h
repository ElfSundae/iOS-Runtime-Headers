/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTAggNode : NSObject {
    TSTAccumulator * _accumulator;
    TSTAggregator * _aggregator;
    NSMutableArray * _children;
    struct TSUCellCoord { 
        unsigned int row; 
        unsigned short column; 
        bool _preserveRow; 
        bool _preserveColumn; 
    }  _formulaCoord;
    unsigned char  _groupLevel;
    TSTGroupNode * _groupNode;
}

@property (nonatomic, retain) TSTAccumulator *accumulator;
@property (nonatomic, readonly) TSTAggregator *aggregator;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, readonly) struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; } formulaCoord;
@property (nonatomic, readonly) unsigned char groupLevel;
@property (nonatomic) TSTGroupNode *groupNode;

- (void).cxx_destruct;
- (id)accumulator;
- (void)addChild:(id)arg1;
- (id)aggregator;
- (id)children;
- (void)clearAggFormulas:(id)arg1 inOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)description;
- (id)descriptionWithCategoryOwner:(id)arg1;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_AggNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CellCoordinateArchive {} *x5; struct AccumulatorArchive {} *x6; struct RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_AggNodeArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (void)enumerateDirectChildren:(id /* block */)arg1;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })formulaCoord;
- (unsigned char)groupLevel;
- (id)groupNode;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_AggNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CellCoordinateArchive {} *x5; struct AccumulatorArchive {} *x6; struct RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_AggNodeArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1 aggregator:(id)arg2;
- (id)initWithFormulaCoord:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1 groupNode:(id)arg2 aggregator:(id)arg3;
- (void)setAccumulator:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setGroupNode:(id)arg1;

@end
