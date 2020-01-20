//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCUserSession, UIViewController, User;

@interface SCLocationAccessRequester : NSObject
{
    _Bool _shouldFilterDataProviderRequestToUseLocation;
    SCUserSession *_userSession;
    User *_user;
    CDUnknownBlockType _requestCompletionHandler;
    UIViewController *_viewController;
    NSString *_pageViewName;
}

+ (id)createLocationAccessRequesterWithUserSession:(id)arg1 user:(id)arg2 pageViewName:(id)arg3 viewController:(id)arg4 shouldFilterDataProviderRequestToUseLocation:(_Bool)arg5 requestCompletionHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) CDUnknownBlockType requestCompletionHandler; // @synthesize requestCompletionHandler=_requestCompletionHandler;
@property(readonly, nonatomic) _Bool shouldFilterDataProviderRequestToUseLocation; // @synthesize shouldFilterDataProviderRequestToUseLocation=_shouldFilterDataProviderRequestToUseLocation;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)hasPostponedLocationPermissions;
- (void)requestToUseUserLocationWithPreRequestBlock:(CDUnknownBlockType)arg1;
- (void)requestToUseLocation;
- (void)_userDeniedLocationPermissions;
- (void)_userPostponedLocationPermissions;
- (void)prepareToRequestToUseLocation;
- (_Bool)shouldRequestToUseLocation;
- (id)_initWithUserSession:(id)arg1 user:(id)arg2 pageViewName:(id)arg3 viewController:(id)arg4 shouldFilterDataProviderRequestToUseLocation:(_Bool)arg5 requestCompletionHandler:(CDUnknownBlockType)arg6;

@end

