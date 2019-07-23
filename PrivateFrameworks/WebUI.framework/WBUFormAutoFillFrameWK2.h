/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillFrameWK2 : NSObject <WBSFormAutoFillFrame> {
    WKWebProcessPlugInFrame * _plugInFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *plugInFrame;
@property (readonly) Class superclass;

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1;

- (void).cxx_destruct;
- (id)_formMetadataController;
- (id)_pageContoller;
- (id)committedURL;
- (BOOL)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(id /* block */)arg1;
- (struct OpaqueFormAutoFillFrame { }*)frameRef;
- (unsigned int)hash;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct OpaqueJSContext { }*)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { }*)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (id)pageMainFrame;
- (id)plugInFrame;

@end
