//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaSubscribeButtonLayerViewControllerSubscribeStatusHandler.h"
#import "SCUpdateListener.h"

@class NSString, SCDiscoverFeedStory, SCUserSession;

@interface SCDiscoverFeedStorySubscribeStatusHandler : NSObject <SCUpdateListener, SCOperaSubscribeButtonLayerViewControllerSubscribeStatusHandler>
{
    SCUserSession *_userSession;
    SCDiscoverFeedStory *_cheetahStory;
    CDUnknownBlockType _subscriptionUpdateCallback;
}

- (void).cxx_destruct;
- (void)_callUpdateCallback:(_Bool)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)setCallbackForSubscriptionUpdate:(CDUnknownBlockType)arg1;
- (_Bool)isSubscribed;
- (id)initWithUserSession:(id)arg1 cheetahStory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
