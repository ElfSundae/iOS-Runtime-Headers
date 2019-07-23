/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILayoutCache : NSObject {
    NSMutableArray * _batchedRequests;
    <SKUILayoutCacheDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _layouts;
    NSMutableArray * _requests;
}

@property (nonatomic) <SKUILayoutCacheDelegate> *delegate;

- (void).cxx_destruct;
- (void)_addLayoutBatch:(id)arg1;
- (void)_layoutRequestsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_populateCache;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })addLayoutRequests:(id)arg1;
- (void)commitLayoutRequests;
- (id)delegate;
- (id)init;
- (id)layoutForIndex:(long long)arg1;
- (id)layoutForIndex:(long long)arg1 forced:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })populateCacheWithLayoutRequests:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
