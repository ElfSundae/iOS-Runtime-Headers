/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConcurrentMutableIndexSet : NSObject {
    NSMutableIndexSet * mMutableIndexSet;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mRWLock;
}

- (void)addIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)removeAllIndexes;

@end
