//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCStoryInviteSheetViewModel : SCComposerMarshallableObject
{
    _Bool _alreadyJoinedStory;
    NSString *_bitmojiStickerId;
    NSString *_bitmojiAvatarId;
    NSString *_storyTitle;
    NSString *_userFirstName;
    NSString *_nonBitmojiProfileIconSrc;
}

@property(copy, nonatomic) NSString *nonBitmojiProfileIconSrc; // @synthesize nonBitmojiProfileIconSrc=_nonBitmojiProfileIconSrc;
@property(nonatomic) _Bool alreadyJoinedStory; // @synthesize alreadyJoinedStory=_alreadyJoinedStory;
@property(copy, nonatomic) NSString *userFirstName; // @synthesize userFirstName=_userFirstName;
@property(copy, nonatomic) NSString *storyTitle; // @synthesize storyTitle=_storyTitle;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiStickerId; // @synthesize bitmojiStickerId=_bitmojiStickerId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithBitmojiStickerId:(id)arg1 bitmojiAvatarId:(id)arg2 storyTitle:(id)arg3 userFirstName:(id)arg4 alreadyJoinedStory:(_Bool)arg5 nonBitmojiProfileIconSrc:(id)arg6;

@end

