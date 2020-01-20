//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEmitterCell, CAEmitterLayer, SCLongPressParticleAnimationConfiguration;

@interface SCLongPressParticleAnimationView : UIView
{
    SCLongPressParticleAnimationConfiguration *_layerConfiguration;
    CAEmitterLayer *_emitterLayer;
    CAEmitterCell *_emitterCellMusic;
    CAEmitterCell *_emitterCellSnapcode;
    CAEmitterCell *_emitterCellLens;
}

+ (id)longPressParticleAnimationViewWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (double)_degreesToRadians:(double)arg1;
- (void)_configureEmitterCell:(id)arg1;
- (void)_setUpEmitterCell;
- (void)_setUpEmitterLayer;
- (void)updateEmitterPosition:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

@end
