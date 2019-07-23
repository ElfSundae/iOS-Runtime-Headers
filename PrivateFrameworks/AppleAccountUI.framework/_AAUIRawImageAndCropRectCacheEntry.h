/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface _AAUIRawImageAndCropRectCacheEntry : NSObject {
    NSDate * _expirationDate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _rawCropRect;
    UIImage * _rawImage;
    NSString * _serverCacheTag;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rawCropRect;
@property (nonatomic, readonly) UIImage *rawImage;
@property (nonatomic, readonly) NSString *serverCacheTag;

+ (id)entryWithRawImage:(id)arg1 rawCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 serverCacheTag:(id)arg3;

- (void).cxx_destruct;
- (id)expirationDate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rawCropRect;
- (id)rawImage;
- (id)serverCacheTag;
- (BOOL)valid;

@end
