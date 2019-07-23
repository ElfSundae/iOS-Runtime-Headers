/* Generated by RuntimeBrowser.
 */

@protocol CKMessageEntryViewDelegate <NSObject>

@required

- (void)messageEntryView:(CKMessageEntryView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 sendButtonLongPressEnded:(struct CGPoint { float x1; float x2; })arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 sendButtonLongPressMoved:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (float)messageEntryViewMaxHeight:(CKMessageEntryView *)arg1;
- (struct CGSize { float x1; float x2; })messageEntryViewMaxShelfPluginViewSize:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(CKMessageEntryView *)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;

@optional

- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (void)sendCurrentLocationMessage:(CKMessageEntryView *)arg1;

@end
