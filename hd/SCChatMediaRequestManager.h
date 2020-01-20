//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCChatAddressThumbnailDownloadHandler, SCChatContributionStoryPublisherDownloadHandler, SCChatMapPoiShareDownloadHandler, SCChatMapSnapDownloadHandler, SCChatMediaCache, SCChatMediaContentDownloadHandler, SCChatMediaReferenceManager, SCChatMediaStateManager, SCChatSearchStoryDownloadHandler, SCChatSnapchatterDownloadHandler, SCChatStorySnapDownloadHandler, SCChatURLMetadataDownloadHandler, SCChatURLThumbnailDownloadHandler, SCChatV3ConversationStore, SCChatV3MessageStateHandler, SCChatV3MetadataStore, SCDisposableObserverLifecycle, SCExperimentManager, SCLazy, SCSessionRequestManager;

@interface SCChatMediaRequestManager : NSObject
{
    NSMutableDictionary *_downloadingMediaItemQueue;
    id <SCChatRequestManager> _chatRequestManager;
    id <SCPerforming> _downloadingQueue;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MetadataStore *_metadataStore;
    SCChatV3MessageStateHandler *_messageStateHandler;
    SCChatMediaStateManager *_mediaStateManager;
    SCChatMediaReferenceManager *_mediaReferenceManager;
    id <SCChatLogger> _logger;
    SCExperimentManager *_experimentManager;
    SCSessionRequestManager *_requestManager;
    SCLazy *_snapTokenProvider;
    SCChatMediaCache *_chatMediaCache;
    SCLazy *_arroyoConversationIdsManager;
    SCLazy *_loadMessageLogger;
    SCChatMediaContentDownloadHandler *_mediaContentDownloadHandler;
    SCChatURLMetadataDownloadHandler *_urlMetadataDownloadHandler;
    SCChatURLThumbnailDownloadHandler *_urlThumbnailDownloadHandler;
    SCChatAddressThumbnailDownloadHandler *_addressThumbnailDownloadHandler;
    SCChatSnapchatterDownloadHandler *_snapchatterDownloadHandler;
    SCChatStorySnapDownloadHandler *_storySnapDownloadHandler;
    SCChatContributionStoryPublisherDownloadHandler *_contributionStoryPublisherDownloadHandler;
    SCChatMapSnapDownloadHandler *_mapSnapDownloadHandler;
    SCChatMapPoiShareDownloadHandler *_mapPoiShareDownloadHandler;
    SCChatSearchStoryDownloadHandler *_searchStoryDownloadHandler;
    NSMutableDictionary *_mediaContentFetchBehaviorSubject;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)_cleanUpForMediaId:(id)arg1;
- (void)executeBlockAfterMediaContentFetched:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_subjectForMediaId:(id)arg1;
- (void)_markMediaContentFetchCompleted:(id)arg1;
- (void)_insertDownloadableItem:(id)arg1;
- (_Bool)_isDownloadingForMediaId:(id)arg1;
- (void)_removeDownloadableItem:(id)arg1;
- (void)_startDownloadHandler:(id)arg1 downloableItem:(id)arg2;
- (void)_boostDownloadRequestForHandler:(id)arg1 downloableItem:(id)arg2;
- (void)_startDownloadHandler:(id)arg1 downloableItem:(id)arg2 downloadSuccess:(CDUnknownBlockType)arg3 downloadFailure:(CDUnknownBlockType)arg4;
- (void)downloadContributionStoryPublisher:(id)arg1 conversationId:(id)arg2;
- (void)downloadSearchStoryForId:(id)arg1 snapId:(id)arg2 conversationId:(id)arg3 messageId:(id)arg4 type:(long long)arg5 mediaType:(id)arg6 requestContext:(long long)arg7;
- (void)downloadMapPoiShareForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)downloadMapSnapForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 mediaType:(id)arg4 requestContext:(long long)arg5;
- (void)downloadStorySnapForId:(id)arg1 senderUsername:(id)arg2 sequenceNumber:(id)arg3 conversationId:(id)arg4 messageId:(id)arg5 mediaType:(id)arg6 requestContext:(long long)arg7;
- (void)downloadSnapchatterForId:(id)arg1 conversationId:(id)arg2;
- (void)downloadThumbnailForAddressContent:(id)arg1 conversationId:(id)arg2;
- (void)downloadThumbnailForUrlMediaCardContent:(id)arg1 conversationId:(id)arg2;
- (void)downloadUrlMetadataForUrls:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 needSpamCheck:(_Bool)arg4;
- (void)makeChatMedias:(id)arg1 recipients:(id)arg2 groups:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)uploadChatMediaForMedia:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_logDiscreteStepForMessageId:(id)arg1 mediaId:(id)arg2 itemMediaId:(id)arg3 bodyType:(long long)arg4 conversationId:(id)arg5 mediaType:(long long)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8;
- (void)_downloadChatMediaForChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUsername:(id)arg5 lensMetadata:(id)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8 downloadSuccess:(CDUnknownBlockType)arg9 downloadFailure:(CDUnknownBlockType)arg10;
- (void)downloadChatMediaForChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUsername:(id)arg5 lensMetadata:(id)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8;
- (void)downloadChatMediaForChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUsername:(id)arg5 lensMetadata:(id)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8 downloadSuccess:(CDUnknownBlockType)arg9 downloadFailure:(CDUnknownBlockType)arg10;
- (id)mapPoiShareDownloadHandler;
- (id)mapSnapDownloadHandler;
- (id)contributionStoryPublisherDownloadHandler;
- (id)searchStoryDownloadHandler;
- (id)storySnapDownloadHandler;
- (id)snapchatterDownloadHandler;
- (id)addressThumbnailDownloadHandler;
- (id)urlThumbnailDownloadHandler;
- (id)urlMetadataDownloadHandler;
- (id)mediaContentDownloadHandler;
- (id)initWithMediaRequestAPI:(id)arg1 withConversationStore:(id)arg2 withMetadataStore:(id)arg3 withMessageStateHandler:(id)arg4 withMediaStateManager:(id)arg5 withMediaReferenceManager:(id)arg6 arroyoConversationIdsManager:(id)arg7 chatMediaCache:(id)arg8 experimentManager:(id)arg9 requestManager:(id)arg10 snapTokenProvider:(id)arg11 logger:(id)arg12 loadMessageLogger:(id)arg13;

@end

