//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMessageChatViewModelProps;

@protocol SCMergeableViewModelProtocol <NSObject>
- (void)addMessage:(id <SCChatRenderingMessage>)arg1 viewModelProps:(SCMessageChatViewModelProps *)arg2;
- (_Bool)canMergeNewMessage:(id <SCChatRenderingMessage>)arg1;
@end

