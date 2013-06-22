/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface NSPredicate : NSObject <NSCoding, NSCopying>
{
    void *_reserved;
}

+ (id)predicateWithBlock:(id)arg1;
+ (id)predicateWithValue:(BOOL)arg1;
+ (id)predicateWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (struct __CFLocale *)retainedLocale;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned int)arg2;
+ (void)initialize;
- (id)predicateFormat;
- (id)description;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateMetadataDescription;

@end
