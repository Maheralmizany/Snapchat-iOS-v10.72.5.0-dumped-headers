//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCConversationDocObjectStorage.h"

@class NSMutableDictionary;

@interface SCConversationDocObjectStorageWithCache : SCConversationDocObjectStorage
{
    id <SCPerforming> _mainPerformer;
    id <SCPerforming> _docTablePerformer;
    NSMutableDictionary *_conversationDictionary;
}

+ (id)conversationStoreQueuePerformer;
- (void).cxx_destruct;
- (void)removeExpiredMessagesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkAndCorrectStatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeConversationById:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allMediaReferences;
- (id)allPendingSnapUpdates;
- (id)allGroups;
- (id)allConversationMetadatas;
- (id)allConversationIds;
- (id)conversationDictionary_DEPRECATED;
- (void)putConversations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)conversationById:(id)arg1;
- (void)setLazyDocObjectContext:(id)arg1 groupManager:(id)arg2 username:(id)arg3 autoShakeToReporter:(id)arg4;
- (id)initWithPerformer:(id)arg1;

@end
