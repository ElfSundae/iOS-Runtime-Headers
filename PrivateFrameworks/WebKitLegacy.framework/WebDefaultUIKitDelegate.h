/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultUIKitDelegate : NSObject

+ (id)sharedUIKitDelegate;

- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)checkSpellingOfString:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentsPointForWebView:(id)arg1;
- (void)deleteFromInput;
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;
- (int)deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentVisibleRectForWebView:(id)arg1;
- (long long)getPasteboardChangeCount;
- (long long)getPasteboardItemsCount;
- (bool)handleKeyCommandForCurrentEvent;
- (bool)hasRichlyEditableSelection;
- (struct CGPoint { double x1; double x2; })interactionLocation;
- (bool)isUnperturbedDictationResultMarker:(id)arg1;
- (bool)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(bool)arg3;
- (bool)performsTwoStepPaste:(id)arg1;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (void)showPlaybackTargetPicker:(bool)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(bool)arg6 allowVerticalScrollbar:(bool)arg7;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(bool)arg4;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint { double x1; double x2; })arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webViewDidDrawTiles:(id)arg1;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidLayout:(id)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webViewDidReceiveMobileDocType:(id)arg1;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)writeDataToPasteboard:(id)arg1;

@end
