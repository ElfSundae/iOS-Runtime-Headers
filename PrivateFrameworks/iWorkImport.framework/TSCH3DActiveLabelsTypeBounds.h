/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DActiveLabelsTypeBounds : NSObject {
    NSMutableIndexSet * _activeIndices;
    NSNumber * _activeType;
    NSMutableDictionary * _map;
}

@property (nonatomic, readonly, retain) NSIndexSet *activeIndices;
@property (nonatomic, readonly, copy) NSNumber *activeType;

- (id)active;
- (id)activeIndices;
- (id)activeType;
- (void)addBounds:(id)arg1;
- (id)arrayAtIndex:(long long)arg1;
- (void)dealloc;
- (bool)hasAnyCachedBoundsAtIndices:(id)arg1;
- (bool)hasCachedBoundsAtIndex:(unsigned long long)arg1;
- (id)init;
- (bool)resetIndex:(long long)arg1;
- (bool)setActiveType:(long long)arg1;

@end
