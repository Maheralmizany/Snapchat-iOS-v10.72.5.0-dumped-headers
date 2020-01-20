//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCUserTooltipStatusProviding <NSObject>
@property(nonatomic) unsigned long long appStartCountBeforeShowMapTeachingTooltip;
- (void)setSeenSendToGroupInviteStickerSwipeUpCTATooltipCurrentSession_LOCAL_ONLY;
- (void)setSeenSendToGroupInviteStickerSwipeUpCTATooltip;
- (void)setSeenSendToGroupInviteStickerTooltipInPreview;
- (void)setSeenSendToGroupInviteLinkBadgeInNewGroup;
- (void)setSeenSendToGroupInviteLinkBadgeInAddToGroup;
- (void)setSeenSendToGroupInviteLinkBadgeInProfileSettings;
- (void)setSeenListsHowToViewTooltip;
- (void)setSeenListsFirstCreationTooltip;
- (void)setSeenSendToStreaksTooltip;
- (void)setSeenSendToCreateGroupTooltip;
- (void)setSeenOpenLensTooltip;
- (_Bool)seenOpenLensTooltip;
- (void)setLensTooltipShownAfterDismiss;
- (_Bool)lensTooltipShownAfterDismiss;
- (void)setUserClickedToTurnOffLens;
- (_Bool)userClickedToTurnOffLens;
- (void)setDisplayedGroupInviteStickerSwipeUpCTATooltip;
- (void)setDisplayedBestOfSpectaclesIntro;
- (void)setDisplayedReplyOnStoryTooltip;
- (void)setDisplayedCreativeKitOnboardingTooltip;
- (void)setDisplayedUserTaggingOnboardTooltip;
- (void)setDisplayedBounceTeachingTooltip;
- (void)setDisplayedSnapReplyStickerAnimation;
- (void)setDisplayedVenueStickerStyleTooltip;
- (void)setDisplayedVenueStickerTooltip;
- (void)setDisplayedGiphyStickerTooltip;
- (void)setDisplayedCropTeachingTooltip;
- (void)setDisplayedCropToolTooltip;
- (void)setDisplayedMyStoryViewTooltip;
- (void)setDisplayedMyStoryManagementTooltip;
- (void)setDisplayedStoryInterstitialSwipeTooltip;
- (void)setDisplayedFeedSnapTooltip;
- (void)setDisplayedFeedStoryTooltip;
- (void)setDisplayedSpecsLensInPreviewTooltip;
- (void)setDisplayedLensInPreviewTooltip;
- (void)setDisplayedMemoriesCameraRollOnboardingPrompt;
- (void)setFinishDisplayingMultiSnapTeachingTooltip;
- (void)setDoNotShowMultiSnapV2DeletionPrompt;
- (void)setDisplayedMultiSnapTeachingTooltip;
- (void)setDisplayedMultiSnapDeletionTooltip;
- (void)setDisplayedMultiSnapCaptureTooltip;
- (void)setDisplayedAudioFiltersTooltip;
- (void)setDisplayedVenueFilterTooltip;
- (void)resetGroupStoriesIntroPopups;
- (void)setDisplayGroupStoriesIntroWatchGeo;
- (void)setDisplayGroupStoriesIntroWatchCustom;
- (void)setDisplayGroupStoriesSendIntroGeoCreatorIsNotFriendBlocked;
- (void)setDisplayGroupStoriesSendIntroGeoCreatorIsNotFriend;
- (void)setDisplayGroupStoriesSendIntroGeoCreatorIsFriendBlocked;
- (void)setDisplayGroupStoriesSendIntroGeoCreatorIsFriend;
- (void)setDisplayGroupStoriesSendIntroPrivate;
- (void)setDisplayGroupStoriesSendIntroChatBlocked;
- (void)setDisplayGroupStoriesSendIntroChat;
- (void)setDisplayGroupStoriesSendIntroCustomBlocked;
- (void)setDisplayGroupStoriesSendIntroCustom;
- (void)setDisplayedGroupStoryOnboardingTooltip;
- (void)setDisplayedMemoriesOnboardingScreen;
- (void)setRespondedSearchableByPhonePrompt;
- (void)setDisplayedSubmitFromAnywhere;
- (void)setDisplayedPinchResizeTeachingTooltip;
- (void)unsetDisplayedMapTeachingTooltip;
- (void)setDisplayedMapTeachingTooltipWithoutSeen;
- (void)setDisplayedMapTeachingTooltip;
- (void)setDisplayedAlternateCreateButtonToolTip;
- (void)setDisplayedChatDeleteMsgInMischiefChat:(NSString *)arg1;
- (void)setDisplayedChatDeleteMsgInChat:(NSString *)arg1;
- (void)incrementSearchStickersSentForAutosuggestTooltip;
- (void)setDisplayedStickerAutosuggestTooltip;
- (void)setDisplayedBitmojiFriendmojiHint;
- (void)setBeganLagunaHDTransfer;
- (void)setInitiatedLagunaHDTransfer;
- (void)setAddedHomeWifiNetwork;
- (void)setDisplayedNotificationPrompt;
- (void)setViewedMoreAboutSpecs;
- (void)setViewedSpecsTabIncompatibleWithMyEyesOnlyByDefault;
- (void)setViewedYES2018ToolTip;
- (void)setViewedGetHdV3;
- (void)setViewedGetHd;
- (void)setViewedHighlightStory;
- (void)setViewedDayStory;
- (void)setDisplayedProfileV3PhoneNumberVerificationPrompt;
- (void)setDisplayedPhoneNumberVerificationPrompt;
- (void)setDisplayedBirthdayPartyPrompt;
- (void)setDisplayedHdOnlyTooltip;
- (void)setDisplayedNeptuneOnboarding;
- (void)setDisplayedMalibuOnboarding;
- (void)setDisplayedPsychomantisOnboarding;
- (void)setDisplayedLagunaOnboarding;
- (void)setDisplayedEraseMessageDialog;
- (void)setHasSeenFirstReplayDialog;
- (void)setDisplayedUnlockableStickerTooltip;
- (void)setDisplayedAnimatedTooltip;
- (void)setDisplayedHometabTooltip;
- (void)setDisplayedAutoFaceStickerTooltip;
- (void)setDisplayedCustomStickerOnboarding;
- (void)setDisplayedCustomStickerDeleteDragTooltip;
- (void)setDisplayedCustomStickerDeleteHintTooltip;
- (void)setDisplayedTrackingCaptionTooltip;
- (void)setDisplayedTrackingStickerTooltip;
- (void)setDismissedLocationHeader;
- (void)setDisplayedLensesActivationTooltipWithSuccess:(_Bool)arg1;
- (void)incrementChatSessionsForDeleteMsgShowCount;
- (void)incrementChatSessionsForSaveDropdownCount;
- (void)setPressedAndHeldToSaveOrUnsave;
- (void)setCreatedAccountAfterChatV1_5;
- (void)setDisplayedClearConverationConfirmation;
- (void)setDisplayedSaveEntireStoryPopup;
- (void)setDisplayedDeleteSharedStoryPopup;
- (void)setDidTakeActionOnPromptFilterView;
- (void)setDisplayedSwipeHelp;
- (void)setDisplayedSnapAndDriveWarning;
- (void)setHasSeenNewFriendRequestTooltip;
- (void)setDisplayedLensChallengesStoriesIntroSend;
- (void)setDisplayedStoriesIntroSend;
- (void)setDisplayedStoriesIntro;
- (void)setDisplayedCaptionHelp;
- (void)setDidPostStory;
- (void)setDidSendSnap;
- (void)setDidTakePictureOrVideo;
- (_Bool)shouldDisplaySendToGroupInviteStickerSwipeUpCTATooltipCurrentSession;
- (_Bool)shouldDisplaySendToGroupInviteStickerSwipeUpCTATooltip;
- (_Bool)shouldDisplaySendToGroupInviteStickerTooltipInPreview;
- (_Bool)shouldDisplaySendToGroupInviteLinkBadgeInNewGroup;
- (_Bool)shouldDisplaySendToGroupInviteLinkBadgeInAddToGroup;
- (_Bool)shouldDisplaySendToGroupInviteLinkBadgeInProfileSettings;
- (_Bool)shouldDisplayListsHowToViewTooltip;
- (_Bool)shouldDisplayListsFirstCreationTooltip;
- (_Bool)shouldDisplaySendToStreaksTooltip;
- (_Bool)shouldDisplaySendToCreateGroupTooltip;
- (_Bool)shouldDisplayReplyOnStoryTooltip;
- (_Bool)shouldDisplayCreativeKitOnboardingTooltip;
- (_Bool)shouldDisplayUserTaggingOnboardingTooltip;
- (_Bool)shouldDisplayBounceTeachingTooltip;
- (_Bool)shouldDisplaySnapReplyStickerAnimation;
- (_Bool)shouldDisplayVenueStickerStyleTooltip;
- (_Bool)shouldDisplayVenueStickerTooltip;
- (_Bool)shouldDisplayGiphyStickerTooltip;
- (_Bool)shouldDisplayCropTeachingTooltip;
- (_Bool)shouldDisplayCropToolTooltip;
- (_Bool)shouldDisplayMyStoryViewTooltip;
- (_Bool)shouldDisplayMyStoryManagementTooltip;
- (_Bool)shouldDisplayStoryInterstitialSwipeTooltip;
- (_Bool)shouldDisplayFeedSnapTooltip;
- (_Bool)shouldDisplayAnimatedTooltip;
- (_Bool)shouldDisplayFeedStoryTooltip;
- (_Bool)shouldDisplaySpecsLensInPreviewTooltip;
- (_Bool)shouldDisplayLensInPreviewTooltip;
- (_Bool)shouldDisplayMemoriesCameraRollOnboardingPrompt;
- (_Bool)shouldShowMultiSnapV2DeletionPrompt;
- (_Bool)shouldDisplayMultiSnapTeachingTooltip;
- (_Bool)shouldDisplayMultiSnapDeletionTooltip;
- (_Bool)shouldDisplayUnlockableStickerTooltip;
- (_Bool)shouldDisplayHometabTooltip;
- (_Bool)shouldDisplayAutoFaceSticekrTooltip;
- (_Bool)shouldDisplayMultiSnapCaptureTooltip;
- (_Bool)shouldDisplayAudioFiltersTooltip;
- (_Bool)shouldDisplayVenueFilterTooltip;
- (_Bool)shouldDisplayGroupStoriesIntroWatchGeo;
- (_Bool)shouldDisplayGroupStoriesIntroWatchCustom;
- (_Bool)shouldDisplayGroupStoriesSendIntroGeoCreatorIsNotFriendBlocked;
- (_Bool)shouldDisplayGroupStoriesSendIntroGeoCreatorIsNotFriend;
- (_Bool)shouldDisplayGroupStoriesSendIntroGeoCreatorIsFriendBlocked;
- (_Bool)shouldDisplayGroupStoriesSendIntroGeoCreatorIsFriend;
- (_Bool)shouldDisplayGroupStoriesSendIntroPrivate;
- (_Bool)shouldDisplayGroupStoriesSendIntroChatBlocked;
- (_Bool)shouldDisplayGroupStoriesSendIntroChat;
- (_Bool)shouldDisplayGroupStoriesSendIntroCustomBlocked;
- (_Bool)shouldDisplayGroupStoriesSendIntroCustom;
- (_Bool)shouldDisplayGroupStoryOnboardingTooltip;
- (_Bool)hasSeenMemoriesOnboardingScreen;
- (_Bool)shouldDisplaySearchableByPhonePrompt;
- (_Bool)hasSeenSubmitFromAnywhere;
- (_Bool)shouldDisplayPinchResizeTeachingTooltip;
- (_Bool)shouldDisplayMapTeachingTooltip;
- (_Bool)shouldDisplayAlternateCreateButtonTooltip;
- (_Bool)shouldDisplayChatDeleteMsgInMischiefChat:(NSString *)arg1;
- (_Bool)shouldDisplayChatDeleteMsgInChat:(NSString *)arg1;
- (_Bool)shouldDisplayChatDeleteMsg;
- (_Bool)hasSeenMoreAboutSpecs;
- (_Bool)shouldDisplayStickerAutosuggestTooltip;
- (_Bool)shouldDisplayBitmojiFriendmojiHint;
- (_Bool)beganLagunaHDTransfer;
- (_Bool)initiatedLagunaHDTransfer;
- (_Bool)shouldDisplayLagunaHomeWifiTeaching;
- (_Bool)shouldDisplayHintLabels;
- (_Bool)shouldDisplaySpecsTabIncompatibleWithMyEyesOnlyByDefault;
- (_Bool)shouldDisplayYES2018ToolTip;
- (_Bool)shouldDisplayGetHdV3ToolTip;
- (_Bool)shouldDisplayGetHdToolTip;
- (_Bool)shouldDisplayHighlightStoryToolTip;
- (_Bool)shouldDisplayDayStoryToolTip;
- (_Bool)shouldDisplayHdOnlyTooltip;
- (_Bool)shouldDisplayNeptuneOnboarding;
- (_Bool)shouldDisplayMalibuOnboarding;
- (_Bool)shouldDisplayPsychomantisOnboarding;
- (_Bool)shouldDisplayLagunaOnboarding;
- (_Bool)shouldDisplayEraseMessageDialog;
- (_Bool)shouldDisplayFirstReplayDialog;
- (_Bool)shouldDisplayCustomStickerOnboarding;
- (_Bool)shouldDisplayCustomStickerDeleteDragTooltip;
- (_Bool)shouldDisplayCustomStickerDeleteHintTooltip;
- (_Bool)shouldDisplayTrackingCaptionTooltip;
- (_Bool)shouldDisplayTrackingStickerTooltip;
- (_Bool)shouldDisplayLocationHeader;
- (_Bool)shouldDisplayLensesActivationTooltip;
- (_Bool)shouldDisplayTapToSaveDropdown;
- (_Bool)hasSeenNewFriendRequestTooltip;
- (_Bool)shouldDisplayClearConversationConfirmation;
- (_Bool)shouldDisplaySaveEntireStoryPopup;
- (_Bool)shouldDisplayDeleteSharedStoryPopup;
- (_Bool)shouldDisplaySwipeHelp:(_Bool)arg1;
- (_Bool)shouldDisplayVideoHelp;
- (_Bool)shouldDisplayBestOfSpectaclesIntro;
- (_Bool)shouldDisplayLensChallengesIntro;
- (_Bool)shouldDisplayStoriesIntroSend;
- (_Bool)shouldDisplayStoriesIntro;
- (_Bool)shouldDisplaySnapAndDriveWarning;
- (_Bool)didPostStory;
- (_Bool)shouldDisplayCaptionHelp;
@end

