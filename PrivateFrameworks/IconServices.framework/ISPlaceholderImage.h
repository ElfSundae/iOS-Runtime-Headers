/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISPlaceholderImage : ISImage {
    ISImage * _image;
}

@property (readonly) ISImage *image;

- (void).cxx_destruct;
- (struct CGImage { }*)cgImage;
- (id)image;
- (id)initWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)placeholder;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
