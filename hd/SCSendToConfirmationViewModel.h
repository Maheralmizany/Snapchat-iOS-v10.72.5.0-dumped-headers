//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSNumber;

@interface SCSendToConfirmationViewModel : NSObject <NSCopying>
{
    _Bool _addToMyStory;
    NSNumber *_myStoryPrivacyOverride;
    NSArray *_friendRecipients;
    NSArray *_quickAddRecipients;
    NSArray *_contactSnapchatterRecipients;
    NSArray *_usernameSearchedRecipients;
    NSArray *_mischiefsSelected;
    NSArray *_sharedStoriesSelected;
    NSArray *_groupStoriesSelected;
    NSArray *_businessProfilesSelected;
    NSArray *_appStoriesSelected;
}

@property(readonly, copy, nonatomic) NSArray *appStoriesSelected; // @synthesize appStoriesSelected=_appStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *businessProfilesSelected; // @synthesize businessProfilesSelected=_businessProfilesSelected;
@property(readonly, copy, nonatomic) NSArray *groupStoriesSelected; // @synthesize groupStoriesSelected=_groupStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *sharedStoriesSelected; // @synthesize sharedStoriesSelected=_sharedStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *mischiefsSelected; // @synthesize mischiefsSelected=_mischiefsSelected;
@property(readonly, copy, nonatomic) NSArray *usernameSearchedRecipients; // @synthesize usernameSearchedRecipients=_usernameSearchedRecipients;
@property(readonly, copy, nonatomic) NSArray *contactSnapchatterRecipients; // @synthesize contactSnapchatterRecipients=_contactSnapchatterRecipients;
@property(readonly, copy, nonatomic) NSArray *quickAddRecipients; // @synthesize quickAddRecipients=_quickAddRecipients;
@property(readonly, copy, nonatomic) NSArray *friendRecipients; // @synthesize friendRecipients=_friendRecipients;
@property(readonly, copy, nonatomic) NSNumber *myStoryPrivacyOverride; // @synthesize myStoryPrivacyOverride=_myStoryPrivacyOverride;
@property(readonly, nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddToMyStory:(_Bool)arg1 myStoryPrivacyOverride:(id)arg2 friendRecipients:(id)arg3 quickAddRecipients:(id)arg4 contactSnapchatterRecipients:(id)arg5 usernameSearchedRecipients:(id)arg6 mischiefsSelected:(id)arg7 sharedStoriesSelected:(id)arg8 groupStoriesSelected:(id)arg9 businessProfilesSelected:(id)arg10 appStoriesSelected:(id)arg11;

@end

