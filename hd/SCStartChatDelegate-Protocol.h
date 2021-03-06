//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCDeepLinkURL, SCStartChatIdentifier;

@protocol SCStartChatDelegate <NSObject>
- (void)setConversationByChatIdentifier:(SCStartChatIdentifier *)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 subpageName:(NSString *)arg5;
- (void)navigateToChatViewAnimated:(_Bool)arg1;
- (void)navigateToChatView;

@optional
- (void)removeFeedToChatTapDetectionView;
- (void)attachFeedToChatTapDetectionViewWithCurrentTapLocation:(struct CGPoint)arg1 delegate:(id <SCFeedToChatTapDetectionViewDelegate>)arg2;
- (void)navigateToChatViewAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
@end

