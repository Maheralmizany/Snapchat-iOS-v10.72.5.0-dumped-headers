//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCMapLocalityLabel.h"
#import "SCMapTimeAndWeatherView.h"

@class NSString, UIImageView, UILabel;

@interface SCMapLocalityAndWeatherView : UIView <SCMapLocalityLabel, SCMapTimeAndWeatherView>
{
    UILabel *_locality;
    UILabel *_timeAndWeather;
    UIImageView *_weatherIcon;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_labelHeightForSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTimeAndWeatherLabelHidden:(_Bool)arg1;
@property(readonly, nonatomic) _Bool showsExtendedWeatherForLocalTime;
- (void)setTimeText:(id)arg1 weatherImage:(id)arg2 temperatureText:(id)arg3;
- (void)setLocalityText:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

