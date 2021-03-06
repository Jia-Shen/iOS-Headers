/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKPlayerCellContentView.h>

@class GKScore, GKTouchConsumingView, NSAttributedString;

@interface GKLeaderboardCellContents : GKPlayerCellContentView
{
    GKScore *_score;
    NSAttributedString *_displayName;
    unsigned int _totalScores;
    float _rankWidth;
    int _disclosureStyle;
    GKTouchConsumingView *_touchEater;
}

@property(retain, nonatomic) GKTouchConsumingView *touchEater; // @synthesize touchEater=_touchEater;
@property(nonatomic) int disclosureStyle; // @synthesize disclosureStyle=_disclosureStyle;
@property(nonatomic) float rankWidth; // @synthesize rankWidth=_rankWidth;
@property(nonatomic) unsigned int totalScores; // @synthesize totalScores=_totalScores;
@property(retain, nonatomic) NSAttributedString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
- (void)prepareForReuse;
- (void)updateLines;
- (BOOL)shouldShowPhoto;
- (void)drawRect:(struct CGRect)arg1;
- (id)defaultImage;
- (void)layoutSubviews;
- (id)representedObject;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (float)fontSizeForRank;
@property(readonly, nonatomic) float rankAvailableWidth;
- (int)digits;
- (void)setScore:(id)arg1 updateBackgroundViews:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

