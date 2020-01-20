//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCShapeView.h"

@class UIColor, UILabel;

@interface SCCircularBadgeView : SCShapeView
{
    UILabel *_label;
    _Bool _hasShadow;
    double _fontSize;
    UIColor *_textColor;
}

@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)setBadgeText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 badgeColor:(id)arg2;
- (id)initWithDiameter:(double)arg1 badgeColor:(id)arg2;

@end

