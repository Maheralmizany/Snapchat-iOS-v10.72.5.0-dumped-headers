//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCActionModel, SCMyUnifiedProfileActionMenuActionHandler;

@protocol SCMyUnifiedProfileActionMenuActionHandlerDelegate <NSObject>
- (void)handleActionFromMyUnifiedProfileActionMenuForActionHandler:(SCMyUnifiedProfileActionMenuActionHandler *)arg1 actionModel:(SCActionModel *)arg2;
- (void)dismissMyUnifiedProfileActionMenuForActionHandler:(SCMyUnifiedProfileActionMenuActionHandler *)arg1 completion:(void (^)(void))arg2;
@end

