/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class NSMutableArray, NSString, UIImageView;

@interface CAMImageWell : UIButton
{
    int _cameraOrientation;
    UIImageView *__thumbnailImageView;
    UIImageView *__maskImageView;
    NSMutableArray *__dimmingViewQueue;
    NSString *__uuid;
}

@property(retain, nonatomic, setter=_setUuid:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property(readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // @synthesize _dimmingViewQueue=__dimmingViewQueue;
@property(readonly, nonatomic) UIImageView *_maskImageView; // @synthesize _maskImageView=__maskImageView;
@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property(nonatomic) int cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
- (id)_maskImage;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(int)arg2 withCompletionBlock:(id)arg3;
- (struct CGAffineTransform)_affineTransformForImageOrientation:(int)arg1;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3;
- (void)setThumbnailImage:(id)arg1 animated:(BOOL)arg2;
- (void)setCameraOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMImageWellInitialization;

@end
