/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchResultSerializer : NSObject {
    unsigned int _byteVector;
    unsigned int _byteVectorCapacity;
    unsigned int _byteVectorCnt;
    BOOL _completed;
    BOOL _forForwarding;
    BOOL _inProc;
    Class _lastResultClass;
    BOOL _respondsToAuxiliarySubtitleUTF8String;
    BOOL _respondsToAuxiliaryTitleUTF8String;
    BOOL _respondsToBadgeValue;
    BOOL _respondsToIdentifier;
    BOOL _respondsToSubtitleUTF8String;
    BOOL _respondsToSummaryUTF8String;
    BOOL _respondsToTitleUTF8String;
    BOOL _respondsToURL;
    NSMutableArray *_sections;
}

@property (nonatomic, readonly) BOOL completed;

- (void).cxx_destruct;
- (unsigned int)_allocateSize:(unsigned int)arg1;
- (id)_convertConformingResult:(id)arg1;
- (BOOL)appendResult:(id)arg1;
- (BOOL)appendSection:(id)arg1;
- (BOOL)appendSerializer:(id)arg1;
- (unsigned int)byteVector;
- (unsigned int)byteVectorCount;
- (BOOL)completed;
- (void)dealloc;
- (id)getSections;
- (id)init;
- (id)initWithInitialCapacity:(unsigned int)arg1;
- (id)initWithInitialCapacity:(unsigned int)arg1 inProc:(BOOL)arg2;
- (BOOL)lockedAppendResult:(id)arg1 toSection:(id)arg2;
- (unsigned int)sectionCount;
- (void)serialize;

@end