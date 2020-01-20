//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSwipePresentationController.h"

@class SCGalleryViewController, SCUserSession;

@interface SCCameraToGalleryPresentationController : SCSwipePresentationController
{
    SCGalleryViewController *_galleryViewController;
    id <NavigationPageState> _navigationPageState;
    SCUserSession *_userSession;
}

@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <NavigationPageState> navigationPageState; // @synthesize navigationPageState=_navigationPageState;
@property(nonatomic) __weak SCGalleryViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
- (void).cxx_destruct;
- (void)_setDarkModeEnabled:(_Bool)arg1 tabBar:(id)arg2;
- (_Bool)_shouldAnimateTabBar:(long long)arg1;
- (void)_transitionWillBegin:(long long)arg1;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;

@end
