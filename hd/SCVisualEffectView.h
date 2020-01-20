//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVisualEffectView.h"

@class UIViewPropertyAnimator, UIVisualEffect;

@interface SCVisualEffectView : UIVisualEffectView
{
    UIVisualEffect *_visualEffect;
    UIViewPropertyAnimator *_propertyAnimator;
    double _intensity;
}

@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void).cxx_destruct;
- (void)_setupPropertyAnimator;
- (id)initWithEffect:(id)arg1 intensity:(double)arg2;
- (id)initWithEffect:(id)arg1;

@end

