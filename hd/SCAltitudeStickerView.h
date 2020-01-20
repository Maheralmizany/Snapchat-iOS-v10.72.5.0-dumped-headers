//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCInfoStickerView.h"

#import "SCPreviewStickerViewCycleable.h"

@class NSString, SCAltitude, UIImageView, UILabel, UIView;

@interface SCAltitudeStickerView : SCInfoStickerView <SCPreviewStickerViewCycleable>
{
    SCAltitude *_altitudeInfo;
    double _altitudeInMeters;
    double _gaugeSize;
    double _altTextLeftOffset;
    UIView *_altitudeGaugeView;
    UIView *_altitudeNumberView;
    UIImageView *_gaugeBackground;
    UIImageView *_needleTenThousands;
    UIImageView *_needleThousands;
    UIImageView *_needleHundreds;
    UIImageView *_decimal;
    UILabel *_altitudeGaugeValueLabel;
    UILabel *_altitudeGaugeUnitsLabel;
    UILabel *_altitudeNumberViewLabel;
    UILabel *_altitudeNumberViewUnitsLabel;
    UILabel *_altTextLabel;
    unsigned long long _initialUnit;
    _Bool _isPreviewSticker;
    unsigned long long _unit;
    unsigned long long _viewType;
    id <SCAltitudeStickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCAltitudeStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) unsigned long long unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (void)cycleStickerToNextStyle;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)_setAltitudeNumberView;
- (void)_setAltitudeNeedlePoisitons:(double)arg1;
- (void)_setAltitudeToDisplayGauge;
- (void)_updateAltitudeView;
- (id)_unitString;
- (double)_correctedAltitudeValue;
- (void)_switchNextAltitudeViewMode;
- (id)initWithPreviewFrame:(struct CGRect)arg1 altitude:(id)arg2;
- (id)_unitString:(unsigned long long)arg1;
- (id)initWithPickerFrame:(struct CGRect)arg1 altitude:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

