//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRegistrationPublisherSubscriberDelegate.h"

@class NSString, SCLazy;

@interface SCRegistrationPublisherSubscriber : NSObject <SCRegistrationPublisherSubscriberDelegate>
{
    SCLazy *_publisherSubscribeService;
}

+ (id)_convertToSojuPublisherFromPublisherFriend:(id)arg1;
- (void).cxx_destruct;
- (void)subscribePublisherFriends:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSessionRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

