//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCChatConversationUpdaterListener <NSObject>
- (void)didConversationViewModelChange:(id <SCChatConversationViewModel>)arg1;

@optional
- (void)didInitialConversationFetchFailForConversationId:(NSString *)arg1;
- (void)didViewModelsChangeForConversationId:(NSString *)arg1;
@end

