/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    bool  _includePrivateTransactions;
    CKRecordZone * _recordZone;
}

@property (nonatomic) bool includePrivateTransactions;
@property (nonatomic, retain) CKRecordZone *recordZone;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)includePrivateTransactions;
- (id)initWithRecordZone:(id)arg1;
- (id)recordZone;
- (void)setIncludePrivateTransactions:(bool)arg1;
- (void)setRecordZone:(id)arg1;

@end
