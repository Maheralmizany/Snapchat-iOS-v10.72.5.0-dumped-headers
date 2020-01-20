//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCMessageChatViewModel, UITableViewCell;

@protocol SCChatCellMessageStateUpdateDelegate <NSObject>
- (void)didReceiveBitmojiInChat:(id <SCChatMessage>)arg1 stickerId:(NSString *)arg2;
- (void)didShowPendingDisplayForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)didShowCompleteDisplayForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)didSelectPreserveMessageForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)didLongPressOnMessageViewModel:(SCMessageChatViewModel *)arg1 cell:(UITableViewCell *)arg2;
- (void)didRequestRetryFailedMessage:(id <SCChatMessage>)arg1;
@end

