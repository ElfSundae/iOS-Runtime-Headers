/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (nonatomic) double lineNumber;
@property (nonatomic) int nodeId;
@property (nonatomic, copy) NSArray *stackTrace;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *url;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithType:(long long)arg1;
- (double)lineNumber;
- (int)nodeId;
- (void)setLineNumber:(double)arg1;
- (void)setNodeId:(int)arg1;
- (void)setStackTrace:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)stackTrace;
- (long long)type;
- (id)url;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithType:(long long)arg1;

@end
