/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "NSCopying-Protocol.h"

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetTrackInternal *_track;
}

+ (id)keyPathsForValuesAffectingTimeRange;
+ (id)mediaTypesForMediaCharacteristics;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_pairedForcedOnlySubtitlesTrack;
- (id)_mostCloselyAssociatedTrackAmongTracks:(id)arg1;
- (id)_followingTrackAmongTracks:(id)arg1;
- (id)_fallbackTrack;
- (id)_allReferencedTracksWithReferenceType:(id)arg1;
- (id)_firstReferencedTrackWithReferenceType:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (float)nominalFrameRate;
- (float)preferredVolume;
- (int)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)locale;
- (id)extendedLanguageTag;
- (id)languageCode;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (CDStruct_e83c9415)timeRange;
- (id)mediaCharacteristics;
- (BOOL)hasMediaCharacteristics:(id)arg1;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (long long)totalSampleDataLength;
- (BOOL)isSelfContained;
- (BOOL)isEnabled;
- (BOOL)isPlayable;
- (id)formatDescriptions;
- (id)mediaType;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (int)statusOfValueForKey:(id)arg1;
@property(readonly, nonatomic) int trackID;
- (id)_assetTrackInspector;
@property(readonly, nonatomic) AVAsset *asset;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)init;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (BOOL)_hasMultipleNonEmptyEdits;

@end

