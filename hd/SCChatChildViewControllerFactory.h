//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCLazy, SCUserSession;

@interface SCChatChildViewControllerFactory : NSObject
{
    SCUserSession *_userSession;
    NSMutableArray *_v3VCPool;
    id <SCChatViewControllerParentDelegate> _parentDelegate;
    SCLazy *_groupsDataTracker;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataProvider;
}

- (void).cxx_destruct;
- (void)warmup;
- (void)enqueue:(id)arg1;
- (id)dequeueChatV3ViewController;
- (id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 groupsDataTracker:(id)arg3 groupsDataCreator:(id)arg4 groupsDataMutator:(id)arg5 groupSnapchatterRepository:(id)arg6 snapchattersDataMutator:(id)arg7 snapchattersDataProvider:(id)arg8;

@end
