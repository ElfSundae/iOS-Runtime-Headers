/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

@interface _BCUCoverEffectsSeriesStack : NSObject <BCUSeriesCoverEffectsFilter> {
    NSString * _identifier;
    BCULayerRenderer * _renderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BCULayerRenderer *renderer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stackLayerWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5 path:(const struct CGPath {}**)arg6;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2;
- (id)newOperationWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 completion:(id /* block */)arg5;
- (id)renderer;

@end
