//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMessageViewModelFactory.h"

@class NSString, SCUserSession;

@interface SCChatMessageViewModelFactoryV3 : NSObject <SCChatMessageViewModelFactory>
{
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)_messageIsSentByUser:(id)arg1;
- (id)_senderColorForMessage:(id)arg1 inConversation:(id)arg2 group:(id)arg3;
- (Class)_getPayloadViewModelClassForMessage:(id)arg1;
- (void)_updateCornersBasedOnPreviousViewModel:(id)arg1 previousViewModel:(id)arg2 message:(id)arg3;
- (id)_createSingleMessageViewModelWithViewModelProps:(id)arg1 messageMetadata:(id)arg2 message:(id)arg3 viewModelClass:(Class)arg4 previousViewModel:(id)arg5;
- (id)_createCompositeMessageViewModelWithViewModelProps:(id)arg1 messageMetadata:(id)arg2 message:(id)arg3 viewModelClass:(Class)arg4 previousViewModel:(id)arg5;
- (id)_updatePreviousViewModelForMessage:(id)arg1 previousViewModel:(id)arg2 messageMetadata:(id)arg3 viewModelProps:(id)arg4;
- (_Bool)_shouldUpdateViewModelForClass:(Class)arg1 previousViewModel:(id)arg2 messageProps:(id)arg3 message:(id)arg4 config:(id)arg5;
- (Class)_getViewModelClassForMessage:(id)arg1;
- (id)_createViewModelPropsWithConversation:(id)arg1 group:(id)arg2 earlierContentExists:(_Bool)arg3 message:(id)arg4 previousViewModel:(id)arg5 config:(id)arg6 showsDateHeader:(_Bool)arg7 showsBelowTheFold:(_Bool)arg8 showsTimestamp:(_Bool)arg9 metadata:(id)arg10 cornerMask:(unsigned long long)arg11 cognacMessageProperty:(id)arg12 miniThumbnailImages:(id)arg13 snapchattersData:(id)arg14;
- (id)_viewModelForMessage:(id)arg1 withConversation:(id)arg2 messageMetadata:(id)arg3 group:(id)arg4 earlierContentExists:(_Bool)arg5 config:(id)arg6 previousViewModel:(id)arg7 showsDateHeader:(_Bool)arg8 showsBelowTheFold:(_Bool)arg9 showsTimestamp:(_Bool)arg10 cornerMask:(unsigned long long)arg11 cognacMessageProperty:(id)arg12 miniThumbnailImages:(id)arg13 snapchattersData:(id)arg14;
- (id)viewModelForPendingSnaps:(long long)arg1 pendingChats:(long long)arg2 conversationId:(id)arg3;
- (id)viewModelForPlaceholder;
- (id)viewModelForLoading:(long long)arg1 conversationId:(id)arg2 sinceMessageId:(id)arg3 isArroyoConversation:(_Bool)arg4;
- (id)viewModelForEmptyChatConversation:(id)arg1;
- (id)viewModelForToday;
- (id)viewModelForMessage:(id)arg1 messageGroup:(id)arg2 withConversation:(id)arg3 messageMetadata:(id)arg4 group:(id)arg5 earlierContentExists:(_Bool)arg6 currentUsername:(id)arg7 currentUserId:(id)arg8 config:(id)arg9 previousViewModel:(id)arg10 parsingData:(id)arg11 isFailedAtLeastOnce:(_Bool)arg12 messageAnimationData:(id)arg13 miniThumbnailImages:(id)arg14 snapchattersData:(id)arg15 isGroupInviteChat:(_Bool)arg16;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

