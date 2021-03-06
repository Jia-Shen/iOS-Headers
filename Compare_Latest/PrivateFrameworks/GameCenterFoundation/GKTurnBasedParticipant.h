//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKPlayer, GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject
{
    GKTurnBasedParticipantInternal *_internal;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)matchOutcomeIsValidForDoneState:(int)arg1;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (id)stringForMatchOutcome:(int)arg1;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingStatus;
@property(readonly, retain) GKTurnBasedParticipantInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL isLocalPlayer;
@property(readonly, copy, nonatomic) NSString *playerID;
@property(readonly, retain, nonatomic) GKPlayer *player; // @dynamic player;
@property(readonly, nonatomic) GKPlayer *invitedBy; // @dynamic invitedBy;
@property(copy, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(readonly, nonatomic) BOOL isWinner;
@property(readonly, nonatomic) NSString *matchOutcomeString;
- (id)basicMatchOutcomeString;
@property(readonly, nonatomic) NSString *matchStatusString;
- (void)setStatus:(int)arg1;
@property(readonly, nonatomic) int status;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteMessage; // @dynamic inviteMessage;
@property(nonatomic) int matchOutcome; // @dynamic matchOutcome;
@property(copy, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

