/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSHttpInfo : PBCodable <NSCopying> {
    int  _adaptiveTcpReadTimeout;
    int  _adaptiveTcpWriteTimeout;
    BOOL  _allowsCellular;
    BOOL  _allowsPowerNapScheduling;
    BOOL  _cancelled;
    BOOL  _connectionReused;
    long long  _duration;
    int  _errorCode;
    NSString * _errorDomain;
    BOOL  _fastFail;
    BOOL  _finalTryInRequest;
    BOOL  _forceNondiscretionary;
    struct { 
        unsigned int duration : 1; 
        unsigned int networkServiceType : 1; 
        unsigned int responseReceivedDuration : 1; 
        unsigned int startTime : 1; 
        unsigned int adaptiveTcpReadTimeout : 1; 
        unsigned int adaptiveTcpWriteTimeout : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatus : 1; 
        unsigned int locatorPort : 1; 
        unsigned int qualityOfService : 1; 
        unsigned int requestSize : 1; 
        unsigned int responseSize : 1; 
        unsigned int allowsCellular : 1; 
        unsigned int allowsPowerNapScheduling : 1; 
        unsigned int cancelled : 1; 
        unsigned int connectionReused : 1; 
        unsigned int fastFail : 1; 
        unsigned int finalTryInRequest : 1; 
        unsigned int forceNondiscretionary : 1; 
        unsigned int inlineEdgeComplete : 1; 
        unsigned int powerPluggedInAtEnd : 1; 
        unsigned int powerPluggedInAtStart : 1; 
        unsigned int powerPluggedInWhenQueued : 1; 
        unsigned int proxyUsed : 1; 
        unsigned int requiresPowerPluggedIn : 1; 
        unsigned int timedOut : 1; 
        unsigned int transactionComplete : 1; 
    }  _has;
    NSMutableArray * _httpErrors;
    int  _httpStatus;
    BOOL  _inlineEdgeComplete;
    NSString * _interfaceIdentifier;
    NSString * _locatorHostname;
    NSString * _locatorPeerAddress;
    unsigned int  _locatorPort;
    NSString * _locatorScheme;
    long long  _networkServiceType;
    NSString * _networkUsed;
    BOOL  _powerPluggedInAtEnd;
    BOOL  _powerPluggedInAtStart;
    BOOL  _powerPluggedInWhenQueued;
    BOOL  _proxyUsed;
    int  _qualityOfService;
    int  _requestSize;
    BOOL  _requiresPowerPluggedIn;
    long long  _responseReceivedDuration;
    int  _responseSize;
    long long  _startTime;
    NSMutableArray * _tcpInfos;
    BOOL  _timedOut;
    BOOL  _transactionComplete;
}

@property (nonatomic) int adaptiveTcpReadTimeout;
@property (nonatomic) int adaptiveTcpWriteTimeout;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) long long duration;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) BOOL fastFail;
@property (nonatomic) BOOL finalTryInRequest;
@property (nonatomic) BOOL forceNondiscretionary;
@property (nonatomic) BOOL hasAdaptiveTcpReadTimeout;
@property (nonatomic) BOOL hasAdaptiveTcpWriteTimeout;
@property (nonatomic) BOOL hasAllowsCellular;
@property (nonatomic) BOOL hasAllowsPowerNapScheduling;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasConnectionReused;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasFastFail;
@property (nonatomic) BOOL hasFinalTryInRequest;
@property (nonatomic) BOOL hasForceNondiscretionary;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) BOOL hasInlineEdgeComplete;
@property (nonatomic, readonly) BOOL hasInterfaceIdentifier;
@property (nonatomic, readonly) BOOL hasLocatorHostname;
@property (nonatomic, readonly) BOOL hasLocatorPeerAddress;
@property (nonatomic) BOOL hasLocatorPort;
@property (nonatomic, readonly) BOOL hasLocatorScheme;
@property (nonatomic) BOOL hasNetworkServiceType;
@property (nonatomic, readonly) BOOL hasNetworkUsed;
@property (nonatomic) BOOL hasPowerPluggedInAtEnd;
@property (nonatomic) BOOL hasPowerPluggedInAtStart;
@property (nonatomic) BOOL hasPowerPluggedInWhenQueued;
@property (nonatomic) BOOL hasProxyUsed;
@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) BOOL hasRequestSize;
@property (nonatomic) BOOL hasRequiresPowerPluggedIn;
@property (nonatomic) BOOL hasResponseReceivedDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasTimedOut;
@property (nonatomic) BOOL hasTransactionComplete;
@property (nonatomic, retain) NSMutableArray *httpErrors;
@property (nonatomic) int httpStatus;
@property (nonatomic) BOOL inlineEdgeComplete;
@property (nonatomic, retain) NSString *interfaceIdentifier;
@property (nonatomic, retain) NSString *locatorHostname;
@property (nonatomic, retain) NSString *locatorPeerAddress;
@property (nonatomic) unsigned int locatorPort;
@property (nonatomic, retain) NSString *locatorScheme;
@property (nonatomic) long long networkServiceType;
@property (nonatomic, retain) NSString *networkUsed;
@property (nonatomic) BOOL powerPluggedInAtEnd;
@property (nonatomic) BOOL powerPluggedInAtStart;
@property (nonatomic) BOOL powerPluggedInWhenQueued;
@property (nonatomic) BOOL proxyUsed;
@property (nonatomic) int qualityOfService;
@property (nonatomic) int requestSize;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) long long responseReceivedDuration;
@property (nonatomic) int responseSize;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSMutableArray *tcpInfos;
@property (nonatomic) BOOL timedOut;
@property (nonatomic) BOOL transactionComplete;

+ (Class)httpErrorType;
+ (Class)tcpInfoType;

- (int)adaptiveTcpReadTimeout;
- (int)adaptiveTcpWriteTimeout;
- (void)addHttpError:(id)arg1;
- (void)addTcpInfo:(id)arg1;
- (BOOL)allowsCellular;
- (BOOL)allowsPowerNapScheduling;
- (BOOL)cancelled;
- (void)clearHttpErrors;
- (void)clearTcpInfos;
- (BOOL)connectionReused;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (int)errorCode;
- (id)errorDomain;
- (BOOL)fastFail;
- (BOOL)finalTryInRequest;
- (BOOL)forceNondiscretionary;
- (BOOL)hasAdaptiveTcpReadTimeout;
- (BOOL)hasAdaptiveTcpWriteTimeout;
- (BOOL)hasAllowsCellular;
- (BOOL)hasAllowsPowerNapScheduling;
- (BOOL)hasCancelled;
- (BOOL)hasConnectionReused;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorDomain;
- (BOOL)hasFastFail;
- (BOOL)hasFinalTryInRequest;
- (BOOL)hasForceNondiscretionary;
- (BOOL)hasHttpStatus;
- (BOOL)hasInlineEdgeComplete;
- (BOOL)hasInterfaceIdentifier;
- (BOOL)hasLocatorHostname;
- (BOOL)hasLocatorPeerAddress;
- (BOOL)hasLocatorPort;
- (BOOL)hasLocatorScheme;
- (BOOL)hasNetworkServiceType;
- (BOOL)hasNetworkUsed;
- (BOOL)hasPowerPluggedInAtEnd;
- (BOOL)hasPowerPluggedInAtStart;
- (BOOL)hasPowerPluggedInWhenQueued;
- (BOOL)hasProxyUsed;
- (BOOL)hasQualityOfService;
- (BOOL)hasRequestSize;
- (BOOL)hasRequiresPowerPluggedIn;
- (BOOL)hasResponseReceivedDuration;
- (BOOL)hasResponseSize;
- (BOOL)hasStartTime;
- (BOOL)hasTimedOut;
- (BOOL)hasTransactionComplete;
- (unsigned int)hash;
- (id)httpErrorAtIndex:(unsigned int)arg1;
- (id)httpErrors;
- (unsigned int)httpErrorsCount;
- (int)httpStatus;
- (BOOL)inlineEdgeComplete;
- (id)interfaceIdentifier;
- (BOOL)isEqual:(id)arg1;
- (id)locatorHostname;
- (id)locatorPeerAddress;
- (unsigned int)locatorPort;
- (id)locatorScheme;
- (void)mergeFrom:(id)arg1;
- (long long)networkServiceType;
- (id)networkUsed;
- (BOOL)powerPluggedInAtEnd;
- (BOOL)powerPluggedInAtStart;
- (BOOL)powerPluggedInWhenQueued;
- (BOOL)proxyUsed;
- (int)qualityOfService;
- (BOOL)readFrom:(id)arg1;
- (int)requestSize;
- (BOOL)requiresPowerPluggedIn;
- (long long)responseReceivedDuration;
- (int)responseSize;
- (void)setAdaptiveTcpReadTimeout:(int)arg1;
- (void)setAdaptiveTcpWriteTimeout:(int)arg1;
- (void)setAllowsCellular:(BOOL)arg1;
- (void)setAllowsPowerNapScheduling:(BOOL)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setConnectionReused:(BOOL)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setFastFail:(BOOL)arg1;
- (void)setFinalTryInRequest:(BOOL)arg1;
- (void)setForceNondiscretionary:(BOOL)arg1;
- (void)setHasAdaptiveTcpReadTimeout:(BOOL)arg1;
- (void)setHasAdaptiveTcpWriteTimeout:(BOOL)arg1;
- (void)setHasAllowsCellular:(BOOL)arg1;
- (void)setHasAllowsPowerNapScheduling:(BOOL)arg1;
- (void)setHasCancelled:(BOOL)arg1;
- (void)setHasConnectionReused:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasFastFail:(BOOL)arg1;
- (void)setHasFinalTryInRequest:(BOOL)arg1;
- (void)setHasForceNondiscretionary:(BOOL)arg1;
- (void)setHasHttpStatus:(BOOL)arg1;
- (void)setHasInlineEdgeComplete:(BOOL)arg1;
- (void)setHasLocatorPort:(BOOL)arg1;
- (void)setHasNetworkServiceType:(BOOL)arg1;
- (void)setHasPowerPluggedInAtEnd:(BOOL)arg1;
- (void)setHasPowerPluggedInAtStart:(BOOL)arg1;
- (void)setHasPowerPluggedInWhenQueued:(BOOL)arg1;
- (void)setHasProxyUsed:(BOOL)arg1;
- (void)setHasQualityOfService:(BOOL)arg1;
- (void)setHasRequestSize:(BOOL)arg1;
- (void)setHasRequiresPowerPluggedIn:(BOOL)arg1;
- (void)setHasResponseReceivedDuration:(BOOL)arg1;
- (void)setHasResponseSize:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasTimedOut:(BOOL)arg1;
- (void)setHasTransactionComplete:(BOOL)arg1;
- (void)setHttpErrors:(id)arg1;
- (void)setHttpStatus:(int)arg1;
- (void)setInlineEdgeComplete:(BOOL)arg1;
- (void)setInterfaceIdentifier:(id)arg1;
- (void)setLocatorHostname:(id)arg1;
- (void)setLocatorPeerAddress:(id)arg1;
- (void)setLocatorPort:(unsigned int)arg1;
- (void)setLocatorScheme:(id)arg1;
- (void)setNetworkServiceType:(long long)arg1;
- (void)setNetworkUsed:(id)arg1;
- (void)setPowerPluggedInAtEnd:(BOOL)arg1;
- (void)setPowerPluggedInAtStart:(BOOL)arg1;
- (void)setPowerPluggedInWhenQueued:(BOOL)arg1;
- (void)setProxyUsed:(BOOL)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRequestSize:(int)arg1;
- (void)setRequiresPowerPluggedIn:(BOOL)arg1;
- (void)setResponseReceivedDuration:(long long)arg1;
- (void)setResponseSize:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTcpInfos:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (void)setTransactionComplete:(BOOL)arg1;
- (long long)startTime;
- (id)tcpInfoAtIndex:(unsigned int)arg1;
- (id)tcpInfos;
- (unsigned int)tcpInfosCount;
- (BOOL)timedOut;
- (BOOL)transactionComplete;
- (void)writeTo:(id)arg1;

@end
