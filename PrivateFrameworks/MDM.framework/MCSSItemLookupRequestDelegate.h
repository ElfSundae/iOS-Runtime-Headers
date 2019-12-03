/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) SSItemLookupRequest *request;
@property (readonly) Class superclass;

+ (id)instance;

- (void).cxx_destruct;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)startCompletionBlock:(id /* block */)arg1;

@end
