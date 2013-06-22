/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACUIAppDescription, NSDate, NSURL;

@interface ACUIAppInstaller : NSObject
{
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    BOOL _resultOfLastReachabilityCheck;
    NSDate *_dateOfLastInstallationCheck;
    BOOL _resultOfLastInstallationCheck;
    NSURL *_publisherURL;
    id <ACUIAppInstallerDelegate> _delegate;
}

@property(nonatomic) __weak id <ACUIAppInstallerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *publisherURL; // @synthesize publisherURL=_publisherURL;
- (void).cxx_destruct;
- (void)start;
@property(readonly, nonatomic) BOOL isDownloadable;
@property(readonly, nonatomic) BOOL isInstalled;
- (id)initForAppWithDescription:(id)arg1;

@end
