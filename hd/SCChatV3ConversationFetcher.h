//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatConversationFetcher.h"

@class NSString, SCLazy, SCUserSession;

@interface SCChatV3ConversationFetcher : NSObject <SCChatConversationFetcher>
{
    SCUserSession *_userSession;
    SCLazy *_friendsFeedUFSDataCoordinator;
    SCLazy *_docObjectContext;
}

- (void).cxx_destruct;
- (void)_parseDOCFromFriendsFeedResponseIfNecessary:(id)arg1 fetchType:(long long)arg2;
- (void)_executeFriendFeedRequest:(id)arg1 fetchType:(long long)arg2 requestId:(id)arg3 handleEmptyOneOnOne:(_Bool)arg4 successHandlerBlock:(CDUnknownBlockType)arg5 failureHandlerBlock:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)_createFriendFeedRequestWithConversationIds:(id)arg1 requestId:(id)arg2 sessionId:(id)arg3 groupDeltaRequests:(id)arg4 groupPaginationType:(long long)arg5 chatDeltaRequests:(id)arg6 oneOnOneSnapsSyncToken:(id)arg7 messsageIterToken:(id)arg8 fetchReason:(long long)arg9 completion:(CDUnknownBlockType)arg10;
- (void)fetchAuthWithChatId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchChatWithChatId:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)_fetchChatWithChatId:(id)arg1 iterToken:(id)arg2 chatDeltaRequest:(id)arg3 fetchReason:(long long)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6 callBackQueue:(id)arg7;
- (void)fetchChatSkippingQueueWithChatId:(id)arg1 iterToken:(id)arg2 chatSequenceNumbers:(struct NSDictionary *)arg3 stateUpdateSequenceNumbers:(struct NSDictionary *)arg4 fetchReason:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)fetchConversationsWithIds:(id)arg1 conversationsVersion:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)_handleFailureWithHandler:(CDUnknownBlockType)arg1 forConversationId:(id)arg2;
- (void)_handleSuccessResponseDictionary:(id)arg1 forConversationId:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchGroupConversationWithId:(id)arg1 earliestSequenceNumbers:(id)arg2 latestSequenceNumbers:(id)arg3 mischiefPaginationType:(long long)arg4 completion:(CDUnknownBlockType)arg5 onQueue:(id)arg6;
- (void)loadHistoryForConversationId:(id)arg1 earliestSequenceNumbers:(id)arg2 latestSequenceNumbers:(id)arg3 handler:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (_Bool)_isErrorResponse:(id)arg1;
- (void)fetchConversationWithId:(id)arg1 earliestSequenceNumbers:(id)arg2 latestSequenceNumbers:(id)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (id)initWithUserSession:(id)arg1 friendsFeedUFSDataCoordinator:(id)arg2 docObjectContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

