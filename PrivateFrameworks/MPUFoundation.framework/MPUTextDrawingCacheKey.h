/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingCacheKey : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    } _allowedSize;
    NSString *_text;
}

@property (nonatomic) struct CGSize { float x1; float x2; } allowedSize;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })allowedSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setAllowedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
