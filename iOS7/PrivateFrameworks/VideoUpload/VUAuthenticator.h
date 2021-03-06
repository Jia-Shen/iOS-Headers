/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "JSONHTTPRequestDelegate-Protocol.h"

@class JSONHTTPRequest, NSString;

@interface VUAuthenticator : NSObject <JSONHTTPRequestDelegate>
{
    long long _authenticatorState;
    NSString *_account;
    JSONHTTPRequest *_authenticationRequest;
}

+ (id)sharedAuthenticator;
@property(readonly, nonatomic) NSString *account; // @synthesize account=_account;
@property(readonly, nonatomic) long long authenticatorState; // @synthesize authenticatorState=_authenticatorState;
- (void)_notifyFailure;
- (void)_notifyStateChange;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveObject:(id)arg2;
- (void)invalidateAuthentication;
- (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
- (void)loadCredentials;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2;

@end

