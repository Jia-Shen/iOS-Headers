/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject
{
    float _stallDistance;
    float _maxDimension;
    float _thumbRegion;
    int _orientation;
    int _directions[7];
    struct {
        float horizontal;
        float vertical;
    } _axisFlipper;
    float _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    float _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    float _lastDegrees;
    float _startDegrees;
    float _startDistance;
    BOOL _startedInGutter;
    double _requireDelayBeforeTracking;
    BOOL _requireUp;
    BOOL _thumbRejectionEnabled;
    float _thumbRejectionDistance;
    int _state;
    int _previousState;
    int _direction;
    float _directionalSlope;
    struct SCRCFingerState _finger[2];
    unsigned int _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    float _distance;
    unsigned int _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    struct {
        id track;
        id tap;
        id gutterUp;
        id splitTap;
    } _delegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct {
        char down;
        char dead;
        char gutter;
        unsigned int current;
        unsigned int digits;
        unsigned int count;
        struct CGRect frame;
        struct CGPoint location[5];
        struct CGPoint locationPerTap[5];
        unsigned int digitsPerTap;
        double thisTime;
        double lastTime;
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    struct {
        SCRCGestureFactory *factory;
        char isSplitting;
        char isTapping;
        char fastTrack;
        char tapDead;
        char timedOut;
        char active;
        unsigned int fingerIdentifier;
        double fingerDownTime;
        struct CGPoint startTapLocation;
        struct CGPoint lastTapLocation;
        struct CGPoint primaryFingerLocation;
        float tapDistance;
        int state;
    } _split;
}

- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (void)setFlickSpeed:(float)arg1;
- (float)flickSpeed;
- (void)setTapSpeed:(float)arg1;
- (float)tapSpeed;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (void)dealloc;
- (struct CGRect)mainFrame;
- (struct CGRect)_currentTapRect;
- (void)_updateMultiTapFrame;
- (void)_updateTapState;
- (void)_handleTap;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleGutterUp;
- (void)_processUpAndPost:(BOOL)arg1;
- (void)_updateStartWithPoint:(struct CGPoint)arg1 time:(double)arg2;
- (BOOL)_handleSplitTap;
- (BOOL)_handleSplitEvent:(id)arg1;
- (void)handleGestureEvent:(id)arg1;
- (void)_down:(id)arg1;
- (void)_drag:(id)arg1;
- (void)_up;
- (void)reset;
- (float)directionalSlope;
- (int)gestureState;
- (int)direction;
- (float)vector;
- (float)velocity;
- (float)distance;
- (unsigned int)absoluteFingerCount;
- (unsigned int)fingerCount;
- (unsigned int)tapCount;
- (BOOL)tapIsDown;
- (struct CGPoint)rawLocation;
- (struct CGPoint)startLocation;
- (struct CGPoint)endLocation;
- (struct CGRect)tapFrame;
- (struct CGRect)multiTapFrame;
- (struct CGPoint)tapPoint;
- (struct CGPoint)tapPointWeightedToSides;
- (double)tapInterval;
- (id)gestureStateString;
@property(nonatomic) BOOL thumbRejectionEnabled; // @synthesize thumbRejectionEnabled=_thumbRejectionEnabled;

@end

