/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MOVStreamReader : NSObject {
    <MOVStreamReaderDelegate> * _delegate;
    bool  _l010OutputFormatRAW14L016;
    bool  _rawBayerMSBReplication;
    AVURLAsset * m_asset;
    AVAssetReader * m_assetReader;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >="__tree_"{__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >="__begin_node_"^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}  m_metadataDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__value_; 
        } __end_cap_; 
    }  m_orderedMetadataStreamNames;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__value_; 
        } __end_cap_; 
    }  m_orderedStreamNames;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >="__tree_"{__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData> > >="__begin_node_"^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}  m_streamDataMap;
}

@property (retain) <MOVStreamReaderDelegate> *delegate;
@property bool l010OutputFormatRAW14L016;
@property bool rawBayerMSBReplication;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsMetadataStream:(id)arg1;
- (bool)containsStream:(id)arg1;
- (struct __CVBuffer { }*)copyNextFrameForStream:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (bool)endOfStream;
- (id)findAllAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2;
- (id)findAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2 forKey:(id)arg3;
- (id)getAllMetadataStreams;
- (id)getAllStreams;
- (double)getFrameRateForStream:(id)arg1;
- (id)getKeyFromMetadataTrack:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getMinFrameDurationForStream:(id)arg1;
- (id)getRelatedStreamForStreamId:(id)arg1;
- (id)getRelationSpecifierForStreamId:(id)arg1;
- (struct CGSize { double x1; double x2; })getSizeForStream:(id)arg1;
- (id)getStreamsRelatedToStream:(id)arg1;
- (id)getUnknownMetadataStreamsAssociatedTo:(id)arg1;
- (id)grabNextMetadataItemsOfTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3 error:(id*)arg4;
- (id)grabNextMetadataOfStream:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)grabNextMetadataOfStream:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 error:(id*)arg3;
- (bool)hasFinishedReading;
- (bool)hasReachedEndOfMetadataStream:(id)arg1;
- (bool)hasReachedEndOfStream:(id)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)l010OutputFormatRAW14L016;
- (id)metadataForMovie;
- (id)movstreamIOMetadataForMovie;
- (unsigned int)pixelFormatForStream:(id)arg1;
- (int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 delegate:(id)arg3;
- (int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 streamEncodingType:(id)arg3 inputPixelFormat:(unsigned int)arg4 delegate:(id)arg5;
- (bool)rawBayerMSBReplication;
- (bool)resetReader:(id*)arg1;
- (bool)resetReaderTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setL010OutputFormatRAW14L016:(bool)arg1;
- (void)setRawBayerMSBReplication:(bool)arg1;
- (id)streamIdFromTrackStreamTypeIdentifier:(id)arg1;
- (id)trackForStream:(id)arg1;
- (id)trackMetadataForStream:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForStream:(id)arg1;

@end
