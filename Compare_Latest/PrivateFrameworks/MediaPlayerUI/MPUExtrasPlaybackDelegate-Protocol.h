//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPPlaybackContext, NSArray;

@protocol MPUExtrasPlaybackDelegate <NSObject>
- (void)extrasRequestReloadWithContext:(MPPlaybackContext *)arg1;
- (void)extrasRequestsPlaybackStop;
- (void)extrasRequestsMediaPlayback:(NSArray *)arg1 isBackground:(BOOL)arg2;
@end

