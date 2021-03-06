/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class LBSGRectangle, LBSUserLocation, NSString;

@interface LBSGeocodeParams : PBCodable
{
    NSString *_resultLanguage;
    int _numFeatureLimit;
    BOOL _hasIncludeBoundingBoxes;
    BOOL _includeBoundingBoxes;
    LBSUserLocation *_location;
    LBSGRectangle *_boundingBox;
    BOOL _hasAddressLinesLimit;
    int _addressLinesLimit;
}

@property(nonatomic) BOOL hasAddressLinesLimit; // @synthesize hasAddressLinesLimit=_hasAddressLinesLimit;
@property(retain, nonatomic) LBSGRectangle *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) LBSUserLocation *location; // @synthesize location=_location;
@property(nonatomic) BOOL includeBoundingBoxes; // @synthesize includeBoundingBoxes=_includeBoundingBoxes;
@property(nonatomic) BOOL hasIncludeBoundingBoxes; // @synthesize hasIncludeBoundingBoxes=_hasIncludeBoundingBoxes;
@property(nonatomic) int numFeatureLimit; // @synthesize numFeatureLimit=_numFeatureLimit;
@property(retain, nonatomic) NSString *resultLanguage; // @synthesize resultLanguage=_resultLanguage;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int addressLinesLimit; // @synthesize addressLinesLimit=_addressLinesLimit;
@property(readonly, nonatomic) BOOL hasBoundingBox;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)dealloc;

@end

