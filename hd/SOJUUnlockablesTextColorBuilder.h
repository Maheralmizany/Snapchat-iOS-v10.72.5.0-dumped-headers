//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesTextColorBuilder : NSObject
{
    NSArray *_color;
    NSArray *_colorStop;
    NSString *_colorTransform;
    NSNumber *_colorGradientAngleDegree;
    NSArray *_colorTransformParams;
}

+ (id)withJUUnlockablesTextColor:(id)arg1;
- (void).cxx_destruct;
- (id)setColorTransformParams:(id)arg1;
- (id)setColorGradientAngleDegree:(id)arg1;
- (id)setColorTransform:(id)arg1;
- (id)setColorStop:(id)arg1;
- (id)setColor:(id)arg1;
- (id)build;
- (id)setColorGradientAngleDegreeValue:(double)arg1;
- (id)setColorTransformEnum:(long long)arg1;

@end
