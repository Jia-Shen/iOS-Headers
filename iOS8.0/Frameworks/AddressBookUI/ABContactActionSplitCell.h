//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABLabeledCell.h>

@class UIButton;

@interface ABContactActionSplitCell : ABLabeledCell
{
    UIButton *_leftLabel;
    UIButton *_rightLabel;
}

@property(readonly, nonatomic) UIButton *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UIButton *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;
- (id)constantConstraints;
- (void)setLabelTextAttributes:(id)arg1;
- (id)rightMostView;
- (id)labelView;
- (float)minCellHeight;
- (id)standardButton;
- (void)setCardGroupItem:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
