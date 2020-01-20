//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSNumber, NSSet;

@interface SCSendToSelectionResult : NSObject <NSCopying>
{
    _Bool _myStorySelected;
    NSNumber *_myStoryPrivacyOverride;
    NSSet *_sharedStoriesSelected;
    NSArray *_customStoriesSelected;
    NSArray *_chatStoriesSelected;
    NSArray *_friendRecipientsSelected;
    NSArray *_groupRecipientsSelected;
    NSArray *_quickAddFriendsSelected;
    NSArray *_contactSnapchattersSelected;
    NSArray *_searchedUsersSelected;
    NSArray *_businessProfilesSelected;
    NSSet *_appStoriesSelected;
}

@property(readonly, copy, nonatomic) NSSet *appStoriesSelected; // @synthesize appStoriesSelected=_appStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *businessProfilesSelected; // @synthesize businessProfilesSelected=_businessProfilesSelected;
@property(readonly, copy, nonatomic) NSArray *searchedUsersSelected; // @synthesize searchedUsersSelected=_searchedUsersSelected;
@property(readonly, copy, nonatomic) NSArray *contactSnapchattersSelected; // @synthesize contactSnapchattersSelected=_contactSnapchattersSelected;
@property(readonly, copy, nonatomic) NSArray *quickAddFriendsSelected; // @synthesize quickAddFriendsSelected=_quickAddFriendsSelected;
@property(readonly, copy, nonatomic) NSArray *groupRecipientsSelected; // @synthesize groupRecipientsSelected=_groupRecipientsSelected;
@property(readonly, copy, nonatomic) NSArray *friendRecipientsSelected; // @synthesize friendRecipientsSelected=_friendRecipientsSelected;
@property(readonly, copy, nonatomic) NSArray *chatStoriesSelected; // @synthesize chatStoriesSelected=_chatStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *customStoriesSelected; // @synthesize customStoriesSelected=_customStoriesSelected;
@property(readonly, copy, nonatomic) NSSet *sharedStoriesSelected; // @synthesize sharedStoriesSelected=_sharedStoriesSelected;
@property(readonly, copy, nonatomic) NSNumber *myStoryPrivacyOverride; // @synthesize myStoryPrivacyOverride=_myStoryPrivacyOverride;
@property(readonly, nonatomic) _Bool myStorySelected; // @synthesize myStorySelected=_myStorySelected;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMyStorySelected:(_Bool)arg1 myStoryPrivacyOverride:(id)arg2 sharedStoriesSelected:(id)arg3 customStoriesSelected:(id)arg4 chatStoriesSelected:(id)arg5 friendRecipientsSelected:(id)arg6 groupRecipientsSelected:(id)arg7 quickAddFriendsSelected:(id)arg8 contactSnapchattersSelected:(id)arg9 searchedUsersSelected:(id)arg10 businessProfilesSelected:(id)arg11 appStoriesSelected:(id)arg12;

@end
