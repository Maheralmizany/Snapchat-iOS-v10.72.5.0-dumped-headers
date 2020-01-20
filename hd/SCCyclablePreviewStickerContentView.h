//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPreviewStickerViewContentView.h"

#import "SCPreviewStickerViewCycleable.h"

@class NSString, UIView;

@interface SCCyclablePreviewStickerContentView : SCPreviewStickerViewContentView <SCPreviewStickerViewCycleable>
{
    UIView *_contentView;
    CDUnknownBlockType _onCycle;
}

@property(copy, nonatomic) CDUnknownBlockType onCycle; // @synthesize onCycle=_onCycle;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)cycleStickerToNextStyle;
- (void)layoutSubviews;
- (id)initWithContentView:(id)arg1 onCycle:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

