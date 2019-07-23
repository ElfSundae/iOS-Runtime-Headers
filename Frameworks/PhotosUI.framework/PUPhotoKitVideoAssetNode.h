/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitVideoAssetNode : PXRunNode <PUVideoAssetNode> {
    PHAsset * _asset;
    int  _requestID;
    int  _version;
    AVAsset * _videoAsset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (getter=isCanceled, readonly) BOOL canceled;
@property (getter=isComplete, readonly) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isRunning, readonly) BOOL running;
@property (readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int version;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (getter=isWaiting, readonly) BOOL waiting;

- (void).cxx_destruct;
- (void)_handleDidLoadVideo:(id)arg1 info:(id)arg2;
- (id)asset;
- (id)initWithAsset:(id)arg1 version:(int)arg2;
- (void)run;
- (int)version;
- (id)videoAsset;

@end
