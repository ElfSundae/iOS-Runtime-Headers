/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionCacheReader : ATXActionCacheClientReader {
    NSString * _abGroup;
    struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > > { 
        struct __hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _actionToIndexMap;
    long long  _assetVersion;
    struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { 
        struct ATXPredictionItem {} *__begin_; 
        struct ATXPredictionItem {} *__end_; 
        struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { 
            struct ATXPredictionItem {} *__value_; 
        } __end_cap_; 
    }  _extraPredictionItems;
    struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { 
        struct ATXPredictionItem {} *__begin_; 
        struct ATXPredictionItem {} *__end_; 
        struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { 
            struct ATXPredictionItem {} *__value_; 
        } __end_cap_; 
    }  _predictionItems;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) long long assetVersion;

+ (void)_getActionKeyToPredictionItemMapFromChunk:(id)arg1 map:(struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem> > > { struct __hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg2 abGroup:(id*)arg3 assetVersion:(long long*)arg4;
+ (void)_getExtraPredictionsFromChunk:(id)arg1 map:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x_3_1_1; } x3; }*)arg2 abGroup:(id*)arg3 assetVersion:(long long*)arg4;
+ (void)_getIndexToPredictionItemMapWithChunk:(id)arg1 withPredictionCount:(long long)arg2 map:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x_3_1_1; } x3; }*)arg3 abGroup:(id*)arg4 assetVersion:(long long*)arg5;
+ (struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem> > > { struct __hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })getActionKeyToPredictionItemMapFromChunk:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > > { struct __hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })_getActionToIndexMap;
- (id)abGroup;
- (long long)assetVersion;
- (void)enumerateExtraPredictionItemsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithChunks:(id)arg1;
- (id)initWithData:(id)arg1;
- (struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; })predictionItemForAction:(id)arg1;

@end
