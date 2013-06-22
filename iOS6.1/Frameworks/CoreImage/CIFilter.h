/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying>
{
    void *_priv[8];
}

+ (id)filterNamesInCategories:(id)arg1;
+ (id)filterNamesInCategory:(id)arg1;
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;
+ (id)filterWithName:(id)arg1;
+ (id)_filterFromProperties:(id)arg1;
+ (id)_filterArrayFromProperties:(id)arg1;
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect)arg2;
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
+ (id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(struct CGRect)arg2 error:(id *)arg3;
+ (id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
+ (id)customAttributes;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyFilterWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setDefaults;
- (id)attributes;
@property(readonly, nonatomic) CIImage *outputImage; // @dynamic outputImage;
- (id)outputKeys;
- (id)inputKeys;
- (void)dealloc;
- (id)name;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (BOOL)_isIdentity;
- (id)_filterClassDescription;

@end
