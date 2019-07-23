/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUITextField : SearchUISearchField {
    long long  _activeInterfaceOrientation;
    SPUIHeaderBlurView * _blurView;
    UIImage * _clearButtonImage;
    bool  _ignoreRepresentedObjectUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIButton * _microphoneButton;
    NSArray * _suggestions;
    UIView * _tintView;
}

@property long long activeInterfaceOrientation;
@property (retain) SPUIHeaderBlurView *blurView;
@property (retain) UIImage *clearButtonImage;
@property bool ignoreRepresentedObjectUpdate;
@property struct CGSize { double x1; double x2; } imageSize;
@property (retain) UIButton *microphoneButton;
@property (readonly) SPSearchEntity *searchEntity;
@property (retain) NSArray *suggestions;
@property (retain) UIView *tintView;

+ (Class)_backgroundViewClass;

- (void).cxx_destruct;
- (id)_textWithRepresentedObjects:(id)arg1;
- (long long)activeInterfaceOrientation;
- (id)blurView;
- (id)clearButtonImage;
- (bool)ignoreRepresentedObjectUpdate;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)microphoneButton;
- (bool)needsLandscapeHeight;
- (id)searchEntity;
- (void)setActiveInterfaceOrientation:(long long)arg1;
- (void)setBlurView:(id)arg1;
- (void)setClearButtonImage:(id)arg1;
- (void)setIgnoreRepresentedObjectUpdate:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMicrophoneButton:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTintView:(id)arg1;
- (id)suggestions;
- (id)text;
- (id)textFromMarkedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 markedTextReplacement:(id)arg2;
- (id)tintView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentSizeCategory;
- (void)updateRepresentedObjects:(id)arg1;
- (void)updateWithColor:(id)arg1;

@end
