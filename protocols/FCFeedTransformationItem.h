/* Generated by RuntimeBrowser.
 */

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingItem>

@required

- (NSString *)articleID;
- (bool)canBePurchased;
- (NSString *)clusterID;
- (unsigned long long)contentType;
- (unsigned long long)feedHalfLifeMilliseconds;
- (NSString *)feedID;
- (double)globalUserFeedback;
- (bool)isExplicitContent;
- (bool)isFromBlockedStorefront;
- (long long)minimumNewsVersion;
- (unsigned long long)order;
- (unsigned long long)publishDateMilliseconds;
- (long long)publisherArticleVersion;
- (NSString *)sourceChannelID;

@optional

- (<FCChannelProviding> *)sourceChannel;

@end
