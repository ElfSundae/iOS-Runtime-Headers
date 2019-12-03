/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMManagedArray : RLMArray <RLMFastEnumerable, RLMThreadConfined_Private> {
    struct List { 
        struct shared_ptr<realm::Realm> { 
            struct Realm {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_realm; 
        struct ObjectSchema {} *m_object_schema; 
        struct shared_ptr<realm::LinkView> { 
            struct LinkView {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_link_view; 
        struct BasicTableRef<realm::Table> { 
            struct Table {} *m_ptr; 
        } m_table; 
        struct Handle<realm::_impl::CollectionNotifier> { 
            struct CollectionNotifier {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_notifier; 
    }  _backingList;
    struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; } * _objectInfo;
    struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo> > { 
        struct __compressed_pair<RLMObservationInfo *, std::__1::default_delete<RLMObservationInfo> > { 
            struct RLMObservationInfo {} *__value_; 
        } __ptr_; 
    }  _observationInfo;
    struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; } * _ownerInfo;
    RLMRealm * _realm;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; /* Warning: unhandled struct encoding: '{vector<RLMObservationInfo *' */ struct x4; }*objectInfo; /* unknown property attribute:  std::__1::allocator<RLMClassInfo *> >=^^{RLMClassInfo}}}} */
@property (nonatomic, readonly) id objectiveCMetadata;
@property (nonatomic, readonly) RLMRealm *realm;
@property (readonly) Class superclass;

+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })arg1 metadata:(id)arg2 realm:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addNotificationBlock:(id /* block */)arg1;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)averageOfProperty:(id)arg1;
- (unsigned long long)columnForProperty:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)deleteObjectsFromRealm;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (id)fastEnumerator;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (id)initWithList:(struct List { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct shared_ptr<realm::LinkView> { struct LinkView {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct BasicTableRef<realm::Table> { struct Table {} *x_4_1_1; } x4; struct Handle<realm::_impl::CollectionNotifier> { struct CollectionNotifier {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; })arg1 realm:(id)arg2 parentInfo:(struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; }*)arg3 property:(id)arg4;
- (id)initWithParent:(id)arg1 property:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (bool)isBackedByList:(const struct List { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct shared_ptr<realm::LinkView> { struct LinkView {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct BasicTableRef<realm::Table> { struct Table {} *x_4_1_1; } x4; struct Handle<realm::_impl::CollectionNotifier> { struct CollectionNotifier {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInvalidated;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })makeThreadSafeReference;
- (id)maxOfProperty:(id)arg1;
- (id)minOfProperty:(id)arg1;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; }*)objectInfo;
- (id)objectiveCMetadata;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsWithPredicate:(id)arg1;
- (id)realm;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)sumOfProperty:(id)arg1;
- (struct TableView { int (**x1)(); struct Column<long long> { int (**x_2_1_1)(); unsigned long long x_2_1_2; struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex> > { struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex> > { struct StringIndex {} *x_1_3_1; } x_3_2_1; } x_2_1_3; struct BpTree<long long> { struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array> > { struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array> > { struct Array {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_2_1_4; } x2; unsigned long long x3; unsigned long long x4; struct BasicTableRef<realm::Table> { struct Table {} *x_5_1_1; } x5; struct BacklinkColumn {} *x6; struct BasicRow<const realm::Table> { struct BasicTableRef<realm::Table> { struct Table {} *x_1_2_1; } x_7_1_1; unsigned long long x_7_1_2; struct RowBase {} *x_7_1_3; struct RowBase {} *x_7_1_4; } x7; struct shared_ptr<const realm::LinkView> { struct LinkView {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; })tableView;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
