/* Generated by RuntimeBrowser.
 */

@protocol PETLoggingOutlet <NSObject>

@required

- (void)logDoubleValue:(double)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;
- (void)logErrorForEvent:(NSString *)arg1 featureId:(NSString *)arg2 reason:(NSString *)arg3;
- (void)logUnsignedIntegerValue:(unsigned int)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;

@end
