/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPAccessControlDataSource : NSObject <FPCollectionDataSource> {
    <FPCollectionDataSourceDelegate> * _delegate;
    <FPXEnumerator> * _enumerator;
    bool  _hasMoreIncoming;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <FPCollectionDataSourceDelegate> *delegate;
@property (nonatomic, readonly) bool hasMoreIncoming;

- (void).cxx_destruct;
- (id)delegate;
- (void)enumerationMightHaveResumed;
- (void)handleItems:(id)arg1 nextPage:(id)arg2;
- (bool)hasMoreIncoming;
- (id)initWithEnumerator:(id)arg1;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
