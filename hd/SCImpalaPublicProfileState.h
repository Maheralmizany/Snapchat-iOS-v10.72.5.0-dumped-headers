//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData;

@interface SCImpalaPublicProfileState : SCComposerMarshallableObject
{
    _Bool _subscribed;
    _Bool _optInNotifications;
    _Bool _optInNotificationsAllowed;
    NSData *_encodedBusinessProfileAndUserData;
}

@property(nonatomic) _Bool optInNotificationsAllowed; // @synthesize optInNotificationsAllowed=_optInNotificationsAllowed;
@property(nonatomic) _Bool optInNotifications; // @synthesize optInNotifications=_optInNotifications;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSData *encodedBusinessProfileAndUserData; // @synthesize encodedBusinessProfileAndUserData=_encodedBusinessProfileAndUserData;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithEncodedBusinessProfileAndUserData:(id)arg1 subscribed:(_Bool)arg2 optInNotifications:(_Bool)arg3 optInNotificationsAllowed:(_Bool)arg4;

@end

