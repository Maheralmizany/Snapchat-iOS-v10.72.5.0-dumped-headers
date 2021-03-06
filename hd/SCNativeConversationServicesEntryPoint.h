//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNativeMessagingServices, SCServicesExposer, SCUserSessionScope;

@interface SCNativeConversationServicesEntryPoint : SCEntryPoint
{
    SCNativeMessagingServices *_nativeMessagingServices;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_nativeConversationServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *nativeConversationServicesExposer; // @synthesize nativeConversationServicesExposer=_nativeConversationServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
- (void).cxx_destruct;
- (void)begin;

@end

