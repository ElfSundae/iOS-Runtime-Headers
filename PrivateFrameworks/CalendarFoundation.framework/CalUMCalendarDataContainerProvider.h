/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_calendarGroupContainer;
- (id)_containerForPersonaIdentifier:(id)arg1 containerProviderBlock:(id /* block */)arg2;
- (void)_performBlockAsPersonaWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (id)containerForPersonaIdentifier:(id)arg1;

@end
