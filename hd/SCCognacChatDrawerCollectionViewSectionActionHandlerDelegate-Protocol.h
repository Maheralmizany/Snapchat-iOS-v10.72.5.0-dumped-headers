//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCCognacChatDrawerCollectionViewSectionActionHandler;

@protocol SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate <NSObject>
- (void)cognacChatDrawerCollectionViewSectionActionHandler:(SCCognacChatDrawerCollectionViewSectionActionHandler *)arg1 openAppWithAppId:(NSString *)arg2 conversationId:(NSString *)arg3 context:(unsigned long long)arg4;
- (void)cognacChatDrawerCollectionViewSectionActionHandler:(SCCognacChatDrawerCollectionViewSectionActionHandler *)arg1 didLaunchAppInstanceFailWithAppId:(NSString *)arg2 conversationId:(NSString *)arg3;
- (void)cognacChatDrawerCollectionViewSectionActionHandler:(SCCognacChatDrawerCollectionViewSectionActionHandler *)arg1 didLaunchAppInstanceSucceedWithAppId:(NSString *)arg2 conversationId:(NSString *)arg3 context:(unsigned long long)arg4;
@end
