//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableSet, UILabel;

@interface SCOnDemandGeofilterCreativeSafeZoneView : UIView
{
    UILabel *_warningLabel;
    NSMutableSet *_viewsInFrame;
    double _backgroundAlpha;
}

- (void).cxx_destruct;
- (void)_hideSafeZone;
- (void)_showSafeZoneWithLabel:(_Bool)arg1;
- (void)_updateViewForState:(long long)arg1;
- (_Bool)_safeZoneContainsObjectFrame:(struct CGRect)arg1;
- (void)clearObjectReferencesInSafeZone;
- (void)respondToGesture:(id)arg1;
- (void)updateBackGroundAlpha:(double)arg1;
- (id)warningLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

