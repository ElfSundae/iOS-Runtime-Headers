/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFaviconResponse : WBSSiteMetadataResponse {
    bool  _defaultIcon;
    UIImage * _favicon;
}

@property (getter=isDefaultIcon, nonatomic, readonly) bool defaultIcon;
@property (nonatomic, readonly) UIImage *favicon;

+ (id)responseWithURL:(id)arg1 favicon:(id)arg2 isDefaultIcon:(bool)arg3;

- (void).cxx_destruct;
- (id)favicon;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 isDefaultIcon:(bool)arg3;
- (bool)isDefaultIcon;

@end
