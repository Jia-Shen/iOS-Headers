//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPPackageWriter.h>

@class NSObject<OS_dispatch_queue>, TSPDirectoryPackageDataWriter;

__attribute__((visibility("hidden")))
@interface TSPBundleWriter : TSPPackageWriter
{
    NSObject<OS_dispatch_queue> *_componentFileIOQueue;
    TSPDirectoryPackageDataWriter *_dataWriter;
}

+ (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2;
- (void).cxx_destruct;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalSize:(unsigned long long)arg2 originalCRC:(unsigned int)arg3;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(id)arg1;
- (BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id *)arg4;
- (id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 decryptionKey:(id)arg3 preferredFilename:(id)arg4 error:(id *)arg5;
- (id)targetDataURLForPath:(id)arg1;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(int)arg7 encryptionKey:(id)arg8 originalDocumentPackage:(id)arg9 originalSuppportPackage:(id)arg10 fileCoordinatorDelegate:(id)arg11 progress:(id)arg12 error:(id *)arg13;

@end
