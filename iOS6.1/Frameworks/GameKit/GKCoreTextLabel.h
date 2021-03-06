/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UILabel.h"

@class GKCoreTextRenderer, NSAttributedString, NSString;

@interface GKCoreTextLabel : UILabel
{
    struct {
        struct CGSize constraints;
        struct CGSize sizeThatFit;
        float fontSize;
    } _sizeThatFitsCache;
    NSAttributedString *_attributedString;
    float _leading;
    BOOL _shouldDrawEmoji;
    BOOL _shouldSizeToTextImageBounds;
    NSAttributedString *_gkAttributedText;
    BOOL _forceNaturalAlignment;
    GKCoreTextRenderer *_coreTextRenderer;
}

@property(retain, nonatomic) GKCoreTextRenderer *coreTextRenderer; // @synthesize coreTextRenderer=_coreTextRenderer;
@property(nonatomic) BOOL forceNaturalAlignment; // @synthesize forceNaturalAlignment=_forceNaturalAlignment;
@property(nonatomic) BOOL shouldSizeToTextImageBounds; // @synthesize shouldSizeToTextImageBounds=_shouldSizeToTextImageBounds;
@property(nonatomic) BOOL shouldDrawEmoji; // @synthesize shouldDrawEmoji=_shouldDrawEmoji;
@property(nonatomic) float leading; // @synthesize leading=_leading;
- (float)preferredHeightForWidth:(float)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 calculatedFontSize:(float *)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *truncationSymbol;
@property(retain, nonatomic) id contentPath;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned int actualLineCount; // @dynamic actualLineCount;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setBaselineAdjustment:(int)arg1;
- (int)baselineAdjustment;
- (void)invalidateAttributedString;
@property(readonly, nonatomic) float baselineYOffset;
- (struct __CTParagraphStyle *)paragraphStyleWithLineHeight:(float)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)attributedStringForBounds:(struct CGRect)arg1;
- (void)setMinimumScaleFactor:(float)arg1;
- (float)minimumScaleFactor;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_gkAttributedText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

