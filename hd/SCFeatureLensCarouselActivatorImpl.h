//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensCarouselActivator.h"

@class NSString, NSUUID, SCARBarItem;

@interface SCFeatureLensCarouselActivatorImpl : SCFeature <SCFeatureLensCarouselActivator>
{
    SCARBarItem *_arBarItem;
    long long _cameraViewType;
    id <SCFeatureLensCarouselActivatorDelegate> delegate;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <SCFeatureLensCarouselActivatorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)hideOriginalUIForDisplayInARBar:(id)arg1;
- (void)deactivateFromARBar:(id)arg1;
- (void)restoreFromARBar:(id)arg1;
- (void)cancelPrepareForActivationFromARBar:(id)arg1;
- (_Bool)activateFromPoint:(struct CGPoint)arg1 gestureRecognizer:(id)arg2 arBar:(id)arg3;
- (void)prepareForActivationFromPoint:(struct CGPoint)arg1 gestureRecognizer:(id)arg2 arBar:(id)arg3;
@property(readonly, nonatomic) SCARBarItem *arBarItem;
@property(readonly, nonatomic) long long cameraViewType;
- (void)_activate;
- (id)initWithCameraViewType:(long long)arg1 arBarItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

