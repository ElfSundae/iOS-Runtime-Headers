/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegionIdentifier : NSObject {
    BOOL _hasFractionalPageSizes;
    NSMapTable *_mallocZoneStatisticsMap;
    NSMutableArray *_regions;
}

- (void)dealloc;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned int)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned int)arg2;
- (id)descriptionForRegionTotalsWithOptions:(unsigned int)arg1;
- (id)descriptionForRegionTotalsWithOptions:(unsigned int)arg1 memorySizeDivisor:(unsigned int)arg2;
- (BOOL)hasFractionalPageSizes;
- (id)init;
- (id)initWithGraph:(id)arg1 options:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1 pid:(int)arg2 options:(unsigned int)arg3;
- (id)regions;

@end
