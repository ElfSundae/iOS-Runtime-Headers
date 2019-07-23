/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPYouTubeActivity : UIActivity <RPPublishingAgentDelegate> {
    NSString *_descriptionText;
    NSURL *_movieURL;
    RPYouTubeActivityProgressOverlay *_progressOverlay;
    <RPPublishingAgent> *_publishingAgent;
    NSURL *_tempFilePath;
}

@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) NSURL *movieURL;
@property (nonatomic, retain) RPYouTubeActivityProgressOverlay *progressOverlay;
@property (nonatomic, retain) <RPPublishingAgent> *publishingAgent;
@property (nonatomic, retain) NSURL *tempFilePath;

+ (int)activityCategory;
+ (id)photosUIFrameworkBundle;
+ (id)photosUIImageNamed:(id)arg1;

- (void).cxx_destruct;
- (id)_activitySettingsImage;
- (void)_selectComedyPickerRow;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)descriptionText;
- (id)movieURL;
- (void)prepareWithActivityItems:(id)arg1;
- (id)progressOverlay;
- (id)publishingAgent;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setMovieURL:(id)arg1;
- (void)setProgressOverlay:(id)arg1;
- (void)setPublishingAgent:(id)arg1;
- (void)setTempFilePath:(id)arg1;
- (void)showAlertWithError:(id)arg1;
- (id)tempFilePath;
- (id)tempFileURL;

@end
