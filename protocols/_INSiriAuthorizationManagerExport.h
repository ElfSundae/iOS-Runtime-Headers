/* Generated by RuntimeBrowser.
 */

@protocol _INSiriAuthorizationManagerExport <NSObject, JSExport>

@required

+ (BOOL)_isSiriAuthorizationRestricted;
+ (void)_requestSiriAuthorization:(void *)arg1 auditToken:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*, struct { unsigned int x1[8]; }
+ (int)_siriAuthorizationStatusForAppID:(NSString *)arg1;

- (id)init;

@end
