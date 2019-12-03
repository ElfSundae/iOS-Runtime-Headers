/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedDataSource : PXSectionedDataSource {
    NSArray * _relatedEntries;
    bool  _transient;
    bool  _useItemIndexPaths;
}

@property (nonatomic, readonly, copy) NSArray *relatedEntries;
@property (getter=isTransient, nonatomic, readonly) bool transient;
@property (nonatomic, readonly) bool useItemIndexPaths;

- (void).cxx_destruct;
- (id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForRelatedEntry:(id)arg1;
- (id)init;
- (id)initWithRelatedEntries:(id)arg1 isTransient:(bool)arg2 useItemIndexPaths:(bool)arg3;
- (bool)isTransient;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)relatedEntries;
- (id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)useItemIndexPaths;

@end
