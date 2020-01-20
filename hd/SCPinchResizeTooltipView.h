//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UILabel, UIView;

@interface SCPinchResizeTooltipView : UIImageView
{
    UIView *_tooltipLabelContainer;
    UILabel *_tooltipLabel;
    double _lastStartTime;
    double _lastStopTime;
    _Bool _shouldCheckTooltipSeenState;
    _Bool _didResizeBrush;
    unsigned long long _currentLoopCount;
}

@property(nonatomic) unsigned long long currentLoopCount; // @synthesize currentLoopCount=_currentLoopCount;
@property(nonatomic) _Bool didResizeBrush; // @synthesize didResizeBrush=_didResizeBrush;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)hide;
- (void)_showPinchResizeTooltipForLoopCount:(double)arg1;
- (void)show;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

