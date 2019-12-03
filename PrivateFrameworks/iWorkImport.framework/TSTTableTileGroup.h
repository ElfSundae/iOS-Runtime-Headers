/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableTileGroup : NSObject {
    TSPLazyReference * _references;
    unsigned long long  _startingTileID;
    TSTTableTile * _tiles;
}

@property (nonatomic) unsigned long long startingTileID;

+ (id)groupWithStartingTileID:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_tileForLazyReference:(id)arg1;
- (void)enumerateReferencesWithBlock:(id /* block */)arg1;
- (void)enumerateTilesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithStartingTileID:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setReference:(id)arg1 forTileID:(unsigned long long)arg2;
- (void)setStartingTileID:(unsigned long long)arg1;
- (unsigned long long)startingTileID;

@end