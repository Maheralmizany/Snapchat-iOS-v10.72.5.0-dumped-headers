//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContextV2DependencyProvider.h"

@class NSString, SCGroupInviteUIDependencies;

@interface SCContextV2PhantomDependencyProvider : NSObject <SCContextV2DependencyProvider>
{
    id <SCContextV2ViewsProvider> _viewsProvider;
    id <SCContextV2DeepLinkHandler> _deepLinkHandler;
    id <SCContextV2StoryHandler> _storyHandler;
    id <SCContextV2UserInfoProvider> _userInfoProvider;
    id <SCContextV2ImpalaHandler> _impalaHandler;
    SCGroupInviteUIDependencies *_groupStickerDependencies;
    id <SCContextV2SocialUnlockFlow> _socialUnlockFlow;
    id <SCCognacContextGameInfoProviding> _gameInfoProvider;
}

@property(readonly, nonatomic) id <SCCognacContextGameInfoProviding> gameInfoProvider; // @synthesize gameInfoProvider=_gameInfoProvider;
@property(readonly, nonatomic) id <SCContextV2SocialUnlockFlow> socialUnlockFlow; // @synthesize socialUnlockFlow=_socialUnlockFlow;
@property(readonly, nonatomic) SCGroupInviteUIDependencies *groupStickerDependencies; // @synthesize groupStickerDependencies=_groupStickerDependencies;
@property(readonly, nonatomic) id <SCContextV2ImpalaHandler> impalaHandler; // @synthesize impalaHandler=_impalaHandler;
@property(readonly, nonatomic) id <SCContextV2UserInfoProvider> userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
@property(readonly, nonatomic) id <SCContextV2StoryHandler> storyHandler; // @synthesize storyHandler=_storyHandler;
@property(readonly, nonatomic) id <SCContextV2DeepLinkHandler> deepLinkHandler; // @synthesize deepLinkHandler=_deepLinkHandler;
@property(readonly, nonatomic) id <SCContextV2ViewsProvider> viewsProvider; // @synthesize viewsProvider=_viewsProvider;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

