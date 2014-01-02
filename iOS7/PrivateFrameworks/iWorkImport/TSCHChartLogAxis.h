/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartValueAxis.h>

// Not exported
@interface TSCHChartLogAxis : TSCHChartValueAxis
{
}

- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)validateUserMaxForDouble:(double)arg1;
- (double)validateUserMinForDouble:(double)arg1;
- (id)userMin;
- (id)userMax;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)interceptForAxis:(id)arg1;
- (id)p_orthogonalAxis;

@end
