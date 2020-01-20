//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class SCCognacNudgeFriendPresenter, SCCognacOperaDataSource, SCCognacSwipeTransitionPresenter, UIViewController;

@interface SCCognacRingFriendsRequestOperation : SCCognacWVJBRequestOperation
{
    id <SCCognacRingFriendsViewPresenting> _ringFriendsViewPresenter;
    UIViewController *_presentedViewController;
    SCCognacNudgeFriendPresenter *_nudgeSingleFriendPresenter;
    SCCognacSwipeTransitionPresenter *_friendsPickerPresenter;
    SCCognacOperaDataSource *_dataSource;
}

@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SCCognacSwipeTransitionPresenter *friendsPickerPresenter; // @synthesize friendsPickerPresenter=_friendsPickerPresenter;
@property(nonatomic) __weak SCCognacNudgeFriendPresenter *nudgeSingleFriendPresenter; // @synthesize nudgeSingleFriendPresenter=_nudgeSingleFriendPresenter;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <SCCognacRingFriendsViewPresenting> ringFriendsViewPresenter; // @synthesize ringFriendsViewPresenter=_ringFriendsViewPresenter;
- (void).cxx_destruct;
- (_Bool)_validateState;
- (void)run;

@end
