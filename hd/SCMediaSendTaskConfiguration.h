//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, SCACreativeKitSnapMetadata, SOJUMultiSnapMetadata, SOJUStoryFrame;

@interface SCMediaSendTaskConfiguration : NSObject <NSCoding>
{
    _Bool _postToMyStory;
    _Bool _isForwarded;
    _Bool _shouldShowStatusMessageWhenPostComplete;
    id <SCSnapSendPreparer> _snapSendPreparer;
    NSArray *_userRecipientUsernames;
    NSArray *_ourStoriesMetadata;
    NSArray *_appStoryMetadatas;
    NSArray *_businessIds;
    NSArray *_mischiefs;
    NSArray *_customStoriesMetadata;
    NSNumber *_postToMyStoryPrivacyOverride;
    NSDate *_storyUserPostedTimestamp;
    NSDate *_storyStartRecordingTimestamp;
    SOJUStoryFrame *_storyFraming;
    NSDictionary *_messageMetadata;
    NSArray *_blizzardEventsOnSuccess;
    NSString *_additionalText;
    SOJUMultiSnapMetadata *_multiSnapMetadata;
    SCACreativeKitSnapMetadata *_creativeKitMetadata;
}

@property(readonly, nonatomic) _Bool shouldShowStatusMessageWhenPostComplete; // @synthesize shouldShowStatusMessageWhenPostComplete=_shouldShowStatusMessageWhenPostComplete;
@property(readonly, copy, nonatomic) SCACreativeKitSnapMetadata *creativeKitMetadata; // @synthesize creativeKitMetadata=_creativeKitMetadata;
@property(readonly, nonatomic) SOJUMultiSnapMetadata *multiSnapMetadata; // @synthesize multiSnapMetadata=_multiSnapMetadata;
@property(readonly, nonatomic) _Bool isForwarded; // @synthesize isForwarded=_isForwarded;
@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(readonly, copy, nonatomic) NSArray *blizzardEventsOnSuccess; // @synthesize blizzardEventsOnSuccess=_blizzardEventsOnSuccess;
@property(readonly, copy, nonatomic) NSDictionary *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) SOJUStoryFrame *storyFraming; // @synthesize storyFraming=_storyFraming;
@property(readonly, nonatomic) NSDate *storyStartRecordingTimestamp; // @synthesize storyStartRecordingTimestamp=_storyStartRecordingTimestamp;
@property(readonly, nonatomic) NSDate *storyUserPostedTimestamp; // @synthesize storyUserPostedTimestamp=_storyUserPostedTimestamp;
@property(readonly, nonatomic) NSNumber *postToMyStoryPrivacyOverride; // @synthesize postToMyStoryPrivacyOverride=_postToMyStoryPrivacyOverride;
@property(readonly, nonatomic) _Bool postToMyStory; // @synthesize postToMyStory=_postToMyStory;
@property(readonly, copy, nonatomic) NSArray *customStoriesMetadata; // @synthesize customStoriesMetadata=_customStoriesMetadata;
@property(readonly, copy, nonatomic) NSArray *mischiefs; // @synthesize mischiefs=_mischiefs;
@property(readonly, copy, nonatomic) NSArray *businessIds; // @synthesize businessIds=_businessIds;
@property(readonly, copy, nonatomic) NSArray *appStoryMetadatas; // @synthesize appStoryMetadatas=_appStoryMetadatas;
@property(readonly, copy, nonatomic) NSArray *ourStoriesMetadata; // @synthesize ourStoriesMetadata=_ourStoriesMetadata;
@property(readonly, copy, nonatomic) NSArray *userRecipientUsernames; // @synthesize userRecipientUsernames=_userRecipientUsernames;
@property(readonly, nonatomic) id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
- (void).cxx_destruct;
- (_Bool)isSingleUserRecipient;
- (_Bool)isSingleGroupRecipient;
- (void)clearBlizzardEventsOnSuccess;
- (void)updateUserRecipientsWithUsernames:(id)arg1;
- (void)updateGroupRecipientsWithGroupIds:(id)arg1;
- (void)removeStory;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecipientUsernames:(id)arg1 storiesPostingConfig:(id)arg2 businessIds:(id)arg3 mischiefs:(id)arg4 appStoryMetadatas:(id)arg5 storyFraming:(id)arg6 messageMetadata:(id)arg7 blizzardEventsOnSuccess:(id)arg8 additionalText:(id)arg9 multiSnapMetadata:(id)arg10 snapSendPreparer:(id)arg11 isForwarded:(_Bool)arg12 creativeKitSnapMetadata:(id)arg13;
- (id)initWithUserRecipientUsernames:(id)arg1 storiesPostingConfig:(id)arg2 businessIds:(id)arg3 mischiefs:(id)arg4 appStoryMetadatas:(id)arg5 storyFraming:(id)arg6 messageMetadata:(id)arg7 blizzardEventsOnSuccess:(id)arg8 additionalText:(id)arg9 multiSnapMetadata:(id)arg10 snapSendPreparer:(id)arg11 isForwarded:(_Bool)arg12;

@end

