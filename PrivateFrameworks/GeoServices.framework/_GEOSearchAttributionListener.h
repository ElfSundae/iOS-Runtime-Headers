/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSearchAttributionListener : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_errorHandlers;
    NSString *_identifier;
    unsigned int _version;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int version;

- (void)addCompletionHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)handleError:(id)arg1;
- (void)handleInfo:(id)arg1 updatedManifest:(BOOL)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 version:(unsigned int)arg2;
- (unsigned int)version;

@end
