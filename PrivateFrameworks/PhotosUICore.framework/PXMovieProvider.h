/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMovieProvider : NSObject {
    PHAssetCollection * _assetCollection;
    <PXMovieProviderDelegate> * _delegate;
    PHAsset * _keyAsset;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) BOOL canPlayMovie;
@property (nonatomic) <PXMovieProviderDelegate> *delegate;
@property (nonatomic, readonly) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) UIViewController *movieViewController;

- (void).cxx_destruct;
- (id)assetCollection;
- (BOOL)canPlayMovie;
- (id)delegate;
- (id)diagnosticsItemProvider;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)keyAsset;
- (id)movieViewController;
- (void)setDelegate:(id)arg1;

@end
