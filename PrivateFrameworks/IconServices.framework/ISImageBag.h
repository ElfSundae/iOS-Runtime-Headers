/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISImageBag : NSObject <ISScalableCompositorResource> {
    NSMutableDictionary * _imagesByScale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *images;
@property (retain) NSMutableDictionary *imagesByScale;
@property struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) Class superclass;

+ (id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)images;
- (id)imagesByScale;
- (id)imagesForScale:(double)arg1;
- (id)init;
- (id)initWithImages:(id)arg1;
- (void)insertImage:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setImagesByScale:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
