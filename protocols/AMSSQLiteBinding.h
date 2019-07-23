/* Generated by RuntimeBrowser.
 */

@protocol AMSSQLiteBinding <NSObject>

@required

- (void)bindArray:(NSArray *)arg1 atPosition:(int)arg2;
- (void)bindData:(NSData *)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(NSData *)arg1 atPosition:(int)arg2;
- (void)bindDate:(NSDate *)arg1 atPosition:(int)arg2;
- (void)bindDictionary:(NSDictionary *)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(NSNumber *)arg1 atPosition:(int)arg2;
- (void)bindString:(NSString *)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(NSString *)arg1 atPosition:(int)arg2;
- (void)bindURL:(NSURL *)arg1 atPosition:(int)arg2;
- (int)clearBindings;

@end
