/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INWellnessQuestionTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithWellnessQuestionTypeToConfirm:(long long)arg1;
+ (id)successWithResolvedWellnessQuestionType:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;

@end
