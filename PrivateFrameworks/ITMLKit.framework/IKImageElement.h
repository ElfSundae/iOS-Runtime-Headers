/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKImageElement : IKViewElement {
    NSURL * _defaultURL;
    unsigned int  _imageType;
    float  _srcHeight;
    float  _srcWidth;
    NSDictionary * _srcset;
}

@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, retain) NSURL *defaultURL;
@property (nonatomic, readonly) int fill;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) unsigned int imageType;
@property (nonatomic, readonly, retain) NSURL *placeholderURL;
@property (nonatomic, readonly) unsigned int position;
@property (nonatomic, readonly) int reflect;
@property (nonatomic, readonly, retain) NSDictionary *srcset;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) float width;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (unsigned int)_imageTypeForTagName:(id)arg1;
- (id)borderColor;
- (id)defaultURL;
- (int)fill;
- (float)height;
- (unsigned int)imageType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)placeholderURL;
- (unsigned int)position;
- (int)reflect;
- (void)setDefaultURL:(id)arg1;
- (id)srcset;
- (id)url;
- (float)width;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

- (int)accessoryType;
- (id)artworkCatalog;
- (id)bestURL;
- (id)cachePath;
- (id)resourceImage;

@end
