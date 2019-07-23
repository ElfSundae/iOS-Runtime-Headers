/* Generated by RuntimeBrowser.
 */

@protocol TIRevisionHistoryDelegate <NSObject>

@required

- (struct TITokenID { unsigned int x1; unsigned int x2; })addWord:(NSString *)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long)arg3 surfaceFormPtr:(id*)arg4;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long)arg4;
- (void)decrementUnigramCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 usageFlags:(unsigned int)arg3;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id*)arg5;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long)arg4;
- (void)incrementUnigramCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 usageFlags:(unsigned int)arg3;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;

@end
