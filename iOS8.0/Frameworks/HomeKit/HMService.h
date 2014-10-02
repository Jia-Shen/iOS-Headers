//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HMAccessory, HMMessageDispatcher, NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface HMService : NSObject <NSSecureCoding>
{
    HMAccessory *_accessory;
    NSString *_serviceType;
    NSString *_name;
    NSString *_associatedServiceType;
    NSArray *_characteristics;
    NSNumber *_instanceID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, copy, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)serviceTypeDescription;
- (void)addCharacteristic:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (BOOL)hasCharacteristic:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (void)configure:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
