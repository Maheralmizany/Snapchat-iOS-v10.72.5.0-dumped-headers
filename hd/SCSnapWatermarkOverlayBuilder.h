//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapWatermarkOverlayBuilder.h"

@class NSString, SCSnapWatermarkOverlayParameters;

@interface SCSnapWatermarkOverlayBuilder : NSObject <SCSnapWatermarkOverlayBuilder>
{
    SCSnapWatermarkOverlayParameters *_parameters;
    id <SCSnapWatermarkOverlayLayout> _layout;
}

- (void).cxx_destruct;
- (id)_watermarkImage;
- (id)_watermarkTextAttributesForHeight:(double)arg1;
- (id)_subtitleTextAttributesForHeight:(double)arg1;
- (id)_titleTextAttributesForHeight:(double)arg1;
- (void)_drawText:(id)arg1 textAttributes:(id)arg2 fittingForRect:(struct CGRect)arg3;
- (void)_drawWatermarkInRect:(struct CGRect)arg1;
- (double)_calculateApproximateFontHeightForString:(id)arg1 inDrawingRect:(struct CGRect)arg2;
- (void)_drawWatermarkTextInRect:(struct CGRect)arg1;
- (void)_drawSubtitleInsteadTitleInRect:(struct CGRect)arg1;
- (void)_drawSubtitleInRect:(struct CGRect)arg1;
- (void)_drawTitleInRect:(struct CGRect)arg1;
- (void)_drawUsernameWithLayout:(id)arg1;
- (void)_drawWatermarkImageWithLayout:(id)arg1;
- (id)buildImageOverlayWithContentSize:(struct CGSize)arg1;
- (void)_prepareLayout;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

