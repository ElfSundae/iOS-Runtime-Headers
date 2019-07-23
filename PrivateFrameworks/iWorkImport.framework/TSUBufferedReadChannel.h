/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {
    NSArray *_blockInfos;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
    BOOL _isStreamOutputDone;
    NSObject<OS_dispatch_queue> *_readQueue;
    unsigned long _sourceLength;
    long long _sourceOffset;
    unsigned long _sourceReadBufferSize;
    <TSUReadChannel> *_sourceReadChannel;
    NSError *_sourceReadChannelError;
    unsigned long _streamOutputLength;
    long long _streamOutputOffset;
    unsigned long _streamOutputOutstandingLength;
    <TSUStreamReadChannel> *_streamReadChannel;
    id /* block */ _streamReadChannelBlock;
    id /* block */ _streamReadChannelSourceHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long)arg2 isReadDone:(BOOL*)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long)arg2 handler:(id /* block */)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long)arg2;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(id /* block */)arg3;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(id /* block */)arg4;
- (BOOL)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setLowWater:(unsigned long)arg1;
- (void)setStreamReadChannelSourceHandler:(id /* block */)arg1;

@end
