//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQDNameMappable.h"

__attribute__((visibility("hidden")))
@interface GQDWPTab : NSObject <GQDNameMappable>
{
    float mPosition;
    int mAlignment;
    struct __CFString *mLeader;
}

+ (const struct StateSpec *)stateForReading;
- (struct __CFString *)leader;
- (int)alignment;
- (float)position;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end
