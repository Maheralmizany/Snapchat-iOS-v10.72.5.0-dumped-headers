//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFriendsFeedScope, SCMainHeaderButtonServices, SCNavigationServices, SCUserSessionScope;

@interface SCFriendsFeedEntryPoint : SCEntryPoint
{
    SCFriendsFeedScope *_friendsFeedScope;
    SCNavigationServices *_navigationServices;
    SCMainHeaderButtonServices *_mainHeaderButtonServices;
    SCUserSessionScope *_userSessionScope;
}

@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCMainHeaderButtonServices *mainHeaderButtonServices; // @synthesize mainHeaderButtonServices=_mainHeaderButtonServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCFriendsFeedScope *friendsFeedScope; // @synthesize friendsFeedScope=_friendsFeedScope;
- (void).cxx_destruct;
- (void)begin;

@end

