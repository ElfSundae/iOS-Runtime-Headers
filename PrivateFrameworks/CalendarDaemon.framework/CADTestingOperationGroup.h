/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADTestingDatabasePath:(id /* block */)arg1;
- (void)CADTestingSetDatabasePath:(id)arg1 reply:(id /* block */)arg2;
- (BOOL)accessGrantedToPerformSelector:(SEL)arg1;

@end
