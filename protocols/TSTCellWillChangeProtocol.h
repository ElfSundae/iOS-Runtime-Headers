/* Generated by RuntimeBrowser.
 */

@protocol TSTCellWillChangeProtocol

@required

- (void)willApplyBaseCellMap:(TSTCellMap *)arg1;
- (void)willApplyCell:(TSTCell *)arg1 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg2;
- (void)willApplyConcurrentCellMap:(TSTConcurrentCellMap *)arg1;
- (void)willRemoveRows:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;

@end
