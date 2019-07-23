/* Generated by RuntimeBrowser.
 */

@protocol SiriUIViewController <NSObject>

@required

- (AceObject *)aceObject;
- (void)setAceObject:(AceObject *)arg1;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)wasAddedToTranscript;

@optional

- (float)desiredHeight;
- (float)desiredHeightForWidth:(float)arg1;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)handleChangeUtteranceCommand:(AceObject *)arg1;
- (NSString *)navigationTitle;
- (void)siriDidScrollVisible:(BOOL)arg1;

@end
