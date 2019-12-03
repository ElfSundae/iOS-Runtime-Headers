/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
    bool  mIsLayered;
    NSMutableDictionary * mNodeInfoMap;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForNode:(id)arg1;
- (void)copyInfoForNode:(id)arg1 depth:(int)arg2;
- (id)infoForNode:(id)arg1;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; struct __compressed_pair<ODIHRange *, ChAllocator<ODIHRange> > { struct ODIHRange {} *x_3_1_1; } x3; }*)arg1;
- (void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; struct __compressed_pair<ODIHRange *, ChAllocator<ODIHRange> > { struct ODIHRange {} *x_3_1_1; } x3; }*)mapRangesForNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(unsigned long long)arg4;
- (void)setUpLayers;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;

@end
