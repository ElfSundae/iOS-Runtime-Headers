/* Generated by RuntimeBrowser.
 */

@protocol PXMutableMomentShareStatus <NSObject>

@required

- (<PXDisplayAssetFetchResult> *)allAssetsFetchResult;
- (<PXDisplayAssetFetchResult> *)copiedAssetsFetchResult;
- (<PXDisplayAssetFetchResult> *)downloadingAssetsFetchResult;
- (<PXDisplayMomentShare> *)momentShare;
- (<PXSectionedFetchResult> *)participantsFetchResult;
- (void)setAllAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg1;
- (void)setCopiedAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg1;
- (void)setDownloadingAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg1;
- (void)setMomentShare:(id <PXDisplayMomentShare>)arg1;
- (void)setParticipantsFetchResult:(id <PXSectionedFetchResult>)arg1;

@end