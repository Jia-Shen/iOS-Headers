/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3SqliteDatabaseContext, NSString;

@interface ML3SqliteDatabase : NSObject
{
    ML3SqliteDatabaseContext *_mainDatabaseContext;
    ML3SqliteDatabaseContext *_backgroundDatabaseContext;
    struct dispatch_queue_s *_backgroundQueue;
    NSString *_path;
    BOOL _enableWrites;
}

+ (BOOL)migrateToCurrentUserVersionUsingHandle:(struct sqlite3 *)arg1;
+ (BOOL)migrateFromVersion:(int)arg1 outUserVersion:(int *)arg2 usingHandle:(struct sqlite3 *)arg3;
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(struct sqlite3 *)arg1;
+ (BOOL)userVersionMatchesSystemUsingHandle:(struct sqlite3 *)arg1;
+ (int)userVersionUsingHandle:(struct sqlite3 *)arg1;
+ (BOOL)buildDatabaseTablesUsingHandle:(struct sqlite3 *)arg1 usingTransaction:(BOOL)arg2;
+ (int)userVersionCurrent;
+ (id)systemCurrentLanguage;
+ (id)allSchemaSQL;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 *)arg2;
+ (void)stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(char *)arg2 didFinish:(char *)arg3;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (void)closeDatabaseHandle:(struct sqlite3 *)arg1;
+ (void)registerCustomCallbacksOnHandle:(struct sqlite3 *)arg1;
+ (void)registerFunctionsOnHandle:(struct sqlite3 *)arg1;
+ (void)limitCacheSize:(struct sqlite3 *)arg1;
+ (BOOL)attachAuxiliaryDatabases:(struct sqlite3 *)arg1;
+ (id)databasePath;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (BOOL)coerceValidDatabase;
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(struct sqlite3 **)arg1;
- (BOOL)buildDatabaseTables;
- (void)performTransactionWithBlock:(id)arg1;
- (void)didRollbackInDatabaseContext:(id)arg1;
- (void)didCommitInDatabaseContext:(id)arg1;
- (void)performOperationInBackground:(id)arg1;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (void)accessDatabaseContextUsingBlock:(id)arg1;
- (void)reconnectToDatabase;
- (void)reconnectBackgroundDatabaseContext;
- (void)reconnectMainDatabaseContext;
- (id)backgroundQueue_backgroundDatabaseContext;
- (id)newDatabaseContext;
- (BOOL)executeSQL:(id)arg1;
- (BOOL)requiresPostProcessing;
- (struct sqlite3 *)openedDatabaseHandle;
- (BOOL)openDatabaseHandle:(struct sqlite3 **)arg1;
- (BOOL)_openDatabaseWithOpenHandler:(id)arg1;
- (BOOL)canWriteToDatabase;
- (void)_debugLoggingOptionsDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 enableWrites:(BOOL)arg2;

@end

