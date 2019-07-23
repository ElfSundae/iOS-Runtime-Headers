/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactAggregator : NSObject {
    SGLRUCache * _cachedContacts;
}

+ (id)mergeContact:(id)arg1 withContact:(id)arg2;
+ (id)messageIdentifiersGeneratingContact:(id)arg1;

- (void).cxx_destruct;
- (id)augmentSuggestedContactWithContact:(id)arg1 conversationId:(id)arg2 handle:(id)arg3;
- (void)clear;
- (void)clearContactsWithConversationIdentifier:(id)arg1;
- (id)init;
- (void)removeContact:(id)arg1;

@end
