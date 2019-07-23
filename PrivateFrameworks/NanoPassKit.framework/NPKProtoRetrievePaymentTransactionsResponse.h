/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRetrievePaymentTransactionsResponse : PBCodable <NSCopying> {
    NSMutableArray * _transactionPassIDs;
    NSMutableArray * _transactionsBytes;
}

@property (nonatomic, retain) NSMutableArray *transactionPassIDs;
@property (nonatomic, retain) NSMutableArray *transactionsBytes;

+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;

- (void).cxx_destruct;
- (void)addTransactionPassIDs:(id)arg1;
- (void)addTransactionsBytes:(id)arg1;
- (void)clearTransactionPassIDs;
- (void)clearTransactionsBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTransactionPassIDs:(id)arg1;
- (void)setTransactionsBytes:(id)arg1;
- (id)transactionPassIDs;
- (id)transactionPassIDsAtIndex:(unsigned int)arg1;
- (unsigned int)transactionPassIDsCount;
- (id)transactionsBytes;
- (id)transactionsBytesAtIndex:(unsigned int)arg1;
- (unsigned int)transactionsBytesCount;
- (void)writeTo:(id)arg1;

@end
