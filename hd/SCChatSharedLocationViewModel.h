//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCFriendLocationSnapshotMapViewModel, SCUserSession;

@interface SCChatSharedLocationViewModel : NSObject
{
    NSString *_statusMessage;
    SCFriendLocationSnapshotMapViewModel *_friendMapViewModel;
    NSArray *_buttons;
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, copy, nonatomic) SCFriendLocationSnapshotMapViewModel *friendMapViewModel; // @synthesize friendMapViewModel=_friendMapViewModel;
@property(readonly, copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
- (void).cxx_destruct;
- (id)initWithStatusMessage:(id)arg1 friendMapViewModel:(id)arg2 buttons:(id)arg3 userSession:(id)arg4;

@end

