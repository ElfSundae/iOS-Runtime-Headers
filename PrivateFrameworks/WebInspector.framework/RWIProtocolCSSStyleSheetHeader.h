/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (nonatomic) BOOL disabled;
@property (nonatomic, copy) NSString *frameId;
@property (nonatomic) BOOL isInline;
@property (nonatomic) int origin;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic) double startColumn;
@property (nonatomic) double startLine;
@property (nonatomic, copy) NSString *styleSheetId;
@property (nonatomic, copy) NSString *title;

- (BOOL)disabled;
- (id)frameId;
- (id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(int)arg4 title:(id)arg5 disabled:(BOOL)arg6 isInline:(BOOL)arg7 startLine:(double)arg8 startColumn:(double)arg9;
- (BOOL)isInline;
- (int)origin;
- (void)setDisabled:(BOOL)arg1;
- (void)setFrameId:(id)arg1;
- (void)setIsInline:(BOOL)arg1;
- (void)setOrigin:(int)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStartColumn:(double)arg1;
- (void)setStartLine:(double)arg1;
- (void)setStyleSheetId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceURL;
- (double)startColumn;
- (double)startLine;
- (id)styleSheetId;
- (id)title;

@end
