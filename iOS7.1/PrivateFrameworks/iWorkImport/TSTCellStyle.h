//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

__attribute__((visibility("hidden")))
@interface TSTCellStyle : TSSStyle
{
}

+ (void)initDefaultPropertyMap:(id)arg1 forTableArea:(int)arg2 presetIndex:(unsigned int)arg3 colors:(id)arg4 alternate:(int)arg5;
+ (void)p_initFooterRowRegionPropertyMap:(id)arg1 presetIndex:(unsigned int)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)arg1 presetIndex:(unsigned int)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderRowRegionPropertyMap:(id)arg1 presetIndex:(unsigned int)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initBodyRegionPropertyMap:(id)arg1 presetIndex:(unsigned int)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)textStyleIDForPreset:(unsigned int)arg1 andTableArea:(int)arg2;
+ (id)styleIDForPreset:(unsigned int)arg1 andTableArea:(int)arg2;
+ (id)regionStringForTableArea:(int)arg1;
+ (id)nonEmphasisCellProperties;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
- (SEL)mapThemePropertyMapSelector;
- (void)tstMapCellStylePropertyMap:(id)arg1;
- (void)dealloc;
- (void)validate;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveCellStyleToArchive:(struct CellStyleArchive *)arg1 archiver:(id)arg2;
- (void)loadCellStyleFromArchive:(const struct CellStyleArchive *)arg1 unarchiver:(id)arg2;
- (void)saveCellStylePropertiesToArchive:(struct CellStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)loadCellStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CellStylePropertiesArchive *)arg2 unarchiver:(id)arg3;

@end

