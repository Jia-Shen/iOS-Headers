//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIAssociationTable : NSObject
{
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (BOOL)hasRightValuesForLeftValue:(id)arg1;
- (BOOL)hasLeftValuesForRightValue:(id)arg1;
- (id)rightValueEnumerableForLeftValue:(id)arg1;
- (id)leftValueEnumerableForRightValue:(id)arg1;
- (id)rightValuesForLeftValue:(id)arg1;
- (id)leftValuesForRightValue:(id)arg1;
- (id)rightValueEnumerable;
- (id)leftValueEnumerable;
- (id)rightValues;
- (id)leftValues;
- (BOOL)isEmpty;
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithLeftValueOptions:(unsigned int)arg1 rightValueOptions:(unsigned int)arg2;

@end
