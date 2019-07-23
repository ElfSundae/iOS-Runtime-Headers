/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <GEOPBSessionRequesterDelegate> {
    BOOL  _cancelled;
    GEORequester * _requester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)batchReverseGeocoderURL;
+ (id)providerName;

- (void)_batchRequesterDidFinish:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)cancel;
- (void)dealloc;
- (id)newRequester:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;

@end
