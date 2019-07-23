/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCResourceArchiveFetchOperation : FCOperation {
    NSURL * _archiveURL;
    <FCContentContext> * _context;
    NSURLSessionDownloadTask * _downloadTask;
    id /* block */  _fetchCompletionHandler;
    id /* block */  _progressHandler;
    NSArray * _resultResources;
}

@property (nonatomic, copy) NSURL *archiveURL;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSURLSessionDownloadTask *downloadTask;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) NSArray *resultResources;

- (void).cxx_destruct;
- (void)_ensureResourcesAreReadyForUse:(id)arg1 completion:(id /* block */)arg2;
- (void)_unzipResourcesFromArchiveFileURL:(id)arg1 completion:(id /* block */)arg2;
- (id)archiveURL;
- (id)context;
- (id)downloadTask;
- (id /* block */)fetchCompletionHandler;
- (id)initWithArchiveURL:(id)arg1 context:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)progressHandler;
- (id)resultResources;
- (void)setArchiveURL:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDownloadTask:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResultResources:(id)arg1;
- (bool)validateOperation;

@end
