//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession;

@interface SCNewGroupConfiguration : NSObject
{
    unsigned long long _creationType;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)_isFriendsFeedNewChatOrGroup;
- (_Bool)_isSendToOrProfileNewGroup;
- (unsigned long long)creationType;
- (_Bool)shouldDisplayStreakCounter;
- (_Bool)shouldDisplayStreak;
- (_Bool)shouldDisplayCreateGroupLinkCTASection;
- (_Bool)shouldDisplayNewGroupCTASection;
- (_Bool)shouldEnableV11Theme;
- (_Bool)isFriendsFeedNewChatOrGroup;
- (_Bool)isSendToNewGroup;
- (_Bool)shouldDisplayFriendsAToZSections;
- (_Bool)shouldDisplayAddFriendsInSearchSection;
- (_Bool)shouldDisplayRecentsSection;
- (_Bool)shouldDisplayBestFriendsSection;
- (id)initWithUserSession:(id)arg1 creationType:(unsigned long long)arg2;

@end
