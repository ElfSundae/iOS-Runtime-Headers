/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKSelectionPath : NSObject {
    NSArray *mCurrentSelection;
}

@property (nonatomic, readonly) BOOL isEditingTableCell;
@property (nonatomic, readonly) BOOL isEditingTableName;
@property (nonatomic, readonly) BOOL selectsMultipleTables;

+ (id)selectionPathWithSelectionArray:(id)arg1;

- (id)cellSelection;
- (id)containedCellTextEditingSelection;
- (id)controlCellSelection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(id /* block */)arg1;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(id /* block */)arg1;
- (id)formulaSelection;
- (unsigned int)hash;
- (unsigned int)indexForSelection:(id)arg1;
- (id)initWithArchive:(const struct SelectionPathArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithSelectionArray:(id)arg1;
- (BOOL)isEditingTableCell;
- (BOOL)isEditingTableName;
- (BOOL)isEqual:(id)arg1;
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;
- (id)mostSpecificSelectionOfClass:(Class)arg1;
- (id)orderedSelections;
- (void)saveToArchive:(struct SelectionPathArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)selectionAtIndex:(unsigned int)arg1;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;
- (id)selectionPathByFixingUpControlCellSelection;
- (id)selectionPathPoppingOffSelection:(id)arg1;
- (id)selectionPathPoppingToSelection:(id)arg1;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;
- (id)selectionPathWithAppendedSelection:(id)arg1;
- (id)selectionPathWithAppendedSelections:(id)arg1;
- (id)selectionPathWithTableTextEditingSelectionRemoved;
- (BOOL)selectsMultipleTables;
- (id)singleSelectedTableInfo;
- (id)strokeSelection;
- (id)tableNameSelection;
- (id)tableNameTextEditingSelection;

@end
