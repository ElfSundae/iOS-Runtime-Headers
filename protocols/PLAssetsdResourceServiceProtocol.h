/* Generated by RuntimeBrowser.
 */

@protocol PLAssetsdResourceServiceProtocol <PLAssetsdResourceWriteOnlyServiceProtocol>

@required

- (void)addAssetGroupWithName:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, void*
- (void)addAssetWithURL:(void *)arg1 toAlbum:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)asynchronousAdjustmentDataForAsset:(void *)arg1 networkAccessAllowed:(void *)arg2 withDataBlob:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 15: NSURL *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, long long, bool, PLXPCFileDescriptor *, PLXPCFileDescriptor *, NSError *, void*
- (void)asynchronousVideoURLForAsset:(void *)arg1 format:(void *)arg2 intent:(void *)arg3 networkAccessAllowed:(void *)arg4 streamingAllowed:(void *)arg5 trackCPLDownload:(void *)arg6 restrictToPlayable:(void *)arg7 reply:(void *)arg8; // needs 8 arg types, found 19: NSURL *, unsigned short, unsigned long long, bool, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, unsigned short, NSString *, bool, NSString *, NSString *, NSError *, void*
- (NSProgress *)consolidateAssets:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)downloadCloudSharedAsset:(void *)arg1 wantedPlaceholderkind:(void *)arg2 shouldPrioritize:(void *)arg3 shouldExtendTimer:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 12: NSURL *, short, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSError *, void*
- (void)estimatedFileLengthOfVideo:(void *)arg1 fallbackFilePath:(void *)arg2 exportPreset:(void *)arg3 exportProperties:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSURL *, NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)fileDescriptorForPersistentURL:(void *)arg1 withAdjustments:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 11: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PLXPCFileDescriptor *, NSString *, NSError *, void*
- (void)filePathForPersistentURL:(void *)arg1 withAdjustments:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSError *, void*
- (void)generateOnDemandResourcesForAsset:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getSandboxExtensionForAssetResourcePath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)getSandboxExtensionForFileSystemBookmark:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSString *, NSError *, void*
- (void)imageDataForAssetWithObjectURI:(void *)arg1 formatID:(void *)arg2 allowPlaceholder:(void *)arg3 wantURLOnly:(void *)arg4 networkAccessAllowed:(void *)arg5 trackCPLDownload:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 22: NSURL *, unsigned short, bool, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PLXPCGenericObject *, NSNumber *, long long, bool, NSURL *, NSString *, NSString *, long long, NSString *, NSString *, NSError *, void*
- (void)updateInternalResourcePath:(void *)arg1 objectURI:(void *)arg2 sandboxExtension:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
