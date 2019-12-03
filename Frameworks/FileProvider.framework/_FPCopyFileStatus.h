/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPCopyFileStatus : NSObject {
    NSMutableDictionary * _lastBytesCopiedByFile;
    NSProgress * _progress;
}

@property (retain) NSMutableDictionary *lastBytesCopiedByFile;
@property (retain) NSProgress *progress;

- (void).cxx_destruct;
- (void)beginCopyingFile:(id)arg1 state:(struct _copyfile_state { }*)arg2;
- (void)finishCopyingFile:(id)arg1 state:(struct _copyfile_state { }*)arg2;
- (id)init;
- (id)lastBytesCopiedByFile;
- (id)progress;
- (void)setLastBytesCopiedByFile:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)updateCopyingFile:(id)arg1 state:(struct _copyfile_state { }*)arg2;

@end
