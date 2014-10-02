//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PQLBindable.h"

@class NSString;

@interface GSLibraryState : NSObject <NSSecureCoding, PQLBindable>
{
    int state;
    int lastFeatureSet;
    unsigned long long fseventID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isClean;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
