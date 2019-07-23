/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    BOOL _backgroundTask;
    id /* block */ _cancelHandler;
    BOOL _cancelledByEngine;
    NSString *_clientBundleID;
    CPLResource *_cloudResource;
    id /* block */ _completionHandler;
    id /* block */ _didStartHandler;
    id /* block */ _launchHandler;
    id /* block */ _progressHandler;
    unsigned int _taskIdentifierForQueue;
    BOOL _transportOwnsTask;
    <CPLEngineTransportTask> *_transportTask;
    BOOL _wantsTransportTask;
}

@property (getter=isBackgroundTask, nonatomic) BOOL backgroundTask;
@property (nonatomic, readonly) id /* block */ cancelHandler;
@property (getter=isCancelledByEngine, nonatomic) BOOL cancelledByEngine;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, retain) CPLResource *cloudResource;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) id /* block */ didStartHandler;
@property (nonatomic, readonly) id /* block */ launchHandler;
@property (nonatomic, readonly) id /* block */ progressHandler;
@property (nonatomic) unsigned int taskIdentifierForQueue;
@property (nonatomic) BOOL transportOwnsTask;
@property (nonatomic, retain) <CPLEngineTransportTask> *transportTask;
@property (nonatomic) BOOL wantsTransportTask;

- (void).cxx_destruct;
- (id /* block */)cancelHandler;
- (void)cancelTask;
- (id)clientBundleID;
- (id)cloudResource;
- (id /* block */)completionHandler;
- (id /* block */)didStartHandler;
- (id)initWithLaunchHandler:(id /* block */)arg1 cancelHandler:(id /* block */)arg2 didStartHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)isBackgroundTask;
- (BOOL)isCancelledByEngine;
- (void)launch;
- (id /* block */)launchHandler;
- (id /* block */)progressHandler;
- (void)setBackgroundTask:(BOOL)arg1;
- (void)setCancelledByEngine:(BOOL)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTaskIdentifierForQueue:(unsigned int)arg1;
- (void)setTransportOwnsTask:(BOOL)arg1;
- (void)setTransportTask:(id)arg1;
- (void)setWantsTransportTask:(BOOL)arg1;
- (unsigned int)taskIdentifierForQueue;
- (BOOL)transportOwnsTask;
- (id)transportTask;
- (BOOL)wantsTransportTask;

@end
