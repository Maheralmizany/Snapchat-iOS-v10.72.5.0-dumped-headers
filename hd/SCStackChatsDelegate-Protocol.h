//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCChatMainViewController, SCChatViewControllerV3;

@protocol SCStackChatsDelegate <NSObject>
- (_Bool)vcIsInStack:(SCChatViewControllerV3 *)arg1;
- (_Bool)dismissStackedChatMaybe;
- (SCChatMainViewController *)mainChatVC;
@end

