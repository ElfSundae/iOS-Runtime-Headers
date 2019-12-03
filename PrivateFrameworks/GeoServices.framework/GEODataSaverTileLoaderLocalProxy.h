/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (getter=isDataSaverEnabled, nonatomic, readonly) bool dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_debug_initiateDataSaverPreload;
- (void)_removeOldRegionStateFromDisk;
- (id)init;
- (bool)isDataSaverEnabled;

@end
