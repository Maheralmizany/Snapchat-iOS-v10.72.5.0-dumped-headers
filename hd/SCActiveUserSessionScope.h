//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession, SCUserSessionContext;

@interface SCActiveUserSessionScope : NSObject
{
    SCUserSession *_userSession;
    SCUserSessionContext *_userSessionContext;
    id <SCActiveUserSessionWorkflowDelegate> _activeUserSessionWorkflowDelegate;
}

@property(readonly, nonatomic) __weak id <SCActiveUserSessionWorkflowDelegate> activeUserSessionWorkflowDelegate; // @synthesize activeUserSessionWorkflowDelegate=_activeUserSessionWorkflowDelegate;
@property(readonly, nonatomic) SCUserSessionContext *userSessionContext; // @synthesize userSessionContext=_userSessionContext;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 userSessionContext:(id)arg2 workflowDelegate:(id)arg3;

@end

