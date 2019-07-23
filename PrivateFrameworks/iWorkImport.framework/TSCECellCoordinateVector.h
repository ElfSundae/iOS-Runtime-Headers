/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellCoordinateVector : NSObject {
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { 
        struct TSUCellCoord {} *__begin_; 
        struct TSUCellCoord {} *__end_; 
        struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { 
            struct TSUCellCoord {} *__first_; 
        } __end_cap_; 
    }  mCellCoordinates;
    NSObject<OS_dispatch_semaphore> * mSem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x1; struct TSUCellCoord {} *x2; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x_3_1_1; } x3; }*)cellCoordinates;
- (struct unordered_set<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct __hash_table<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct unique_ptr<std::__1::__hash_node<TSUCellCoord, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSUCellCoord, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> *> > > { struct __hash_node<TSUCellCoord, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> { struct __hash_node<TSUCellCoord, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::hash<TSUCellCoord> > { unsigned long x_3_2_1; } x_1_1_3; } x1; })cellCoordinatesSet;
- (void)dealloc;
- (id)init;
- (id)initWithArchive:(const struct CellCoordinateVectorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::CellCoordinateArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (void)removeAllCellCoordinates;
- (void)saveToArchive:(struct CellCoordinateVectorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::CellCoordinateArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;

@end
