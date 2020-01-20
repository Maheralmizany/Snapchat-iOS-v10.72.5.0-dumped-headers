//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SCTalkManager <NSObject>
- (NSDictionary *)activeConversations;
- (void)removeActiveConversationsListener:(id <SCTV3ActiveConversationsListener>)arg1;
- (void)addActiveConversationsListener:(id <SCTV3ActiveConversationsListener>)arg1;
- (void)dismissCallsOtherThanConvoId:(NSString *)arg1;
- (unsigned long long)callStateForConvoId:(NSString *)arg1;
- (_Bool)hasAnyCallingActivity;
- (void)removeCallStateListener:(id <SCTV3CallStateListener>)arg1 convoId:(NSString *)arg2;
- (void)addCallStateListener:(id <SCTV3CallStateListener>)arg1 convoId:(NSString *)arg2;
- (id <SCTCognacSession>)createCognacSessionForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2 cognacServices:(id <SCTCognacServices>)arg3 bitmojiEnabled:(_Bool)arg4;
- (id <SCTV3HeadlessSession>)createHeadlessSessionForConvoId:(NSString *)arg1 headessCallServices:(id <SCTV3HeadlessCallServices>)arg2;
- (id <SCTalkSession>)createSessionForConvoId:(NSString *)arg1 dependencies:(id <SCTalkSessionDependenciesProvider>)arg2;
@end
