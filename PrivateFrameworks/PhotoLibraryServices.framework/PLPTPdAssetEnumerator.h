/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {
    NSArray * _assetObjectIDs;
    <PLPTPConversionSupport> * _conversionSupport;
    PLManagedObjectContext * _managedObjectContext;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3;

- (void).cxx_destruct;
- (id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg1;
- (bool)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateDictionariesUsingBlock:(id /* block */)arg1;
- (void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)getPTPdInfo:(id*)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3;
- (id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3;

@end
