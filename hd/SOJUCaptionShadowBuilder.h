//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUCaptionShadowBuilder : NSObject
{
    NSNumber *_color;
    NSNumber *_offsetX;
    NSNumber *_offsetY;
    NSNumber *_radius;
}

+ (id)withJUCaptionShadow:(id)arg1;
- (void).cxx_destruct;
- (id)setRadius:(id)arg1;
- (id)setOffsetY:(id)arg1;
- (id)setOffsetX:(id)arg1;
- (id)setColor:(id)arg1;
- (id)build;
- (id)setRadiusValue:(double)arg1;
- (id)setOffsetYValue:(double)arg1;
- (id)setOffsetXValue:(double)arg1;
- (id)setColorValue:(int)arg1;

@end

