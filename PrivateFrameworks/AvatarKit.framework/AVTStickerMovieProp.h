/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTStickerMovieProp : AVTStickerProp {
    NSMutableArray * _loadingNodes;
    AVPlayerItem * _moviePlayerItem;
    NSURL * _movieURL;
}

@property (nonatomic, retain) NSMutableArray *loadingNodes;
@property (nonatomic, retain) AVPlayerItem *moviePlayerItem;
@property (nonatomic, readonly) NSURL *movieURL;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(struct SCNVector3 { float x1; float x2; float x3; })arg3 position:(struct SCNVector3 { float x1; float x2; float x3; })arg4 renderLast:(bool)arg5 orientToCamera:(bool)arg6 rotation:(struct SCNVector3 { float x1; float x2; float x3; })arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;
- (id)loadingNodes;
- (id)moviePlayerItem;
- (id)movieURL;
- (void)setLoadingNodes:(id)arg1;
- (void)setMoviePlayerItem:(id)arg1;
- (void)stickerGenerationDidEnd;
- (void)stickerGenerationWillBegin;
- (void)updateNode:(id)arg1 withContentAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
