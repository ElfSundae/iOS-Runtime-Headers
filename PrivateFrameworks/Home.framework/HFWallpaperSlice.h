/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperSlice : NSObject <NSCopying> {
    NSString * _identifier;
    UIImage * _image;
    int  _type;
    int  _variant;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int variant;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)image;
- (id)initWithType:(int)arg1 variant:(int)arg2 identifier:(id)arg3 image:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSlicedFromWallpaper:(id)arg1;
- (int)type;
- (int)variant;

@end
