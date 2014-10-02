//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SKUILayoutCache : NSObject
{
    NSMutableArray *_batchedRequests;
    id <SKUILayoutCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property(nonatomic) __weak id <SKUILayoutCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_populateCache;
- (void)_layoutRequestsInRange:(struct _NSRange)arg1;
- (void)_addLayoutBatch:(id)arg1;
- (struct _NSRange)populateCacheWithLayoutRequests:(id)arg1;
- (id)layoutForIndex:(int)arg1 forced:(BOOL)arg2;
- (id)layoutForIndex:(int)arg1;
- (void)commitLayoutRequests;
- (struct _NSRange)addLayoutRequests:(id)arg1;
- (id)init;

@end
