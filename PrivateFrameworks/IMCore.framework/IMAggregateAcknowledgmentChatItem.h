/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem {
    NSArray * _acknowledgments;
    IMMessageAcknowledgmentChatItem * _fromMeAcknowledgement;
    BOOL  _includesMultiple;
    long long  _latestAcknowledgmentType;
    BOOL  _latestIsFromMe;
}

@property (nonatomic, readonly, copy) NSArray *acknowledgments;
@property (nonatomic, readonly) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement;
@property (nonatomic, readonly) BOOL includesFromMe;
@property (nonatomic, readonly) BOOL includesMultiple;
@property (nonatomic, readonly) long long latestAcknowledgmentType;
@property (nonatomic, readonly) BOOL latestIsFromMe;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithAcknowledgments:(id)arg1;
- (id)acknowledgments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fromMeAcknowledgement;
- (unsigned int)hash;
- (BOOL)includesFromMe;
- (BOOL)includesMultiple;
- (BOOL)isEqual:(id)arg1;
- (long long)latestAcknowledgmentType;
- (BOOL)latestIsFromMe;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
