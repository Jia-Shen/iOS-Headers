/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/ICCameraFolder.h>

@class NSString;

@interface PTPCameraFolder : ICCameraFolder
{
    void *_ptpCameraFolderProperties;
    NSString *_path;
}

- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned int)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;
- (void)dealloc;
- (void)finalize;
@property(readonly) unsigned int type;
@property(readonly) unsigned int storageID;
@property(readonly) unsigned int objHandle;
@property(copy) id info;
- (BOOL)deleteItemFromCamera:(id)arg1;
- (void)refreshInfo;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (id)folderForObjectHandle:(unsigned long)arg1;
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int *)arg3;
- (BOOL)hasDCIMParent;
- (void)enumerateContent;
- (id)description;
@property(retain) NSString *path; // @synthesize path=_path;

@end
