//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer;

@interface SCRoundedCornersView : UIView
{
    CAShapeLayer *_maskLayer;
    unsigned long long _corners;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void).cxx_destruct;
- (void)updateMaskLayer;
- (void)layoutSubviews;
- (void)setRoundedCorners:(unsigned long long)arg1 radius:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 roundedCorners:(unsigned long long)arg2 radius:(double)arg3;

@end

