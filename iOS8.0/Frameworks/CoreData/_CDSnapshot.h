//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSEntityDescription, NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying>
{
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:31;
    } _cd_flags;
    unsigned int _cd_nullFlags_;
}

+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;
+ (void)_entityDeallocated;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (Class)classForEntity:(id)arg1;
+ (void)initialize;
- (id)_snapshot_;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSEntityDescription *entity;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)description;
- (id)_descriptionValues;
- (void)dealloc;
- (void)finalize;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1;

@end

