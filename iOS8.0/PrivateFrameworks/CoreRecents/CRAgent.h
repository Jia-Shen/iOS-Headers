//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class CREventHarvester, NSMutableSet, NSString, NSXPCListener, _CRRecentsLibrary;

@interface CRAgent : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    _CRRecentsLibrary *_library;
    NSMutableSet *_clients;
    CREventHarvester *_harvester;
}

- (void)stop;
- (void)start;
- (void)startHarvestingEvents;
- (void)_lockStateChanged:(id)arg1;
- (void)_adjustLibraryStoreSyncBehaviorWithLockedState:(BOOL)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)daemonLibraryForClient:(id)arg1;
- (id)clientForConnection:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
