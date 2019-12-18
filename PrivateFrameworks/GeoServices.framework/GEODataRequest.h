/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataRequest : NSObject {
    BOOL  _HTTPMethod;
    bool  _HTTPShouldHandleCookies;
    NSURL * _URL;
    NSDictionary * _additionalHTTPHeaders;
    bool  _allowTFOUse;
    bool  _allowTLSSessionTicketUse;
    GEOApplicationAuditToken * _auditToken;
    NSString * _backgroundSessionIdentifier;
    NSData * _bodyData;
    NSData * _cachedData;
    unsigned long long  _constraints;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _kind;
    unsigned long long  _multipathAlternatePort;
    unsigned long long  _multipathServiceType;
    bool  _needsProxy;
    <GEORequestCounterTicket> * _requestCounterTicket;
    GEODataRequestThrottlerToken * _throttleToken;
    double  _timeoutInterval;
    NSObject<OS_xpc_object> * _xpcRequest;
}

@property (nonatomic, readonly) BOOL HTTPMethod;
@property (nonatomic, readonly) bool HTTPShouldHandleCookies;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *additionalHTTPHeaders;
@property (nonatomic, readonly) bool allowTFOUse;
@property (nonatomic, readonly) bool allowTLSSessionTicketUse;
@property (nonatomic, readonly, copy) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly, copy) NSData *bodyData;
@property (nonatomic, copy) NSData *cachedData;
@property (nonatomic, readonly) unsigned long long constraints;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } kind;
@property (nonatomic, readonly) unsigned long long multipathAlternatePort;
@property (nonatomic, readonly) unsigned long long multipathServiceType;
@property (nonatomic, readonly) bool needsProxy;
@property (nonatomic, readonly) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcRequest;

- (void).cxx_destruct;
- (BOOL)HTTPMethod;
- (bool)HTTPShouldHandleCookies;
- (id)URL;
- (id)additionalHTTPHeaders;
- (bool)allowTFOUse;
- (bool)allowTLSSessionTicketUse;
- (id)auditToken;
- (id)backgroundSessionIdentifier;
- (id)bodyData;
- (id)cachedData;
- (unsigned long long)constraints;
- (id)description;
- (id)init;
- (id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(bool)arg3 backgroundIdentifier:(id)arg4 compressRequest:(bool)arg5 allowCellular:(bool)arg6 allowBattery:(bool)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10;
- (id)initHttpOnlyRequestWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(bool)arg5 allowCellularUse:(bool)arg6 compressRequest:(bool)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(unsigned long long)arg9 multipathAlternatePort:(unsigned long long)arg10 throttleToken:(id)arg11;
- (id)initWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(bool)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(bool)arg10 constraints:(unsigned long long)arg11 allowTLSSessionTicketUse:(bool)arg12 allowTFOUse:(bool)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(unsigned long long)arg18 multipathAlternatePort:(unsigned long long)arg19 backgroundSessionIdentifier:(id)arg20 throttleToken:(id)arg21;
- (id)initWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(bool)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(bool)arg10 constraints:(unsigned long long)arg11 allowTLSSessionTicketUse:(bool)arg12 allowTFOUse:(bool)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(unsigned long long)arg18 multipathAlternatePort:(unsigned long long)arg19 throttleToken:(id)arg20;
- (id)initWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(bool)arg5 auditToken:(id)arg6 timeoutInterval:(double)arg7 traits:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(unsigned long long)arg10 multipathAlternatePort:(unsigned long long)arg11 throttleToken:(id)arg12;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })kind;
- (unsigned long long)multipathAlternatePort;
- (unsigned long long)multipathServiceType;
- (bool)needsProxy;
- (id)newURLRequest;
- (id)publicLogDescription;
- (id)requestCounterTicket;
- (void)setCachedData:(id)arg1;
- (id)throttleToken;
- (double)timeoutInterval;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (id)xpcRequest;

@end
