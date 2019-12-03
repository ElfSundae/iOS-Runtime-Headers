/* Generated by RuntimeBrowser.
 */

@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>

@required

- (_MTLIndirectDispatchThreadgroupsArguments *)dispatchThreadgroupsArguments;
- (_MTLIndirectDispatchThreadsArguments *)dispatchThreadsArguments;
- (unsigned long long)getCommandType;
- (void*)getKernelBufferAtIndex:(unsigned long long)arg1;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })getStageInRegion;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (bool)hasBarrier;

@end
