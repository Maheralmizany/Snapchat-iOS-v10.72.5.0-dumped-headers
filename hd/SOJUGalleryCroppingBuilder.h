//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUGalleryCroppingBuilder : NSObject
{
    NSNumber *_translationX;
    NSNumber *_translationY;
    NSNumber *_rotation;
    NSNumber *_scale;
}

+ (id)withJUGalleryCropping:(id)arg1;
- (void).cxx_destruct;
- (id)setScale:(id)arg1;
- (id)setRotation:(id)arg1;
- (id)setTranslationY:(id)arg1;
- (id)setTranslationX:(id)arg1;
- (id)build;
- (id)setScaleValue:(double)arg1;
- (id)setRotationValue:(double)arg1;
- (id)setTranslationYValue:(double)arg1;
- (id)setTranslationXValue:(double)arg1;

@end

