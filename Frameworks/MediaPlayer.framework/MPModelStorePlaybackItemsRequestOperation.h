/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelStorePlaybackItemsRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, readonly, copy) MPModelStorePlaybackItemsRequest *request;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)request;
- (id /* block */)responseHandler;

@end
