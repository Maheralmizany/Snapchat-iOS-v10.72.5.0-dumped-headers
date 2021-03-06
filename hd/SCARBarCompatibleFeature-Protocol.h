//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, SCARBarItem, UIGestureRecognizer;

@protocol SCARBarCompatibleFeature <NSObject>
@property(readonly, nonatomic) SCARBarItem *arBarItem;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)hideOriginalUIForDisplayInARBar:(id <SCFeatureARBar>)arg1;
- (void)restoreFromARBar:(id <SCFeatureARBar>)arg1;
- (void)deactivateFromARBar:(id <SCFeatureARBar>)arg1;
- (void)cancelPrepareForActivationFromARBar:(id <SCFeatureARBar>)arg1;
- (_Bool)activateFromPoint:(struct CGPoint)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 arBar:(id <SCFeatureARBar>)arg3;
- (void)prepareForActivationFromPoint:(struct CGPoint)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 arBar:(id <SCFeatureARBar>)arg3;
@end

