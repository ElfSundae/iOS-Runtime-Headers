/* Generated by RuntimeBrowser.
 */

@protocol SISchemaPunchOut <NSObject>

@required

- (NSString *)appID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAppID:(NSString *)arg1;
- (void)setUrlScheme:(NSString *)arg1;
- (void)setViewContainer:(SISchemaViewContainer *)arg1;
- (void)setViewElementID:(NSData *)arg1;
- (NSString *)urlScheme;
- (SISchemaViewContainer *)viewContainer;
- (NSData *)viewElementID;

@end