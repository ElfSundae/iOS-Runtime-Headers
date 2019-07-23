/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler> {
    IKJSInspectorController * _controller;
    NSString * _currentFrameIdentifier;
    RWIProtocolPageFrameResourceTree * _resourceTree;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (nonatomic, retain) NSString *currentFrameIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RWIProtocolPageFrameResourceTree *resourceTree;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)archiveWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)controller;
- (id)currentFrameIdentifier;
- (void)deleteCookieWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 cookieName:(id)arg3 url:(id)arg4;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)documentDidChange;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getCompositingBordersVisibleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getCookiesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getResourceContentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)getResourceTreeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)navigateWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 url:(id)arg3;
- (void)reloadWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 ignoreCache:(bool*)arg3 revalidateAllResources:(bool*)arg4;
- (id)resourceTree;
- (void)searchInResourceWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(bool*)arg6 isRegex:(bool*)arg7 requestId:(id*)arg8;
- (void)searchInResourcesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 text:(id)arg3 caseSensitive:(bool*)arg4 isRegex:(bool*)arg5;
- (void)setCompositingBordersVisibleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 visible:(bool)arg3;
- (void)setCurrentFrameIdentifier:(id)arg1;
- (void)setEmulatedMediaWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 media:(id)arg3;
- (void)setShowPaintRectsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 result:(bool)arg3;
- (void)snapshotNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)snapshotRectWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7;

@end
