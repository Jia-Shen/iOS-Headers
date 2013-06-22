/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSNumber, UIImage, _UIBarButtonItemAppearanceStorage;

@interface _UINavigationBarAppearanceStorage : NSObject
{
    UIImage *backgroundImage;
    UIImage *miniBackgroundImage;
    NSDictionary *textAttributes;
    NSNumber *titleVerticalAdjustment;
    NSNumber *miniTitleVerticalAdjustment;
    BOOL reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
}

@property(nonatomic) BOOL reversesShadowOffset; // @synthesize reversesShadowOffset;
@property(retain, nonatomic) NSNumber *miniTitleVerticalAdjustment; // @synthesize miniTitleVerticalAdjustment;
@property(retain, nonatomic) NSNumber *titleVerticalAdjustment; // @synthesize titleVerticalAdjustment;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes;
@property(retain, nonatomic) UIImage *miniBackgroundImage; // @synthesize miniBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
- (void)dealloc;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;

@end
