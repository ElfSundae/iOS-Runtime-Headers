/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {
    <MFAttachmentHandlingDelegate> * _delegate;
    NSURL * _url;
}

@property (nonatomic) <MFAttachmentHandlingDelegate> *delegate;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)_beforeActivity;
- (void)_cleanup;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)delegate;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 url:(id)arg3;
- (void)performActivity;
- (void)setDelegate:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
