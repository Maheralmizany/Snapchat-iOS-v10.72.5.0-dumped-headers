//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChatBaseMessageHandler.h"

@interface SCChatLocationRequestMessageHandler : SCChatBaseMessageHandler
{
}

+ (_Bool)isStatusMessage;
+ (_Bool)shouldShowActionMenu;
+ (_Bool)isErasable;
+ (_Bool)isSavable;
+ (id)type;
+ (Class)rendererClass;
+ (id)createRendererWithMessage:(id)arg1 userIdentifier:(id)arg2 viewModelProps:(id)arg3;
+ (id)serializeToDataForRecipientUserId:(id)arg1 senderUserId:(id)arg2;

@end

