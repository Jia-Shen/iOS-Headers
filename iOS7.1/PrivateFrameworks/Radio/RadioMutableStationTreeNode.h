//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioStationTreeNode.h>

@class NSArray, NSDictionary, NSString, RadioArtworkCollection;

@interface RadioMutableStationTreeNode : RadioStationTreeNode
{
}

@property(copy, nonatomic) NSDictionary *stationDictionary;
@property(nonatomic) long long nodeID;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) BOOL hasAdditionalChildNodes;
@property(nonatomic) int displayStyle;
@property(copy, nonatomic) NSArray *childNodes;
@property(nonatomic) int childNodeLoadingStyle;
@property(copy, nonatomic) RadioArtworkCollection *artworkCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

