/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AltAnimation : NSObject
{
    id _completionHandler;
}

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)handleCompletion:(id)arg1;
- (void)dealloc;
- (id)initWithCompletion:(id)arg1;

@end
