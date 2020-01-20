//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, SCChatConversationV3;

@protocol SCConversationStorage <NSObject>
+ (id)new;
- (void)removeExpiredMessagesWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)checkAndCorrectStatesWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)clearWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)removeConversationsByIds:(NSArray *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)removeConversationById:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (SCChatConversationV3 *)conversationById:(NSString *)arg1;
- (void)putConversations:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (NSArray *)allMediaReferences;
- (NSDictionary *)allPendingSnapUpdates;
- (NSDictionary *)allGroups;
- (NSDictionary *)allConversationMetadatas;
- (NSArray *)allConversationIds;
- (NSDictionary *)conversationDictionary_DEPRECATED;
- (id)initWithPerformer:(id <SCPerforming>)arg1;
- (id)init;
@end

