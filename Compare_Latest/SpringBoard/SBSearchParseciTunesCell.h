//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchParsecCell.h"

@class UITextView;

@interface SBSearchParseciTunesCell : SBSearchParsecCell
{
    UITextView *_descriptionTextView;
}

+ (id)ratingImageForRating:(float)arg1;
+ (_Bool)supportsSection:(id)arg1 result:(id)arg2;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (id)subtitleLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

