//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PDNotificationService;

@protocol PDDatabaseManagerNotificationServicesDelegate <NSObject>
- (void)handlePushDisabledForPassWithUniqueIdentifier:(NSString *)arg1 notificationService:(PDNotificationService *)arg2;
- (void)handlePushEnabledForPassWithUniqueIdentifier:(NSString *)arg1 notificationService:(PDNotificationService *)arg2;
- (void)handleDeletionOfPassWithUniqueIdentifier:(NSString *)arg1 notificationService:(PDNotificationService *)arg2;
- (void)handleInsertionOfPassWithUniqueIdentifier:(NSString *)arg1 notificationService:(PDNotificationService *)arg2;
@end

