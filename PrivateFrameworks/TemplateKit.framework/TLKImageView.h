/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImageView : UIImageView <TLKObservable> {
    TLKImageFittingObject * _imageFittingObject;
    TLKObserver * _imageObserver;
    unsigned long long  _style;
    TLKImage * _tlkImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TLKImageFittingObject *imageFittingObject;
@property (retain) TLKObserver *imageObserver;
@property unsigned long long style;
@property (readonly) Class superclass;
@property (retain) TLKImage *tlkImage;

- (void).cxx_destruct;
- (void)dealloc;
- (id)imageFittingObject;
- (id)imageObserver;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (id)observableProperties;
- (void)setImageFittingObject:(id)arg1;
- (void)setImageObserver:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTlkImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)tlkImage;
- (void)updateImageView;

@end
