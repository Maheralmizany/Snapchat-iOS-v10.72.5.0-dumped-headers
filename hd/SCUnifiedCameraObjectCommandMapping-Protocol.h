//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCImageProcessCommand, SCStackedImageProcessCommandContainer;

@protocol SCUnifiedCameraObjectCommandMapping <NSObject>
@property(readonly, nonatomic) __weak Class supportedCommandSubclass;
- (SCImageProcessCommand *)unifiedCameraObjectCommandFromStackedContainer:(SCStackedImageProcessCommandContainer *)arg1 isVideo:(_Bool)arg2;
@end

