/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGImageRequestSharedState : NSObject {
    <PXDisplayAssetFetchResult> * _displayAssetFetchResult;
    <PXGDisplayAssetRequestObserver> * _observer;
    unsigned long long  _presentationStyles;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssetFetchResult;
@property (nonatomic, readonly) <PXGDisplayAssetRequestObserver> *observer;
@property (nonatomic, readonly) unsigned long long presentationStyles;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)displayAssetFetchResult;
- (id)initWithDisplayAssetFetchResult:(id)arg1 observer:(id)arg2 presentationStyles:(unsigned long long)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 screenScale:(double)arg5;
- (id)observer;
- (unsigned long long)presentationStyles;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })targetSize;

@end
