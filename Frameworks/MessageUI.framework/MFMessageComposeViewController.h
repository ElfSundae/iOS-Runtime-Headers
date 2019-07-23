/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageComposeViewController : UINavigationController {
    NSArray *_attachments;
    NSString *_body;
    unsigned int _currentAttachedAudioCount;
    unsigned int _currentAttachedImageCount;
    unsigned int _currentAttachedVideoCount;
    <MFMessageComposeViewControllerDelegate> *_messageComposeDelegate;
    NSMutableArray *_mutableAttachmentURLs;
    NSArray *_recipients;
    NSString *_subject;
}

@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) unsigned int currentAttachedAudioCount;
@property (nonatomic) unsigned int currentAttachedImageCount;
@property (nonatomic) unsigned int currentAttachedVideoCount;
@property (nonatomic) <MFMessageComposeViewControllerDelegate> *messageComposeDelegate;
@property (nonatomic, copy) NSMutableArray *mutableAttachmentURLs;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *subject;

+ (BOOL)_canSendText;
+ (id)_chatKitBundle;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_setupAccountMonitor;
+ (void)_startListeningForAvailabilityNotifications;
+ (void)_updateServiceAvailability;
+ (BOOL)canSendAttachments;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (BOOL)canSendSubject;
+ (BOOL)canSendText;
+ (void)initialize;
+ (BOOL)isMMSEnabled;
+ (BOOL)isSupportedAttachmentUTI:(id)arg1;
+ (BOOL)isiMessageEnabled;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (id)_MIMETypeForURL:(id)arg1;
- (id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2;
- (id)_contentTypeForMIMEType:(id)arg1;
- (BOOL)_isAudioMIMEType:(id)arg1;
- (BOOL)_isImageMIMEType:(id)arg1;
- (BOOL)_isVideoMIMEType:(id)arg1;
- (void)_setCanEditRecipients:(BOOL)arg1;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
- (BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
- (id)attachmentURLs;
- (id)attachments;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)body;
- (BOOL)canAddAttachmentURL:(id)arg1;
- (unsigned int)currentAttachedAudioCount;
- (unsigned int)currentAttachedImageCount;
- (unsigned int)currentAttachedVideoCount;
- (void)dealloc;
- (void)disableUserAttachments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)messageComposeDelegate;
- (id)mutableAttachmentURLs;
- (id)recipients;
- (void)setBody:(id)arg1;
- (void)setCurrentAttachedAudioCount:(unsigned int)arg1;
- (void)setCurrentAttachedImageCount:(unsigned int)arg1;
- (void)setCurrentAttachedVideoCount:(unsigned int)arg1;
- (void)setMessageComposeDelegate:(id)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setMutableAttachmentURLs:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (id)subject;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end