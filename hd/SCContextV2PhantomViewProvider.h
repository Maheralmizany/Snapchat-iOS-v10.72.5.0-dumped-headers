//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContextV2ViewsProvider.h"

@class NSString, SCUserSession;

@interface SCContextV2PhantomViewProvider : NSObject <SCContextV2ViewsProvider>
{
    SCUserSession *_userSession;
    id <SCComposerAvatarNonFriendStoriesFetching> _storiesFetcher;
}

- (void).cxx_destruct;
- (id)createComposerViewForClass:(Class)arg1 actionsHandler:(id)arg2 source:(long long)arg3;
- (id)initWithUserSession:(id)arg1 storiesFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

