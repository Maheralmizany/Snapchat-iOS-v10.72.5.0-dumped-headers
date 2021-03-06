//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UIImageView, UILabel, UIView;

@interface SCAltitudeFilterView : SCOverlayFilterView
{
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
    unsigned long long _unit;
    unsigned long long _viewType;
    id <SCAltitudeFilterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCAltitudeFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) unsigned long long unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (void)setDisplayed:(_Bool)arg1;
- (void)_setAltitudeNumberView;
- (void)_setAltitudeNeedlePoisitons:(double)arg1;
- (void)_setAltitudeToDisplayGauge;
- (id)displayName;
- (void)_updateAltitudeView;
- (void)updateConfig:(id)arg1;
- (id)_unitString;
- (double)_correctedAltitudeValue;
- (void)_switchNextAltitudeViewMode;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;

@end

