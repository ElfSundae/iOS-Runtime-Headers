/* Generated by RuntimeBrowser.
 */

@protocol FCContentContextInternal <NSObject, FCCacheFlushing>

@required

- (FCArticleListRecordSource *)articleListRecordSource;
- (FCArticleRecordSource *)articleRecordSource;
- (<FCAssetKeyManagerType> *)assetKeyManager;
- (FCChannelMembershipController *)channelMembershipController;
- (FCCKContentDatabase *)contentDatabase;
- (FCFeedDatabase *)feedDatabase;
- (FCForYouConfigRecordSource *)forYouConfigRecordSource;
- (FCIssueListRecordSource *)issueListRecordSource;
- (FCIssueRecordSource *)issueRecordSource;
- (FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
- (NSArray *)recordSources;
- (FCResourceRecordSource *)resourceRecordSource;
- (FCTagListRecordSource *)tagListRecordSource;
- (FCTagRecordSource *)tagRecordSource;
- (FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;

@end
