/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLPushAgent : PLAgent {
    PLXPCListenerOperatorComposition *_receivedPushListener;
}

@property (retain) PLXPCListenerOperatorComposition *receivedPushListener;

+ (id)bundleIdFromTopic:(id)arg1;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionsReceivedPush;
+ (BOOL)isHighPriorityPushEntry:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)accountReceivedPushWithEntry:(id)arg1;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (id)receivedPushListener;
- (void)setReceivedPushListener:(id)arg1;

@end
