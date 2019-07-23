/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL failed;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *sourceMapURL;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *url;

- (BOOL)canceled;
- (BOOL)failed;
- (id)initWithUrl:(id)arg1 type:(int)arg2 mimeType:(id)arg3;
- (id)mimeType;
- (void)setCanceled:(BOOL)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setMimeType:(id)arg1;
- (void)setSourceMapURL:(id)arg1;
- (void)setTargetId:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (id)sourceMapURL;
- (id)targetId;
- (int)type;
- (id)url;

@end
