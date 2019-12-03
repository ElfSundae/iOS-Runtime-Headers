/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitRouteUpdateRequestSimple : GEOXPCRequest <GEOXPCRequest> {
    GEOTransitRouteUpdateRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOTransitRouteUpdateRequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)request;
- (void)setRequest:(id)arg1;

@end
