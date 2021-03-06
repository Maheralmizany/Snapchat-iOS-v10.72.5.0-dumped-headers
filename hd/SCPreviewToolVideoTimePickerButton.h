//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPreviewToolButtonBase.h"

#import "SCPreviewToolbarTimerButton.h"

@class NSNumber, NSString, UIImageView;

@interface SCPreviewToolVideoTimePickerButton : SCPreviewToolButtonBase <SCPreviewToolbarTimerButton>
{
    long long _mode;
    NSNumber *_time;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_animateView:(id)arg1 toScale:(double)arg2 withDuration:(double)arg3 delay:(double)arg4 highlighted:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_updateButtonState;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setShowingHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

