/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OABPropertiesManager-Protocol.h"

// Not exported
@interface OABDefaultsManager : NSObject <OABPropertiesManager>
{
}

- (_Bool)hidden;
- (_Bool)textPathStrikethrough;
- (_Bool)textPathSmallcaps;
- (_Bool)textPathUnderline;
- (_Bool)textPathItalic;
- (_Bool)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (_Bool)isTextPath;
- (_Bool)isShadowOK;
- (_Bool)isStrokeOK;
- (_Bool)isFillOK;
- (int)shadowSoftness;
- (int)shadowOffsetY;
- (int)shadowOffsetX;
- (int)shadowAlpha;
- (int)shadowType;
- (_Bool)isShadowed;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowType;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowType;
- (int)strokeJoinStyle;
- (int)strokeCapStyle;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokePresetDash;
- (int)strokeCompoundType;
- (int)strokeMiterLimit;
- (int)strokeWidth;
- (int)strokeFgAlpha;
- (id)strokeFillBlipName;
- (unsigned int)strokeFillBlipID;
- (int)strokeFillType;
- (id)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillFocusBottom;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (int)fillFocusLeft;
- (int)fillFocus;
- (int)fillAngle;
- (int)fillBgAlpha;
- (int)fillFgAlpha;
- (int)fillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (_Bool)isStroked;
- (struct EshColor)fillBgColor;
- (struct EshColor)fillFgColor;
- (_Bool)isFilled;

@end

