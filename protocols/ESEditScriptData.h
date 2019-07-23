/* Generated by RuntimeBrowser.
 */

@protocol ESEditScriptData <NSObject>

@required

+ (<ESEditScriptData> *)EditScriptDataWithArray:(NSArray *)arg1;
+ (<ESEditScriptData> *)EditScriptDataWithString:(NSString *)arg1 chunkSize:(int)arg2;

- (int)characterIndexForItem:(int)arg1;
- (int)indexOfFirstDifferenceWithOtherData:(id <ESEditScriptData>)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;
- (int)length;
- (int)lengthOfItem:(int)arg1;
- (NSString *)stringAtIndex:(int)arg1;
- (NSString *)stringValue;

@end
