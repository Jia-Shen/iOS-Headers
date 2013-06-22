/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebBookmarks/WebBookmark.h>

@class NSData, NSString;

@interface WebBookmark (Private)
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1;
- (void)_markSpecial:(unsigned int)arg1;
- (unsigned int)_orderIndex;
- (void)_setParentID:(unsigned int)arg1;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)_setID:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setInserted:(BOOL)arg1;
- (void)_setHidden:(BOOL)arg1;
@property(retain, nonatomic) NSString *serverID;
@property(retain, nonatomic) NSString *syncKey;
@property(retain, nonatomic) NSData *syncData;
@end
