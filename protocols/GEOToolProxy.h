/* Generated by RuntimeBrowser.
 */

@protocol GEOToolProxy

@required

- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (id)getDefault:(NSString *)arg1 source:(long long*)arg2;
- (void)invalidateTileCache;
- (void)lockDBs;
- (bool)notifyNetworkDefaultsChanged;
- (NSString *)ping;
- (void)unlockDBs;

@end
