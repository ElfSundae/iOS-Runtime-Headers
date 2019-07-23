/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) int mediaItemType;
@property (nonatomic) BOOL shouldShuffle;
@property (nonatomic, copy) NSNumber *startPlaying;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)mediaItemType;
- (BOOL)requiresResponse;
- (void)setMediaItemType:(int)arg1;
- (void)setShouldShuffle:(BOOL)arg1;
- (void)setStartPlaying:(id)arg1;
- (BOOL)shouldShuffle;
- (id)startPlaying;

@end
