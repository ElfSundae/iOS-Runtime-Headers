/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyLogSession : NSObject <NSURLSessionDelegate> {
    NSURLSession * _backgroundSession;
    unsigned long long  _downloadCount;
    unsigned long long  _fetchCount;
    NSURLSession * _foregroundSession;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (retain) NSURLSession *backgroundSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long downloadCount;
@property unsigned long long fetchCount;
@property (retain) NSURLSession *foregroundSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_workloop> *workloop;

+ (id)requestDownloadFilename:(id)arg1;
+ (id)requestDownloadLocation:(id)arg1 error:(id*)arg2;
+ (id)requestIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)backgroundSession;
- (id)createAuthenticatedForegroundSession;
- (id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (bool)download:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)downloadCount;
- (bool)fetch:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)fetchCount;
- (id)foregroundSession;
- (id)initWithWorkloop:(id)arg1;
- (void)setBackgroundSession:(id)arg1;
- (void)setDownloadCount:(unsigned long long)arg1;
- (void)setFetchCount:(unsigned long long)arg1;
- (void)setForegroundSession:(id)arg1;
- (void)setWorkloop:(id)arg1;
- (id)workloop;

@end
