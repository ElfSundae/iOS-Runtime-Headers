/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLBundleAssetResolver : NSObject <MDLAssetResolver> {
    NSBundle * _bundle;
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canResolveAssetNamed:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)path;
- (id)resolveAssetNamed:(id)arg1;
- (void)setPath:(id)arg1;

@end
