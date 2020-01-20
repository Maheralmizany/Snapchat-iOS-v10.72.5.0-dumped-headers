//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"
#import "SCUnifiedActionMenuDataProvider.h"

@class NSString, SCDiscoverFeedActionSheetNotificationStatusManager, SCDiscoverFeedActionSheetSubscribeStatusManager, SCExperimentManager, SCPremiumPublisher, SCPublisherShowMetadata;

@interface SCPublisherActionSheetDataProvider : NSObject <SCEventListener, SCUnifiedActionMenuDataProvider>
{
    SCExperimentManager *_experimentManager;
    SCPremiumPublisher *_publisher;
    unsigned long long _storyDedupeFp;
    NSString *_tileId;
    NSString *_tileImageUrl;
    NSString *_tileHeadline;
    long long _editionId;
    unsigned long long _publisherTimestampMsecs;
    _Bool _isShareable;
    SCPublisherShowMetadata *_showMetadata;
    unsigned long long _subscribeState;
    unsigned long long _notificationState;
    SCDiscoverFeedActionSheetSubscribeStatusManager *_subscribeStatusManager;
    SCDiscoverFeedActionSheetNotificationStatusManager *_notificationStatusManager;
    _Bool _isNestedMenuV11Enabled;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notificationStateDidUpdateForStoryDedupeFp:(id)arg1;
- (void)_subscribeStateDidUpdateForStoryDedupeFp:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)_actionSheetViewModel;
- (void)reload;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPublisher:(id)arg1 experimentManager:(id)arg2 storyDedupeFp:(unsigned long long)arg3 tileId:(id)arg4 tileImageUrl:(id)arg5 tileHeadline:(id)arg6 editionId:(long long)arg7 publisherTimestampMsecs:(unsigned long long)arg8 isShareable:(_Bool)arg9 showMetadata:(id)arg10 subscribeStatusManager:(id)arg11 notificationStatusManager:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

