//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFeature, SCTimePickerItem;

@protocol SCPreviewFeatureTimerDelegate <NSObject>
- (void)featureTimerDidBeginLongPress:(SCFeature *)arg1;
- (void)featureTimerWillUpdateOnSnapEditingState:(SCFeature *)arg1 withSelectedItem:(SCTimePickerItem *)arg2;
@end

