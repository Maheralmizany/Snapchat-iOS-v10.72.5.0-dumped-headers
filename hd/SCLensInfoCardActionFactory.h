//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCLensInfoCardActionFactory : NSObject
{
}

- (id)_tapActionWithVisualType:(long long)arg1 text:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_defaultTapActionText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_desctructiveTapActionText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)sendToFriendsActionWithHandler:(CDUnknownBlockType)arg1;
- (id)copyLensLinkActionWithHandler:(CDUnknownBlockType)arg1;
- (id)moreLensesActionWithHandler:(CDUnknownBlockType)arg1;
- (id)viewProfileActionWithHandler:(CDUnknownBlockType)arg1;
- (id)subscribeToLensCreatorActionWithHandler:(CDUnknownBlockType)arg1 isActivated:(_Bool)arg2;
- (id)removeLensActionWithHandler:(CDUnknownBlockType)arg1;
- (id)reportActionWithHandler:(CDUnknownBlockType)arg1;

@end
