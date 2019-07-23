/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSubmeshTopology : NSObject {
    unsigned int  _edgeCreaseCount;
    <MDLMeshBuffer> * _edgeCreaseIndices;
    <MDLMeshBuffer> * _edgeCreases;
    unsigned int  _faceCount;
    <MDLMeshBuffer> * _faceTopology;
    unsigned int  _holeCount;
    <MDLMeshBuffer> * _holes;
    unsigned int  _vertexCreaseCount;
    <MDLMeshBuffer> * _vertexCreaseIndices;
    <MDLMeshBuffer> * _vertexCreases;
}

@property (nonatomic) unsigned int edgeCreaseCount;
@property (nonatomic, retain) <MDLMeshBuffer> *edgeCreaseIndices;
@property (nonatomic, retain) <MDLMeshBuffer> *edgeCreases;
@property (nonatomic) unsigned int faceCount;
@property (nonatomic, retain) <MDLMeshBuffer> *faceTopology;
@property (nonatomic) unsigned int holeCount;
@property (nonatomic, retain) <MDLMeshBuffer> *holes;
@property (nonatomic) unsigned int vertexCreaseCount;
@property (nonatomic, retain) <MDLMeshBuffer> *vertexCreaseIndices;
@property (nonatomic, retain) <MDLMeshBuffer> *vertexCreases;

- (void).cxx_destruct;
- (unsigned int)edgeCreaseCount;
- (id)edgeCreaseIndices;
- (id)edgeCreases;
- (unsigned int)faceCount;
- (id)faceTopology;
- (unsigned int)holeCount;
- (id)holes;
- (id)initWithSubmesh:(id)arg1;
- (void)setEdgeCreaseCount:(unsigned int)arg1;
- (void)setEdgeCreaseIndices:(id)arg1;
- (void)setEdgeCreases:(id)arg1;
- (void)setFaceCount:(unsigned int)arg1;
- (void)setFaceTopology:(id)arg1;
- (void)setHoleCount:(unsigned int)arg1;
- (void)setHoles:(id)arg1;
- (void)setVertexCreaseCount:(unsigned int)arg1;
- (void)setVertexCreaseIndices:(id)arg1;
- (void)setVertexCreases:(id)arg1;
- (unsigned int)vertexCreaseCount;
- (id)vertexCreaseIndices;
- (id)vertexCreases;

@end
