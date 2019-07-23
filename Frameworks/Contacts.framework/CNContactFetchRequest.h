/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactFetchRequest : NSObject {
    NSArray *_keysToFetch;
    BOOL _mutableObjects;
    BOOL _onlyMainStore;
    NSPredicate *_predicate;
    int _sortOrder;
    BOOL _unifyResults;
    BOOL rankSort;
}

@property (nonatomic, copy) NSArray *keysToFetch;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL onlyMainStore;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic) BOOL rankSort;
@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL unifyResults;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)effectiveKeysToFetch;
- (void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2;
- (id)init;
- (id)initWithKeysToFetch:(id)arg1;
- (id)keysToFetch;
- (BOOL)mutableObjects;
- (BOOL)onlyMainStore;
- (id)predicate;
- (BOOL)rankSort;
- (void)setKeysToFetch:(id)arg1;
- (void)setMutableObjects:(BOOL)arg1;
- (void)setOnlyMainStore:(BOOL)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRankSort:(BOOL)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setUnifyResults:(BOOL)arg1;
- (int)sortOrder;
- (BOOL)unifyResults;

@end
