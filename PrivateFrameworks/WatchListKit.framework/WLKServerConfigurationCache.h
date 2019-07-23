/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKServerConfigurationCache : NSObject {
    unsigned int  _environmentHash;
    NSDate * _expirationDate;
    WLKServerConfigurationResponse * _response;
}

@property (nonatomic, readonly) unsigned int environmentHash;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) WLKServerConfigurationResponse *response;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)environmentHash;
- (id)expirationDate;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServerResponse:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned int)arg3;
- (BOOL)isValid;
- (id)response;

@end
