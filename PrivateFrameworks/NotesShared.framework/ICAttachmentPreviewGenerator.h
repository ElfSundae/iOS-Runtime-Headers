/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate> {
    NSOperationQueue *_asyncGeneratorQueue;
    NSMutableSet *_attachmentIDsInProgress;
    NSMutableSet *_attachmentIDsPending;
    NSMutableSet *_attachmentIDsToRetry;
    NSOperationQueue *_costlyGeneratorQueue;
    NSOperationQueue *_generatorQueue;
    unsigned int _previewGenerationState;
    ICProgressIndicatorTracker *_progressTracker;
    int _suspendCount;
}

@property (nonatomic, retain) NSOperationQueue *asyncGeneratorQueue;
@property (nonatomic, retain) NSMutableSet *attachmentIDsInProgress;
@property (nonatomic, retain) NSMutableSet *attachmentIDsPending;
@property (nonatomic, retain) NSMutableSet *attachmentIDsToRetry;
@property (nonatomic, retain) NSOperationQueue *costlyGeneratorQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSOperationQueue *generatorQueue;
@property (readonly) unsigned int hash;
@property unsigned int previewGenerationState;
@property (nonatomic, retain) ICProgressIndicatorTracker *progressTracker;
@property (readonly) Class superclass;
@property (nonatomic) int suspendCount;

+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)asyncGeneratorQueue;
- (void)attachmentDidLoad:(id)arg1;
- (id)attachmentIDsInProgress;
- (id)attachmentIDsPending;
- (id)attachmentIDsToRetry;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)cancelAttachmentPreviewGeneration;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1;
- (id)costlyGeneratorQueue;
- (void)dealloc;
- (void)generatePendingPreviewForAttachment:(id)arg1;
- (void)generatePendingPreviews;
- (void)generatePreviewIfNeededForAttachment:(id)arg1;
- (void)generatePreviewsIfNeeded;
- (id)generatorQueue;
- (id)init;
- (BOOL)isPreviewGenerationSupported;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)operationComplete:(id)arg1;
- (unsigned int)previewGenerationState;
- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;
- (id)progressTracker;
- (void)resume;
- (void)setAsyncGeneratorQueue:(id)arg1;
- (void)setAttachmentIDsInProgress:(id)arg1;
- (void)setAttachmentIDsPending:(id)arg1;
- (void)setAttachmentIDsToRetry:(id)arg1;
- (void)setCostlyGeneratorQueue:(id)arg1;
- (void)setGeneratorQueue:(id)arg1;
- (void)setPreviewGenerationState:(unsigned int)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setSuspendCount:(int)arg1;
- (void)setupAttachmentPreviewGeneratorObservers;
- (void)suspend;
- (int)suspendCount;

@end
