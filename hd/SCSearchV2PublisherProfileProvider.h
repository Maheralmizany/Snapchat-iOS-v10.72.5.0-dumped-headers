//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchV2PublisherProfileProviding.h"

@class NSString, SCUserSession;

@interface SCSearchV2PublisherProfileProvider : NSObject <SCSearchV2PublisherProfileProviding>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)viewControllerForProfileLaunchInfo:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

