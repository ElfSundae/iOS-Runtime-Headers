/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageKey : NSObject {
    NSString * _basename;
    NSString * _cacheKey;
    NSString * _filePath;
    NSString * _imageID;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
}

@property (nonatomic, retain) NSString *basename;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, retain) NSString *imageID;
@property (nonatomic) struct CGSize { float x1; float x2; } size;

+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;

- (id)basename;
- (id)cacheKey;
- (void)dealloc;
- (id)filePath;
- (id)imageID;
- (void)setBasename:(id)arg1;
- (void)setImageID:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end
