//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFeedHeaderPromptState.h"

@class User;

@interface SCLegacyFeedHeaderPromptStateAdaptor : NSObject <SCFeedHeaderPromptState>
{
    User *_user;
}

- (void).cxx_destruct;
- (_Bool)seenBirthdayPartyPrompt;
- (void)setDisplayedBirthdayPartyPrompt;
- (_Bool)shouldDisplayBirthdayPartyPrompt;
- (_Bool)seenPhoneNumberVerificationPrompt;
- (void)setDisplayedPhoneNumberVerificationPrompt;
- (_Bool)shouldDisplayPhoneNumberVerificationPrompt;
- (_Bool)seenNotificationPrompt;
- (void)setDisplayedNotificationPrompt;
- (_Bool)shouldDisplayNotificationPrompt;
- (void)setWasFeedHeaderPromptDisplayedLastInteractionTime:(_Bool)arg1;
- (_Bool)wasFeedHeaderPromptDisplayedLastInteractionTime;
- (void)setFeedHeaderPromptLastInteractionTime:(id)arg1;
- (id)feedHeaderPromptLastInteractionTime;
- (id)initWithUser:(id)arg1;

@end
