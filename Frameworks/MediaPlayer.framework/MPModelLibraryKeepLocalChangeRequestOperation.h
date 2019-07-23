/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelLibraryKeepLocalChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryKeepLocalChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_handleKeepLocalUpdateCompleteWithError:(id)arg1;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(int)arg3 mediaLibrary:(id)arg4;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
