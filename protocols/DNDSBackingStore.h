/* Generated by RuntimeBrowser.
 */

@protocol DNDSBackingStore <NSObject>

@required

- (NSArray *)readAllRecordsWithError:(id*)arg1 lastUpdateDate:(out id*)arg2;
- (bool)writeAllRecords:(NSArray *)arg1 withError:(id*)arg2;

@end
