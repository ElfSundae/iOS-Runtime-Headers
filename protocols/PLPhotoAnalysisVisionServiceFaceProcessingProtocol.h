/* Generated by RuntimeBrowser.
 */

@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol

@required

- (void)faceClusteringInformation:(void *)arg1 withContext:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)faceProcessingStatusForUserInterfaceWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)performFaceProcessingOnSRGBImageData:(void *)arg1 width:(void *)arg2 height:(void *)arg3 bytesPerRow:(void *)arg4 bitmapInfo:(void *)arg5 context:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: NSData *, unsigned long, unsigned long, unsigned long, unsigned int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)reclusterFacesWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)renderFaceTilesForFaceLocalIdentifiers:(void *)arg1 inAssetWithLocalIdentifier:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)resetFaceClusteringStateWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)suggestFacesForFacesWithLocalIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestFacesForPersonWithLocalIdentifier:(void *)arg1 toBeConfirmedFaceSuggestions:(void *)arg2 toBeRejectedFaceSuggestions:(void *)arg3 context:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSArray *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestPersonForFaceWithLocalIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
