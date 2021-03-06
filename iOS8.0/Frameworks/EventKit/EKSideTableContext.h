//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKSideTableContext : NSManagedObjectContext
{
    NSString *_path;
}

- (id)_persistentStoreCoordinator;
- (id)_managedObjectModel;
- (void)_removeSqliteFiles;
- (id)_urlForPersistentStore;
- (id)_pathForPersistentStore;
- (id)rootDirectory;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (id)_settingForKey:(id)arg1;
- (id)delayedProximityAlarms;
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)nextAlarmFireTime;
- (id)insertNewAlarm;
- (void)deleteAllAlarms;
- (id)_alarmsMatchingPredicate:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

