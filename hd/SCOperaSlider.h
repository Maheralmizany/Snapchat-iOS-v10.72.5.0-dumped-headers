//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, SCOperaSliderScrubber, UIColor, UILabel, UILongPressGestureRecognizer, UIView;

@interface SCOperaSlider : UIControl
{
    UIView *_filledSliderView;
    UIView *_unfilledSliderView;
    UIView *_halfFillSliderView;
    SCOperaSliderScrubber *_scrubber;
    UIView *_containerView;
    UILabel *_scrubberValueLabel;
    NSArray *_breakViews;
    double _sliderWidth;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGRect _prevBounds;
    _Bool _showHalfFillRange;
    _Bool _disableSeekBeyondHalfFillRange;
    float _value;
    float _minimumValue;
    float _maximumValue;
    float _halfFillValue;
    NSArray *_breaks;
    UIColor *_fillColor;
    UIColor *_unfilledColor;
    UIColor *_halfFillColor;
    UIColor *_scrubberColor;
    UIColor *_breakColor;
    id <UIGestureRecognizerDelegate> _gestureRecognizerDelegate;
    id <SCOperaSliderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizerDelegate; // @synthesize gestureRecognizerDelegate=_gestureRecognizerDelegate;
@property(retain, nonatomic) UIColor *breakColor; // @synthesize breakColor=_breakColor;
@property(retain, nonatomic) UIColor *scrubberColor; // @synthesize scrubberColor=_scrubberColor;
@property(retain, nonatomic) UIColor *halfFillColor; // @synthesize halfFillColor=_halfFillColor;
@property(retain, nonatomic) UIColor *unfilledColor; // @synthesize unfilledColor=_unfilledColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSArray *breaks; // @synthesize breaks=_breaks;
@property(nonatomic) _Bool disableSeekBeyondHalfFillRange; // @synthesize disableSeekBeyondHalfFillRange=_disableSeekBeyondHalfFillRange;
@property(nonatomic) _Bool showHalfFillRange; // @synthesize showHalfFillRange=_showHalfFillRange;
@property(nonatomic) float halfFillValue; // @synthesize halfFillValue=_halfFillValue;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)_endSliderGrowAnimation;
- (void)_beginSliderGrowAnimation;
- (void)_didTapSlider:(id)arg1;
- (void)_didSelectNewValue:(double)arg1;
- (void)_longPress:(id)arg1;
- (void)_setupScrubber;
- (void)_setupSlider;
- (void)_setup;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

