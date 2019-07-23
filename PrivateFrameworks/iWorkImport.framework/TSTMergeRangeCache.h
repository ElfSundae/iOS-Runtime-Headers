/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRangeCache : NSObject {
    NSMutableIndexSet * _mergeIndexes;
    TSTMergeOwner * _mergeOwner;
    struct unordered_map<unsigned int, TSUCellRect, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TSUCellRect> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, TSUCellRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, TSUCellRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, TSUCellRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, TSUCellRect> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSUCellRect>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, TSUCellRect>, std::__1::hash<unsigned int>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, TSUCellRect>, std::__1::equal_to<unsigned int>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _mergeRanges;
    struct TSCEBitGrid { 
        struct vector<TSCEBitGridTile *, std::__1::allocator<TSCEBitGridTile *> > { 
            struct TSCEBitGridTile {} **__begin_; 
            struct TSCEBitGridTile {} **__end_; 
            struct __compressed_pair<TSCEBitGridTile **, std::__1::allocator<TSCEBitGridTile *> > { 
                struct TSCEBitGridTile {} **__first_; 
            } __end_cap_; 
        } _tiles; 
        unsigned int _count; 
        unsigned long _lastTileFoundAtIndex; 
    }  _mergedAtCellIds;
    struct TSCEBitGridTransaction { struct TSCEBitGrid {} *x1; struct vector<std::__1::pair<_NSRange, _NSRange>, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_2_1_1; struct pair<_NSRange, _NSRange> {} *x_2_1_2; struct __compressed_pair<std::__1::pair<_NSRange, _NSRange> *, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_3_2_1; } x_2_1_3; } x2; struct vector<std::__1::pair<_NSRange, _NSRange>, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_3_1_1; struct pair<_NSRange, _NSRange> {} *x_3_1_2; struct __compressed_pair<std::__1::pair<_NSRange, _NSRange> *, std::__1::allocator<std::__1::pair<_NSRange, _NSRange> > > { struct pair<_NSRange, _NSRange> {} *x_3_2_1; } x_3_1_3; } x3; } * _transaction;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) NSIndexSet *mergeIndexes;
@property (nonatomic, readonly) TSTMergeOwner *mergeOwner;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)commitRewritingTransaction;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)enumerateCacheItemsIntersectingCellRegion:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateCacheItemsIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateCacheItemsUsingBlock:(id /* block */)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToCoverMergedCells:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)initWithMergeOwner:(id)arg1;
- (id)mergeIndexes;
- (id)mergeOwner;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergeRangeAtIndex:(unsigned int)arg1;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRanges;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesIntersectingCellRegion:(id)arg1;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)mergedGridIndicesForDimension:(int)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRangeForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)openRewritingTransaction;
- (void)p_updateGridForReplacingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 withRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (BOOL)partiallyIntersectsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)partiallyIntersectsCellRegion:(id)arg1;
- (void)removeMergeRangeAtIndex:(unsigned int)arg1;
- (void)setMerge:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 atIndex:(unsigned int)arg2;

@end
