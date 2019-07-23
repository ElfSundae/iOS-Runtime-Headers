/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSIndexExtensionRequestHandler : NSObject <CSSearchableIndexDelegate, NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (void)index:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)reindexAllSearchableItemsForIndex:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)searchableIndexDidFinishThrottle:(id)arg1;
- (void)searchableIndexDidThrottle:(id)arg1;

@end
