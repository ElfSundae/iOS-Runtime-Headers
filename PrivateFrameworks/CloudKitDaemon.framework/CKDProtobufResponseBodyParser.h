/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtobufResponseBodyParser : NSObject <CKDResponseBodyParser> {
    unsigned int _curObjectLength;
    BOOL _isParsing;
    id /* block */ _logParsedObjectBlock;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    } _mescalSignature;
    Class _messageClass;
    id /* block */ _objectParsedBlock;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSData *_parserData;
    NSError *_parserError;
    NSMutableData *_tailParserData;
}

@property (nonatomic) unsigned int curObjectLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isParsing;
@property (nonatomic, copy) id /* block */ logParsedObjectBlock;
@property (nonatomic) struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; } mescalSignature;
@property (nonatomic) Class messageClass;
@property (nonatomic, copy) id /* block */ objectParsedBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *parseQueue;
@property (nonatomic, retain) NSData *parserData;
@property (nonatomic, retain) NSError *parserError;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableData *tailParserData;

- (void).cxx_destruct;
- (BOOL)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (BOOL)_parseObjects:(BOOL)arg1;
- (unsigned int)curObjectLength;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)init;
- (BOOL)isParsing;
- (id /* block */)logParsedObjectBlock;
- (struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })mescalSignature;
- (Class)messageClass;
- (id /* block */)objectParsedBlock;
- (id)parseQueue;
- (id)parserData;
- (id)parserError;
- (void)processData:(id)arg1;
- (void)setCurObjectLength:(unsigned int)arg1;
- (void)setIsParsing:(BOOL)arg1;
- (void)setLogParsedObjectBlock:(id /* block */)arg1;
- (void)setMescalSignature:(struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })arg1;
- (void)setMessageClass:(Class)arg1;
- (void)setObjectParsedBlock:(id /* block */)arg1;
- (void)setParseQueue:(id)arg1;
- (void)setParserData:(id)arg1;
- (void)setParserError:(id)arg1;
- (void)setTailParserData:(id)arg1;
- (id)tailParserData;

@end
