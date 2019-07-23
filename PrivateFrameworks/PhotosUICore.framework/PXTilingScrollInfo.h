/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingScrollInfo : NSObject <NSCopying> {
    unsigned int  _axis;
    struct CGSize { 
        float width; 
        float height; 
    }  _interpageSpacing;
    BOOL  _pagingEnabled;
    struct CGPoint { 
        float x; 
        float y; 
    }  _pagingOrigin;
}

@property (nonatomic) unsigned int axis;
@property (nonatomic) struct CGSize { float x1; float x2; } interpageSpacing;
@property (getter=isPagingEnabled, nonatomic) BOOL pagingEnabled;
@property (nonatomic) struct CGPoint { float x1; float x2; } pagingOrigin;

- (unsigned int)axis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (struct CGSize { float x1; float x2; })interpageSpacing;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPagingEnabled;
- (struct CGPoint { float x1; float x2; })pagingOrigin;
- (void)setAxis:(unsigned int)arg1;
- (void)setInterpageSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setPagingEnabled:(BOOL)arg1;
- (void)setPagingOrigin:(struct CGPoint { float x1; float x2; })arg1;

@end